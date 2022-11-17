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

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "cpp_pubsub/srv/integ.hpp"

#include <chrono>
#include <memory>
#include <string>



using namespace std::chrono_literals;
using Integ = cpp_pubsub::srv::Integ;
using namespace std::placeholders;
/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class MinimalPublisher : public rclcpp::Node {
 public:
  MinimalPublisher()
  : Node("minimal_publisher"), count_(0) {
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
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\n: [%s]",
                request->a.c_str());
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%s]", response->b.c_str());
  RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Now, shutting down ROS")
  rclcpp::shutdown();
}
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::Service<Integ>::SharedPtr service_;
  size_t count_;
  // const std::shared_ptr<Integ::Request> request;
  // std::shared_ptr<Integ::Response> response;
};

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}