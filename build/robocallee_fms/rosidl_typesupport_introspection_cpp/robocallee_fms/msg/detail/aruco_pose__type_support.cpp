// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robocallee_fms:msg/ArucoPose.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robocallee_fms/msg/detail/aruco_pose__functions.h"
#include "robocallee_fms/msg/detail/aruco_pose__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robocallee_fms
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ArucoPose_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robocallee_fms::msg::ArucoPose(_init);
}

void ArucoPose_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robocallee_fms::msg::ArucoPose *>(message_memory);
  typed_message->~ArucoPose();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArucoPose_message_member_array[4] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocallee_fms::msg::ArucoPose, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocallee_fms::msg::ArucoPose, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocallee_fms::msg::ArucoPose, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocallee_fms::msg::ArucoPose, yaw),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArucoPose_message_members = {
  "robocallee_fms::msg",  // message namespace
  "ArucoPose",  // message name
  4,  // number of fields
  sizeof(robocallee_fms::msg::ArucoPose),
  false,  // has_any_key_member_
  ArucoPose_message_member_array,  // message members
  ArucoPose_init_function,  // function to initialize message memory (memory has to be allocated)
  ArucoPose_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArucoPose_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArucoPose_message_members,
  get_message_typesupport_handle_function,
  &robocallee_fms__msg__ArucoPose__get_type_hash,
  &robocallee_fms__msg__ArucoPose__get_type_description,
  &robocallee_fms__msg__ArucoPose__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robocallee_fms


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robocallee_fms::msg::ArucoPose>()
{
  return &::robocallee_fms::msg::rosidl_typesupport_introspection_cpp::ArucoPose_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robocallee_fms, msg, ArucoPose)() {
  return &::robocallee_fms::msg::rosidl_typesupport_introspection_cpp::ArucoPose_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
