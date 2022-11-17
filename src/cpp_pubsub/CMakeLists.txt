cmake_minimum_required(VERSION 3.5)
project(cpp_pubsub)
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

ament_export_dependencies(rosidl_default_generators)
find_package(rosidl_default_generators REQUIRED)
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/Integ.srv"
)
#publisher
add_executable(talker src/publisher.cpp)
ament_target_dependencies(talker rclcpp std_msgs)

#subscriber
add_executable(listener src/subscriber.cpp)
ament_target_dependencies(listener rclcpp std_msgs)

#client
add_executable(client_c src/client.cpp)
ament_target_dependencies(client_c rclcpp std_msgs)



rosidl_target_interfaces(talker 
                        ${PROJECT_NAME} "rosidl_typesupport_cpp")

rosidl_target_interfaces(client_c
                        ${PROJECT_NAME} "rosidl_typesupport_cpp")

install(TARGETS
  talker
  listener
  client_c
  DESTINATION lib/${PROJECT_NAME})

ament_package()
