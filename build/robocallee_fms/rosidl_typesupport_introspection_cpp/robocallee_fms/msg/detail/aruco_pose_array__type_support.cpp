// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robocallee_fms:msg/ArucoPoseArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robocallee_fms/msg/detail/aruco_pose_array__functions.h"
#include "robocallee_fms/msg/detail/aruco_pose_array__struct.hpp"
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

void ArucoPoseArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robocallee_fms::msg::ArucoPoseArray(_init);
}

void ArucoPoseArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robocallee_fms::msg::ArucoPoseArray *>(message_memory);
  typed_message->~ArucoPoseArray();
}

size_t size_function__ArucoPoseArray__poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robocallee_fms::msg::ArucoPose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ArucoPoseArray__poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robocallee_fms::msg::ArucoPose> *>(untyped_member);
  return &member[index];
}

void * get_function__ArucoPoseArray__poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robocallee_fms::msg::ArucoPose> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArucoPoseArray__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const robocallee_fms::msg::ArucoPose *>(
    get_const_function__ArucoPoseArray__poses(untyped_member, index));
  auto & value = *reinterpret_cast<robocallee_fms::msg::ArucoPose *>(untyped_value);
  value = item;
}

void assign_function__ArucoPoseArray__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<robocallee_fms::msg::ArucoPose *>(
    get_function__ArucoPoseArray__poses(untyped_member, index));
  const auto & value = *reinterpret_cast<const robocallee_fms::msg::ArucoPose *>(untyped_value);
  item = value;
}

void resize_function__ArucoPoseArray__poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robocallee_fms::msg::ArucoPose> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArucoPoseArray_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocallee_fms::msg::ArucoPoseArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robocallee_fms::msg::ArucoPose>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocallee_fms::msg::ArucoPoseArray, poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArucoPoseArray__poses,  // size() function pointer
    get_const_function__ArucoPoseArray__poses,  // get_const(index) function pointer
    get_function__ArucoPoseArray__poses,  // get(index) function pointer
    fetch_function__ArucoPoseArray__poses,  // fetch(index, &value) function pointer
    assign_function__ArucoPoseArray__poses,  // assign(index, value) function pointer
    resize_function__ArucoPoseArray__poses  // resize(index) function pointer
  },
  {
    "count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocallee_fms::msg::ArucoPoseArray, count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArucoPoseArray_message_members = {
  "robocallee_fms::msg",  // message namespace
  "ArucoPoseArray",  // message name
  3,  // number of fields
  sizeof(robocallee_fms::msg::ArucoPoseArray),
  false,  // has_any_key_member_
  ArucoPoseArray_message_member_array,  // message members
  ArucoPoseArray_init_function,  // function to initialize message memory (memory has to be allocated)
  ArucoPoseArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArucoPoseArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArucoPoseArray_message_members,
  get_message_typesupport_handle_function,
  &robocallee_fms__msg__ArucoPoseArray__get_type_hash,
  &robocallee_fms__msg__ArucoPoseArray__get_type_description,
  &robocallee_fms__msg__ArucoPoseArray__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robocallee_fms


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robocallee_fms::msg::ArucoPoseArray>()
{
  return &::robocallee_fms::msg::rosidl_typesupport_introspection_cpp::ArucoPoseArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robocallee_fms, msg, ArucoPoseArray)() {
  return &::robocallee_fms::msg::rosidl_typesupport_introspection_cpp::ArucoPoseArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
