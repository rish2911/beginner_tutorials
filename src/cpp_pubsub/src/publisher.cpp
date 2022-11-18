/******************************************************************************
 * MIT License
Copyright (c) 2022 Rishabh Singh
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
* *******************************************************************************
*/

/**
 * @file publisher.cpp
 * @author Rishabh Singh (rsingh24@umd.edu)
 * @version 0.1
 * @date 2022-11-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */


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


/**
 * @Brief Class to represent publisher and service
 */
class MinimalPublisher : public rclcpp::Node {
 public:
  /**
   * @brief Construct a new Minimal Publisher object
   *
   */
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

    auto descript = rcl_interfaces::msg::ParameterDescriptor{};
    descript.description =
        "\nThis parameter modifies the queue size for the message published\
         on the topic";
    this->declare_parameter("queue", queues_, descript);
    queues_ = this->get_parameter("queue").get_parameter_value().get<int>();
    RCLCPP_INFO_STREAM(this->get_logger(), "Setting queue size to: " << queues_);


    publisher_ = this->create_publisher<std_msgs::msg::String>("topic", queues_);
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
  RCLCPP_DEBUG_STREAM(this->get_logger(), "sending back log for: [%s]"<< response->b.c_str());
  }

  else if (msg== "info") {
  RCLCPP_INFO_STREAM(this->get_logger(), "sending back log for: [%s]"<< response->b.c_str());
  }

  else if (msg== "warn") {
  RCLCPP_WARN_STREAM(this->get_logger(), "sending back log for: [%s]"<< response->b.c_str());
  }

  else if (msg== "fatal") {
  RCLCPP_FATAL_STREAM(this->get_logger(), "sending back log for: [%s]"<< response->b.c_str());
  }

  else if (msg== "error") {
  RCLCPP_ERROR_STREAM(this->get_logger(), "sending back log for: [%s]"<< response->b.c_str());
  }

  else {
  RCLCPP_WARN_STREAM(this->get_logger(), "sending back log for: [%s]"<< "Not the desired\
  argument, expected [debug], [info], [warn], [fatal], [error]");
  }

}


  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::Service<Integ>::SharedPtr service_;
  size_t count_;
  int queues_;
};

int main(int argc, char * argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}