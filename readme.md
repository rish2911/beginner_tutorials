[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

# ENPM 808X ROS Publisher/Subscriber/Services/tf2/unit-testing/ROSbag
## Overview
This repository contains tutorials from ROS2 Beginner: Client libraries. The tutorials cover publishers, subscribers, services, logging, and launch files with respect to the ROS2 Foxy.

## Team Members
 - **Driver** : Rishabh Singh (UID - 117511208)

## Dependencies
- **ubuntu 20**
- **ros2 foxy**
- **ament_cmake**
- **rclcpp**
- **std_msgs**

## Clone and Build

    1. Make a directory using command "mkdir name_of_your_directory"
    2. cd name name_of_your_directory
    3. git clone https://github.com/rish2911/beginner_tutorials.git
    4. rosdep install -i --from-path src --rosdistro foxy -y (for installing dependencies)
    5. colcon build
    6. source "your_colcon_workspace"/install/setup.bash

## Running Publisher and Subscriber

    1. Open a new terminal, navigate to name_of_your_directory, and source the setup files:
        . install/setup.bash
    2. ros2 run cpp_pubsub talker (for publisher)
    3. ros2 run cpp_pubsub listener (for subscriber)

## Running the service/client
    1. Open a new terminal, navigate to name_of_your_directory, and source the setup files:
        . install/setup.bash
    2. ros2 run cpp_pubsub talker (for publisher/server)
    3. ros2 run cpp_pubsub client_c input (for client request)

    input can be: fatal, error, info, warn, debug
    Note: This is just a way to request to modify the default message published by publisher 
    and also to display different logging levels

## Running the launch file
    1. Open a new terminal, navigate to name_of_your_directory, and source the setup files:
        source "your_colcon_workspace"/install/setup.bash
    2. ros2 launch cpp_pubsub cpp_pubsub.yaml

## Running the launch file with rosbag record and listening
    1. Open a new terminal, navigate to name_of_your_directory, and source the setup files:
        source "your_colcon_workspace"/install/setup.bash
    2. ros2 launch cpp_pubsub rosbag_launch.py record:=True
    3. ros2 bag play recorded_cpppubsub_bag
    4. ros2 run cpp_pubsub listener

## rqt console results
![RQT](https://github.com/rish2911/beginner_tutorials/blob/Week10_HW/src/cpp_pubsub/results/rqt_console.png)