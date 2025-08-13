// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robocallee_fms:msg/ArucoPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robocallee_fms/msg/detail/aruco_pose__rosidl_typesupport_introspection_c.h"
#include "robocallee_fms/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robocallee_fms/msg/detail/aruco_pose__functions.h"
#include "robocallee_fms/msg/detail/aruco_pose__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robocallee_fms__msg__ArucoPose__rosidl_typesupport_introspection_c__ArucoPose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robocallee_fms__msg__ArucoPose__init(message_memory);
}

void robocallee_fms__msg__ArucoPose__rosidl_typesupport_introspection_c__ArucoPose_fini_function(void * message_memory)
{
  robocallee_fms__msg__ArucoPose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robocallee_fms__msg__ArucoPose__rosidl_typesupport_introspection_c__ArucoPose_message_member_array[4] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocallee_fms__msg__ArucoPose, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocallee_fms__msg__ArucoPose, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocallee_fms__msg__ArucoPose, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robocallee_fms__msg__ArucoPose, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robocallee_fms__msg__ArucoPose__rosidl_typesupport_introspection_c__ArucoPose_message_members = {
  "robocallee_fms__msg",  // message namespace
  "ArucoPose",  // message name
  4,  // number of fields
  sizeof(robocallee_fms__msg__ArucoPose),
  false,  // has_any_key_member_
  robocallee_fms__msg__ArucoPose__rosidl_typesupport_introspection_c__ArucoPose_message_member_array,  // message members
  robocallee_fms__msg__ArucoPose__rosidl_typesupport_introspection_c__ArucoPose_init_function,  // function to initialize message memory (memory has to be allocated)
  robocallee_fms__msg__ArucoPose__rosidl_typesupport_introspection_c__ArucoPose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robocallee_fms__msg__ArucoPose__rosidl_typesupport_introspection_c__ArucoPose_message_type_support_handle = {
  0,
  &robocallee_fms__msg__ArucoPose__rosidl_typesupport_introspection_c__ArucoPose_message_members,
  get_message_typesupport_handle_function,
  &robocallee_fms__msg__ArucoPose__get_type_hash,
  &robocallee_fms__msg__ArucoPose__get_type_description,
  &robocallee_fms__msg__ArucoPose__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robocallee_fms
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocallee_fms, msg, ArucoPose)() {
  if (!robocallee_fms__msg__ArucoPose__rosidl_typesupport_introspection_c__ArucoPose_message_type_support_handle.typesupport_identifier) {
    robocallee_fms__msg__ArucoPose__rosidl_typesupport_introspection_c__ArucoPose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robocallee_fms__msg__ArucoPose__rosidl_typesupport_introspection_c__ArucoPose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
