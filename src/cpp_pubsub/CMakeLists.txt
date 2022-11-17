cmake_minimum_required(VERSION 3.5)
project(cpp_pubsub)

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

#publisher
add_executable(talker src/server.cpp)
ament_target_dependencies(talker rclcpp std_msgs)

#subscriber
add_executable(listener src/client.cpp)
ament_target_dependencies(listener rclcpp std_msgs)

find_package(rosidl_default_generators REQUIRED)
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/integ.srv"
)
ament_export_dependencies(rosidl_default_generators)
install(TARGETS
  talker
  listener
  DESTINATION lib/${PROJECT_NAME})
ament_package()
