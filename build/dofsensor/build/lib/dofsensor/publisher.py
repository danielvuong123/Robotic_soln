import rclpy
from rclpy.node import Node

from interfaces.msg import SensorRead
from interfaces.msg import SensorRead2
from interfaces.srv import ReadSensor
from interfaces.srv import ReadSensor2
import socket
import sys
import numpy as np
import time
from threading import Thread, Timer


class Publisher(Node):

    def __init__(self,address,port,messageType,topicName,numSamples):
        super().__init__('publisher')
        self.address = address
        self.port = port
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.server_address = (self.address, self.port)
        print('connecting to {} port {}'.format(*self.server_address))
        self.sock.connect(self.server_address)
        self.numSamples = numSamples
        self.messageType = messageType
        self.publisher_ = self.create_publisher(messageType, topicName, 500)
        timer_period = 0.002  #500hz
        self.timer = self.create_timer(timer_period, self.timer_callback)



    def timer_callback(self):

        # Request 10 samples from the sensor
        message_string = str(self.numSamples)
        message = message_string.encode()
        self.sock.sendall(message)

        byte_data = self.sock.recv(self.port)
        data =  np.frombuffer(byte_data)
        msg = self.messageType()
        msg.reading = [float(i) for i in data]

        self.publisher_.publish(msg)

        self.get_logger().info('Publishing: {}'.format(msg.reading))

def main(args=None):
    rclpy.init(args=args)

    #We make 6 samples per call for the first sensor
    publisher1 = Publisher('127.0.0.3', 10000,SensorRead,'topic1', 6)

    #We make 12 calls for the second sensor
    publisher2 = Publisher('127.0.0.5', 11000,SensorRead2,'topic2', 12)
    t1 = Thread(target = rclpy.spin,args=[publisher1])
    t2 = Thread(target = rclpy.spin,args=[publisher2])
    t1.run()
    t2.run()


    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
