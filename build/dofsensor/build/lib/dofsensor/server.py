from interfaces.srv import ReadSensor
from interfaces.srv import ReadSensor2

import rclpy
from rclpy.node import Node
import socket
import sys
import numpy as np
import time
from threading import Thread, Timer

class Server(Node):

    def __init__(self,address,port,service,node_name,service_name):
        super().__init__(node_name)
        self.srv = self.create_service(service, service_name, self.read_callback)
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

        self.address = address
        self.port = port
        # Connect the socket to the port where the server is listening
        self.server_address = (address, port)
        print('connecting to {} port {}'.format(*self.server_address))
        self.sock.connect(self.server_address)

    def read_callback(self, request, response):

        self.get_logger().info('Incoming request\nnumsamples: {}'.format(request.numsamples))

        # Request 10 samples from the sensor
        message_string = str(request.numsamples)
        message = message_string.encode()
        self.sock.sendall(message)

        byte_data = self.sock.recv(self.port)
        data =  np.frombuffer(byte_data)
        response.response = [float(i) for i in data]
        return response


def main(args=None):
    rclpy.init(args=args)

    server = Server("127.0.0.3",10000,ReadSensor,'server1','read_sensor1')
    server2 = Server("127.0.0.5",11000,ReadSensor2,'server2','read_sensor2')
    t1 = Thread(target = rclpy.spin,args=[server])
    t2 = Thread(target = rclpy.spin,args=[server2])
    t1.run()
    t2.run()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
