import sys

from interfaces.srv import ReadSensor
import rclpy
from rclpy.node import Node


class Client(Node):

    def __init__(self,name):
        super().__init__('client')
        self.cli = self.create_client(ReadSensor, name)
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = ReadSensor.Request()

    def send_request(self, numsamples):
        self.req.numsamples = numsamples
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args=None):
    rclpy.init(args=args)

    client = Client('read_sensor1')
    response = client.send_request(int(sys.argv[1]))
    client.get_logger().info(
        'Reading {} samples, first value: {}'.format(sys.argv[1],response.response)
        )

    client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
