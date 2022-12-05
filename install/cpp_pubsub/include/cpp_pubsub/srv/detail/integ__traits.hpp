// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cpp_pubsub:srv/Integ.idl
// generated code does not contain a copyright notice

#ifndef CPP_PUBSUB__SRV__DETAIL__INTEG__TRAITS_HPP_
#define CPP_PUBSUB__SRV__DETAIL__INTEG__TRAITS_HPP_

#include "cpp_pubsub/srv/detail/integ__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cpp_pubsub::srv::Integ_Request>()
{
  return "cpp_pubsub::srv::Integ_Request";
}

template<>
inline const char * name<cpp_pubsub::srv::Integ_Request>()
{
  return "cpp_pubsub/srv/Integ_Request";
}

template<>
struct has_fixed_size<cpp_pubsub::srv::Integ_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cpp_pubsub::srv::Integ_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cpp_pubsub::srv::Integ_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cpp_pubsub::srv::Integ_Response>()
{
  return "cpp_pubsub::srv::Integ_Response";
}

template<>
inline const char * name<cpp_pubsub::srv::Integ_Response>()
{
  return "cpp_pubsub/srv/Integ_Response";
}

template<>
struct has_fixed_size<cpp_pubsub::srv::Integ_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cpp_pubsub::srv::Integ_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cpp_pubsub::srv::Integ_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cpp_pubsub::srv::Integ>()
{
  return "cpp_pubsub::srv::Integ";
}

template<>
inline const char * name<cpp_pubsub::srv::Integ>()
{
  return "cpp_pubsub/srv/Integ";
}

template<>
struct has_fixed_size<cpp_pubsub::srv::Integ>
  : std::integral_constant<
    bool,
    has_fixed_size<cpp_pubsub::srv::Integ_Request>::value &&
    has_fixed_size<cpp_pubsub::srv::Integ_Response>::value
  >
{
};

template<>
struct has_bounded_size<cpp_pubsub::srv::Integ>
  : std::integral_constant<
    bool,
    has_bounded_size<cpp_pubsub::srv::Integ_Request>::value &&
    has_bounded_size<cpp_pubsub::srv::Integ_Response>::value
  >
{
};

template<>
struct is_service<cpp_pubsub::srv::Integ>
  : std::true_type
{
};

template<>
struct is_service_request<cpp_pubsub::srv::Integ_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cpp_pubsub::srv::Integ_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CPP_PUBSUB__SRV__DETAIL__INTEG__TRAITS_HPP_
