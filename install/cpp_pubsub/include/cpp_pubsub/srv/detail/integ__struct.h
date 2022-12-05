// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cpp_pubsub:srv/Integ.idl
// generated code does not contain a copyright notice

#ifndef CPP_PUBSUB__SRV__DETAIL__INTEG__STRUCT_H_
#define CPP_PUBSUB__SRV__DETAIL__INTEG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'a'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/Integ in the package cpp_pubsub.
typedef struct cpp_pubsub__srv__Integ_Request
{
  rosidl_runtime_c__String a;
} cpp_pubsub__srv__Integ_Request;

// Struct for a sequence of cpp_pubsub__srv__Integ_Request.
typedef struct cpp_pubsub__srv__Integ_Request__Sequence
{
  cpp_pubsub__srv__Integ_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_pubsub__srv__Integ_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'b'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in srv/Integ in the package cpp_pubsub.
typedef struct cpp_pubsub__srv__Integ_Response
{
  rosidl_runtime_c__String b;
} cpp_pubsub__srv__Integ_Response;

// Struct for a sequence of cpp_pubsub__srv__Integ_Response.
typedef struct cpp_pubsub__srv__Integ_Response__Sequence
{
  cpp_pubsub__srv__Integ_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_pubsub__srv__Integ_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CPP_PUBSUB__SRV__DETAIL__INTEG__STRUCT_H_
