// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from robocallee_fms:msg/ArucoPose.idl
// generated code does not contain a copyright notice
#ifndef ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robocallee_fms/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robocallee_fms/msg/detail/aruco_pose__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robocallee_fms
bool cdr_serialize_robocallee_fms__msg__ArucoPose(
  const robocallee_fms__msg__ArucoPose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robocallee_fms
bool cdr_deserialize_robocallee_fms__msg__ArucoPose(
  eprosima::fastcdr::Cdr &,
  robocallee_fms__msg__ArucoPose * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robocallee_fms
size_t get_serialized_size_robocallee_fms__msg__ArucoPose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robocallee_fms
size_t max_serialized_size_robocallee_fms__msg__ArucoPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robocallee_fms
bool cdr_serialize_key_robocallee_fms__msg__ArucoPose(
  const robocallee_fms__msg__ArucoPose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robocallee_fms
size_t get_serialized_size_key_robocallee_fms__msg__ArucoPose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robocallee_fms
size_t max_serialized_size_key_robocallee_fms__msg__ArucoPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robocallee_fms
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocallee_fms, msg, ArucoPose)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
