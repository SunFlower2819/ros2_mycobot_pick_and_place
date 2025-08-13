// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocallee_fms:msg/ArucoPoseArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocallee_fms/msg/detail/aruco_pose_array__rosidl_typesupport_introspection_c.h"
#include "robocallee_fms/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocallee_fms/msg/detail/aruco_pose_array__functions.h"
#include "robocallee_fms/msg/detail/aruco_pose_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `poses`
#include "robocallee_fms/msg/aruco_pose.h"
// Member `poses`
#include "robocallee_fms/msg/detail/aruco_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__ArucoPoseArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocallee_fms__msg__ArucoPoseArray__init(message_memory);
}

void robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__ArucoPoseArray_fini_function(void * message_memory)
{
  robocallee_fms__msg__ArucoPoseArray__fini(message_memory);
}

size_t robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__size_function__ArucoPoseArray__poses(
  const void * untyped_member)
{
  const robocallee_fms__msg__ArucoPose__Sequence * member =
    (const robocallee_fms__msg__ArucoPose__Sequence *)(untyped_member);
  return member->size;
}

const void * robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__get_const_function__ArucoPoseArray__poses(
  const void * untyped_member, size_t index)
{
  const robocallee_fms__msg__ArucoPose__Sequence * member =
    (const robocallee_fms__msg__ArucoPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__get_function__ArucoPoseArray__poses(
  void * untyped_member, size_t index)
{
  robocallee_fms__msg__ArucoPose__Sequence * member =
    (robocallee_fms__msg__ArucoPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__fetch_function__ArucoPoseArray__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robocallee_fms__msg__ArucoPose * item =
    ((const robocallee_fms__msg__ArucoPose *)
    robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__get_const_function__ArucoPoseArray__poses(untyped_member, index));
  robocallee_fms__msg__ArucoPose * value =
    (robocallee_fms__msg__ArucoPose *)(untyped_value);
  *value = *item;
}

void robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__assign_function__ArucoPoseArray__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robocallee_fms__msg__ArucoPose * item =
    ((robocallee_fms__msg__ArucoPose *)
    robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__get_function__ArucoPoseArray__poses(untyped_member, index));
  const robocallee_fms__msg__ArucoPose * value =
    (const robocallee_fms__msg__ArucoPose *)(untyped_value);
  *item = *value;
}

bool robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__resize_function__ArucoPoseArray__poses(
  void * untyped_member, size_t size)
{
  robocallee_fms__msg__ArucoPose__Sequence * member =
    (robocallee_fms__msg__ArucoPose__Sequence *)(untyped_member);
  robocallee_fms__msg__ArucoPose__Sequence__fini(member);
  return robocallee_fms__msg__ArucoPose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__ArucoPoseArray_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocallee_fms__msg__ArucoPoseArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocallee_fms__msg__ArucoPoseArray, poses),  // bytes offset in struct
    NULL,  // default value
    robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__size_function__ArucoPoseArray__poses,  // size() function pointer
    robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__get_const_function__ArucoPoseArray__poses,  // get_const(index) function pointer
    robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__get_function__ArucoPoseArray__poses,  // get(index) function pointer
    robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__fetch_function__ArucoPoseArray__poses,  // fetch(index, &value) function pointer
    robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__assign_function__ArucoPoseArray__poses,  // assign(index, value) function pointer
    robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__resize_function__ArucoPoseArray__poses  // resize(index) function pointer
  },
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocallee_fms__msg__ArucoPoseArray, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__ArucoPoseArray_message_members = {
  "robocallee_fms__msg",  // message namespace
  "ArucoPoseArray",  // message name
  3,  // number of fields
  sizeof(robocallee_fms__msg__ArucoPoseArray),
  false,  // has_any_key_member_
  robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__ArucoPoseArray_message_member_array,  // message members
  robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__ArucoPoseArray_init_function,  // function to initialize message memory (memory has to be allocated)
  robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__ArucoPoseArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__ArucoPoseArray_message_type_support_handle = {
  0,
  &robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__ArucoPoseArray_message_members,
  get_message_typesupport_handle_function,
  &robocallee_fms__msg__ArucoPoseArray__get_type_hash,
  &robocallee_fms__msg__ArucoPoseArray__get_type_description,
  &robocallee_fms__msg__ArucoPoseArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocallee_fms
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocallee_fms, msg, ArucoPoseArray)() {
  robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__ArucoPoseArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__ArucoPoseArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocallee_fms, msg, ArucoPose)();
  if (!robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__ArucoPoseArray_message_type_support_handle.typesupport_identifier) {
    robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__ArucoPoseArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robocallee_fms__msg__ArucoPoseArray__rosidl_typesupport_introspection_c__ArucoPoseArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
