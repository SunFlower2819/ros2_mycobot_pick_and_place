// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocallee_fms:msg/ArucoPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robocallee_fms/msg/aruco_pose.h"


#ifndef ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE__STRUCT_H_
#define ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ArucoPose in the package robocallee_fms.
typedef struct robocallee_fms__msg__ArucoPose
{
  int32_t id;
  double x;
  double y;
  double yaw;
} robocallee_fms__msg__ArucoPose;

// Struct for a sequence of robocallee_fms__msg__ArucoPose.
typedef struct robocallee_fms__msg__ArucoPose__Sequence
{
  robocallee_fms__msg__ArucoPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocallee_fms__msg__ArucoPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE__STRUCT_H_
