from interfaces.srv import ReadSensor2

import rclpy
from rclpy.node import Node
import socket
import sys
import numpy as np
import time

class Server(Node):

    def __init__(self):
        super().__init__('server')
        self.srv = self.create_service(ReadSensor2, 'read_sensor', self.read_callback)
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Connect the socket to the port where the server is listening
        self.server_address = ('127.0.0.5', 11000)
        print('connecting to {} port {}'.format(*self.server_address))
        self.sock.connect(self.server_address)

    def read_callback(self, request, response):

        self.get_logger().info('Incoming request\nnumsamples: {}'.format(request.numsamples))

        # Request 10 samples from the sensor
        message_string = str(request.numsamples)
        message = message_string.encode()
        self.sock.sendall(message)

        byte_data = self.sock.recv(11000)
        data =  np.frombuffer(byte_data)
        response.response = [float(i) for i in data]
        return response


def main(args=None):
    rclpy.init(args=args)

    server = Server()

    rclpy.spin(server)

    rclpy.shutdown()


if __name__ == '__main__':
    main()
