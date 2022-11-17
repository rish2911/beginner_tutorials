#include "rclcpp/rclcpp.hpp"
#include "cpp_pubsub/srv/integ.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>
#include <string>

using namespace std::chrono_literals;
// using Integ = cpp_pubsub::srv::Integ;

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  if (argc != 2) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "usage: write a string");
      return 1;
  }

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("sending_string_client");
  rclcpp::Client<cpp_pubsub::srv::Integ>::SharedPtr client =
    node->create_client<cpp_pubsub::srv::Integ>("service_to_minimal_publisher");

  auto request = std::make_shared<cpp_pubsub::srv::Integ::Request>();
  request->a = std::string(argv[1]);

  while (!client->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Interrupted while waiting for the service. Exiting.");
      return 0;
    }
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "service not available, waiting again...");
  }

  auto result = client->async_send_request(request);
  // Wait for the result.
  if (rclcpp::spin_until_future_complete(node, result) ==
    rclcpp::FutureReturnCode::SUCCESS)
  {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Message: %s", result.get()->b.c_str());
  } else {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service service to minimal_publisher");
  }

  rclcpp::shutdown();
  return 0;
}