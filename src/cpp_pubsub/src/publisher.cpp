// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.


#include <chrono>
#include <memory>
#include <string>
#include <map>


#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "cpp_pubsub/srv/integ.hpp"
#include <rcl_interfaces/msg/detail/parameter_descriptor__struct.hpp>



using namespace std::chrono_literals;
using Integ = cpp_pubsub::srv::Integ;
using namespace std::placeholders;
/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class MinimalPublisher : public rclcpp::Node {
 public:
  MinimalPublisher()
  : Node("minimal_publisher"), count_(0) {
    if (rcutils_logging_set_logger_level(
            this->get_logger().get_name(),
            RCUTILS_LOG_SEVERITY::RCUTILS_LOG_SEVERITY_DEBUG) ==
        RCUTILS_RET_OK) {
      RCLCPP_INFO_STREAM(this->get_logger(), "Set logger level DEBUG success.");
    } else {
      RCLCPP_ERROR_STREAM(this->get_logger(), "Set logger level DEBUG fails.");
    }


    publisher_ = this->create_publisher<std_msgs::msg::String>("topic", 10);
    timer_ = this->create_wall_timer(
      5000ms, std::bind(&MinimalPublisher::TimerCallback, this));
    
    service_ = this->create_service<Integ>("service_to_minimal_publisher", \
    std::bind(&MinimalPublisher::ChangeMessage, this, _1, _2));
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to change message.");
  }

 private:
  void TimerCallback() {
    auto message = std_msgs::msg::String();
    message.data = "My first ROS2 script! " + std::to_string(count_++);
    RCLCPP_INFO(this->get_logger(), "Published: '%s'", message.data.c_str());
    publisher_->publish(message);
  }

  void ChangeMessage(const std::shared_ptr<Integ::Request> request,
          std::shared_ptr<Integ::Response> response)
{
  response->b = request->a;
  RCLCPP_INFO(this->get_logger(), "Incoming request\n: [%s]",
                request->a.c_str());
  
  std::string msg;  
  msg = std::string(response->b.c_str());
  std::cout<<msg;

 
  if (msg== "debug") {
  RCLCPP_DEBUG(this->get_logger(), "sending back log for: [%s]", response->b.c_str());
  }

  else if (msg== "info") {
  RCLCPP_INFO(this->get_logger(), "sending back log for: [%s]", response->b.c_str());
  }

  else if (msg== "warn") {
  RCLCPP_WARN(this->get_logger(), "sending back log for: [%s]", response->b.c_str());
  }

  else if (msg== "fatal") {
  RCLCPP_FATAL(this->get_logger(), "sending back log for: [%s]", response->b.c_str());
  }

  else if (msg== "error") {
  RCLCPP_ERROR(this->get_logger(), "sending back log for: [%s]", response->b.c_str());
  }

  else {
  RCLCPP_WARN(this->get_logger(), "sending back log for: [%s]", "Not the desired\
  argument, expected [debug], [info], [warn], [fatal], [error]");
  }

}


  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::Service<Integ>::SharedPtr service_;
  size_t count_;
};

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}