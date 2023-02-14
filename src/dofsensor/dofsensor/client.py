import sys

from interfaces.srv import ReadSensor
from interfaces.srv import ReadSensor2

import rclpy
from rclpy.node import Node
from threading import Thread, Timer


class Client(Node):

    def __init__(self,clientName, name,service):
        super().__init__(clientName)
        self.cli = self.create_client(service, name)
        self.clientName = clientName
        self.service = service
        #Ensure the client is connected
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = service.Request()

    def send_request(self, numsamples):
        #Request the number of samples, wait until the job is complete, then return it.
        self.req.numsamples = numsamples
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args=None):
    rclpy.init(args=args)

    if int(sys.argv[2]) == 1:
        client = Client('client1','read_sensor1',ReadSensor)
        response = client.send_request(int(sys.argv[1]))
        client.get_logger().info('Reading {} samples: {}'.format(sys.argv[1],response.response))
    elif int(sys.argv[2]) == 2:
        client = Client('client2','read_sensor2',ReadSensor2)
        response = client.send_request(int(sys.argv[1]))
        client.get_logger().info('Reading {} samples: {}'.format(sys.argv[1],response.response))
    client.destroy_node()
    #
    # #Create our client, and take in the command input as argument
    # client1 = Client('client1','read_sensor2',ReadSensor2)
    # # client2 = Client('client2','read_sensor2',ReadSensor2)
    # def makeRequest(client,number_of_samples):
    #     response = client.send_request(number_of_samples)
    #     client.get_logger().info('Reading {} samples: {}'.format(sys.argv[1],response.response))


    # t1 = Thread(target=makeRequest,args=[client1,int(sys.argv[1])])
    # t2 = Thread(target=makeRequest,args=[client2,int(sys.argv[1])])
    # if int(sys.argv[2])==1:
    #     t1.run()
    # elif int(sys.argv[2])==2:
    #     t2.run()


    rclpy.shutdown()


if __name__ == '__main__':
    main()
