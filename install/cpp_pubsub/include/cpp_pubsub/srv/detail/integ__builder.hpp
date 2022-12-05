// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cpp_pubsub:srv/Integ.idl
// generated code does not contain a copyright notice

#ifndef CPP_PUBSUB__SRV__DETAIL__INTEG__BUILDER_HPP_
#define CPP_PUBSUB__SRV__DETAIL__INTEG__BUILDER_HPP_

#include "cpp_pubsub/srv/detail/integ__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cpp_pubsub
{

namespace srv
{

namespace builder
{

class Init_Integ_Request_a
{
public:
  Init_Integ_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cpp_pubsub::srv::Integ_Request a(::cpp_pubsub::srv::Integ_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_pubsub::srv::Integ_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_pubsub::srv::Integ_Request>()
{
  return cpp_pubsub::srv::builder::Init_Integ_Request_a();
}

}  // namespace cpp_pubsub


namespace cpp_pubsub
{

namespace srv
{

namespace builder
{

class Init_Integ_Response_b
{
public:
  Init_Integ_Response_b()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cpp_pubsub::srv::Integ_Response b(::cpp_pubsub::srv::Integ_Response::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_pubsub::srv::Integ_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_pubsub::srv::Integ_Response>()
{
  return cpp_pubsub::srv::builder::Init_Integ_Response_b();
}

}  // namespace cpp_pubsub

#endif  // CPP_PUBSUB__SRV__DETAIL__INTEG__BUILDER_HPP_
