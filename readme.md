[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

# ENPM 808X ROS Publisher/Subscriber
## Overview
This repository contains tutorials from ROS2 Beginner: Client libraries. The tutorials cover publishers, subscribers, services, logging, and launch files with respect to the ROS2 Foxy.

## Team Members
 - **Driver** : Rishabh Singh (UID - 117511208)

## Instructions

Submit your beginner_tutorials "First Publisher/Subscriber" ROS package on GitHub after working through the tutorials:

    a) Create a project called "beginner_tutorials" on GitHub before starting,
    b) Create a branch called "ros_pub_sub" and proceed with the following steps.
    c) Modify the publisher node to publish a custom string message
    d) Modify the tutorial code to follow Google C++ Style Guide (with course modifications) 
    e) Update package.xml and CMakeLists.txt as needed. 
    f) Run cpplint on your ROS package files, fix applicable issues (if any) and save the output as a text file to the repository
    g) Run cppcheck on your ROS package files, fix applicable issues (if any) and save the output as a text file to the repository
    h) Create a readme.md that provides an overview and build/run steps. Define assumptions/dependencies (e.g. ROS 2 Humble).
    i) Push the final commits to GitHub once done.
    j) Merge branch to master and create a tag called "ros_pub_sub_Release".



## Dependencies
- **ubuntu 20**
- **ros2 foxy**
- **ament_cmake**
- **rclcpp**
- **std_msgs**

## Clone and Build

    Make a directory using command "mkdir name_of_your_directory"
    cd name name_of_your_directory
    git clone  ....
    rosdep install -i --from-path src --rosdistro foxy -y (for installing dependencies)
    colcon build

## Running publisher and subscriber
    Open a new terminal, navigate to name_of_your_directory, and source the setup files:
    . install/setup.bash
    ros2 run cpp_pubsub talker
    ros2 run cpp_pubsub listener