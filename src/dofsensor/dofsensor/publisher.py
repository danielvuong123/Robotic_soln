import rclpy
from rclpy.node import Node

from interfaces.msg import SensorRead
from interfaces.srv import ReadSensor
from interfaces.srv import ReadSensor2

class Publisher(Node):

    def __init__(self):
        super().__init__('publisher')
        self.cli1 = self.create_client(ReadSensor, 'read_sensor1')
        while not self.cli1.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.cli2 = self.create_client(ReadSensor2, 'read_sensor2')
        while not self.cli2.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.publisher_ = self.create_publisher(SensorRead, 'topic', 500)
        timer_period = 0.02  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.req1 = ReadSensor.Request()
        self.req2 = ReadSensor2.Request()

    def timer_callback(self):
        self.req1.numsamples = 10
        self.req2.numsamples = 10
        self.future1 = self.cli1.call_async(self.req1)
        self.future2 = self.cli2.call_async(self.req2)
        rclpy.spin_until_future_complete(self, self.future1)
        rclpy.spin_until_future_complete(self, self.future2)
        self.publisher_.publish(self.future1.result())
        self.publisher_.publish(self.future2.result())
        self.get_logger().info('Publishing: "%s"' % self.future1.result())
        self.get_logger().info('Publishing: "%s"' % self.future2.result())

def main(args=None):
    rclpy.init(args=args)

    publisher = Publisher()

    rclpy.spin(publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
