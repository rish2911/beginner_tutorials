// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cpp_pubsub:srv/Integ.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cpp_pubsub/srv/detail/integ__rosidl_typesupport_introspection_c.h"
#include "cpp_pubsub/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cpp_pubsub/srv/detail/integ__functions.h"
#include "cpp_pubsub/srv/detail/integ__struct.h"


// Include directives for member types
// Member `a`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Integ_Request__rosidl_typesupport_introspection_c__Integ_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cpp_pubsub__srv__Integ_Request__init(message_memory);
}

void Integ_Request__rosidl_typesupport_introspection_c__Integ_Request_fini_function(void * message_memory)
{
  cpp_pubsub__srv__Integ_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Integ_Request__rosidl_typesupport_introspection_c__Integ_Request_message_member_array[1] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_pubsub__srv__Integ_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Integ_Request__rosidl_typesupport_introspection_c__Integ_Request_message_members = {
  "cpp_pubsub__srv",  // message namespace
  "Integ_Request",  // message name
  1,  // number of fields
  sizeof(cpp_pubsub__srv__Integ_Request),
  Integ_Request__rosidl_typesupport_introspection_c__Integ_Request_message_member_array,  // message members
  Integ_Request__rosidl_typesupport_introspection_c__Integ_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Integ_Request__rosidl_typesupport_introspection_c__Integ_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Integ_Request__rosidl_typesupport_introspection_c__Integ_Request_message_type_support_handle = {
  0,
  &Integ_Request__rosidl_typesupport_introspection_c__Integ_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cpp_pubsub
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_pubsub, srv, Integ_Request)() {
  if (!Integ_Request__rosidl_typesupport_introspection_c__Integ_Request_message_type_support_handle.typesupport_identifier) {
    Integ_Request__rosidl_typesupport_introspection_c__Integ_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Integ_Request__rosidl_typesupport_introspection_c__Integ_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cpp_pubsub/srv/detail/integ__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cpp_pubsub/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cpp_pubsub/srv/detail/integ__functions.h"
// already included above
// #include "cpp_pubsub/srv/detail/integ__struct.h"


// Include directives for member types
// Member `b`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Integ_Response__rosidl_typesupport_introspection_c__Integ_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cpp_pubsub__srv__Integ_Response__init(message_memory);
}

void Integ_Response__rosidl_typesupport_introspection_c__Integ_Response_fini_function(void * message_memory)
{
  cpp_pubsub__srv__Integ_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Integ_Response__rosidl_typesupport_introspection_c__Integ_Response_message_member_array[1] = {
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_pubsub__srv__Integ_Response, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Integ_Response__rosidl_typesupport_introspection_c__Integ_Response_message_members = {
  "cpp_pubsub__srv",  // message namespace
  "Integ_Response",  // message name
  1,  // number of fields
  sizeof(cpp_pubsub__srv__Integ_Response),
  Integ_Response__rosidl_typesupport_introspection_c__Integ_Response_message_member_array,  // message members
  Integ_Response__rosidl_typesupport_introspection_c__Integ_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Integ_Response__rosidl_typesupport_introspection_c__Integ_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Integ_Response__rosidl_typesupport_introspection_c__Integ_Response_message_type_support_handle = {
  0,
  &Integ_Response__rosidl_typesupport_introspection_c__Integ_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cpp_pubsub
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_pubsub, srv, Integ_Response)() {
  if (!Integ_Response__rosidl_typesupport_introspection_c__Integ_Response_message_type_support_handle.typesupport_identifier) {
    Integ_Response__rosidl_typesupport_introspection_c__Integ_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Integ_Response__rosidl_typesupport_introspection_c__Integ_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cpp_pubsub/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cpp_pubsub/srv/detail/integ__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cpp_pubsub__srv__detail__integ__rosidl_typesupport_introspection_c__Integ_service_members = {
  "cpp_pubsub__srv",  // service namespace
  "Integ",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cpp_pubsub__srv__detail__integ__rosidl_typesupport_introspection_c__Integ_Request_message_type_support_handle,
  NULL  // response message
  // cpp_pubsub__srv__detail__integ__rosidl_typesupport_introspection_c__Integ_Response_message_type_support_handle
};

static rosidl_service_type_support_t cpp_pubsub__srv__detail__integ__rosidl_typesupport_introspection_c__Integ_service_type_support_handle = {
  0,
  &cpp_pubsub__srv__detail__integ__rosidl_typesupport_introspection_c__Integ_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_pubsub, srv, Integ_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_pubsub, srv, Integ_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cpp_pubsub
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_pubsub, srv, Integ)() {
  if (!cpp_pubsub__srv__detail__integ__rosidl_typesupport_introspection_c__Integ_service_type_support_handle.typesupport_identifier) {
    cpp_pubsub__srv__detail__integ__rosidl_typesupport_introspection_c__Integ_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cpp_pubsub__srv__detail__integ__rosidl_typesupport_introspection_c__Integ_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_pubsub, srv, Integ_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_pubsub, srv, Integ_Response)()->data;
  }

  return &cpp_pubsub__srv__detail__integ__rosidl_typesupport_introspection_c__Integ_service_type_support_handle;
}
