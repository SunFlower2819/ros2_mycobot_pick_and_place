// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robocallee_fms:msg/ArucoPoseArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robocallee_fms/msg/aruco_pose_array.h"


#ifndef ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE_ARRAY__STRUCT_H_
#define ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'poses'
#include "robocallee_fms/msg/detail/aruco_pose__struct.h"

/// Struct defined in msg/ArucoPoseArray in the package robocallee_fms.
typedef struct robocallee_fms__msg__ArucoPoseArray
{
  std_msgs__msg__Header header;
  robocallee_fms__msg__ArucoPose__Sequence poses;
  int32_t count;
} robocallee_fms__msg__ArucoPoseArray;

// Struct for a sequence of robocallee_fms__msg__ArucoPoseArray.
typedef struct robocallee_fms__msg__ArucoPoseArray__Sequence
{
  robocallee_fms__msg__ArucoPoseArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robocallee_fms__msg__ArucoPoseArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE_ARRAY__STRUCT_H_
