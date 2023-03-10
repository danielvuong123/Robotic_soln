# Robotic_HW

## Solution Directions
First, we must layout the version of Ros2 used for the development of this package. This package was compuled with the most recent verson of Ros2: Foxy. This was also built within a Windows device, and commands should be run a VS Native Tools Command Prompt. The necessary commands and their purposes are as follows:
- Initialize ros2 and services: "call install/setup.bat"
- Start sensor: "python sensor.py"
- Begin server service for either sensor: "ros2 run dofsensor service {sensor#}"
- Send client request to either server: "ros2 run dofsensor client {number of samples} {sensor#}"
- Start publisher to read from server to topics: "ros2 run dofsensor talker"

For the publisher, the grading criteria specifies explaining the chosen # of samples for each of the sensors. Although primited, the values i've chosen for the first sensor is 6 and for the second I've chosen 20. For the first sensor, I understand that our goal is to publish the most data possible with no loss. If our publisher executes at a rate of once per .002s (500hz), then in a perfect world (without delay) we would publish 4 samples, capturing all 2000 datapoints published by the sensor (2000hz). However due to the deley, of .001, we understand that we will lose about 2 data points per call, thus we must grab 6 datapoints instead to compenstate for the delay. The same logic is used to compute the value for the second sensor.

## Context
The design of our cells in Machina Labs has evolved over the past years. Currently, each of our cells has two articulated industrial robots on rails (a total of 7 axes) and a frame with hydraulic clamps. For the parts to form correctly, we must exert and maintain a dynamic force during the forming in a very accurate location in space. Currently, each robot is equipped with a load cell. See a quick video about our process [here](https://www.youtube.com/watch?v=iqYMprTEXRI). We are using ROS2 to collect the data from the network and control the robots in real-time. As a robotic engineer, we keep developing different modules for our network to add features to the system.  

## Objective
The goal of This project is to build a ROS2 network that collects data from 3-DOF sensors and makes the filtered data available as a ROS service and topic. Since we cannot send a real sensor to all of our applicants, we made a simple simulator (sensor.py) that mimics the behavior of a real sensor but with random data.
- The first task is to make a costume service for 3-DOF sensor
- The second task is to make a ROS2 service server that continuously reads data from the sensor and has the latest filter data available for the client service that you make.
- Finally, please make a simple client that calls two of these services and publishes them a topic with 500Hz. Please keep in mind that your service servers can run slower than 500Hz.
- You can define a second server in the simulator to modify the code and run two at the same time.
- You can check the example.py to see how to make calls to the sensor

## Grading Criteria
- We???re looking for code that is clean, readable, performant, and maintainable.
- The developer must think through the process of deploying and using the solution and provide the necessary documentation.
- The sensor samples with 2000Hz, and you can request a specific number of samples in each call. Each call also has a ~1ms delay on top of the sampling time. We would like to hear your thought on picking the number of samples that you read in each call.

## Submission
To submit the assignment, do the following:

1. Navigate to GitHub's project import page: [https://github.com/new/import](https://github.com/new/import)

2. In the box titled "Your old repository's clone URL", paste the homework repository's link: [https://github.com/Machina-Labs/robotic_hw](https://github.com/Machina-Labs/robotic_hw)

3. In the box titled "Repository Name", add a name for your local homework (ex. `Robotic_soln`)

4. Set the privacy level to "Public", then click "Begin Import" button at bottom of the page.

5. Develop your homework solution in the cloned repository and push it to GitHub when you're done. Extra points for good Git hygiene.

6. Send us the link to your repository.
