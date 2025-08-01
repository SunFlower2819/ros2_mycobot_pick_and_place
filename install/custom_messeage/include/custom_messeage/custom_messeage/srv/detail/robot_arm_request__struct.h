// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_messeage:srv/RobotArmRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_messeage/srv/robot_arm_request.h"


#ifndef CUSTOM_MESSEAGE__SRV__DETAIL__ROBOT_ARM_REQUEST__STRUCT_H_
#define CUSTOM_MESSEAGE__SRV__DETAIL__ROBOT_ARM_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action'
// Member 'shoe_info'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RobotArmRequest in the package custom_messeage.
typedef struct custom_messeage__srv__RobotArmRequest_Request
{
  int32_t shelf_num;
  int32_t pinky_num;
  rosidl_runtime_c__String action;
  rosidl_runtime_c__String shoe_info;
} custom_messeage__srv__RobotArmRequest_Request;

// Struct for a sequence of custom_messeage__srv__RobotArmRequest_Request.
typedef struct custom_messeage__srv__RobotArmRequest_Request__Sequence
{
  custom_messeage__srv__RobotArmRequest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messeage__srv__RobotArmRequest_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/RobotArmRequest in the package custom_messeage.
typedef struct custom_messeage__srv__RobotArmRequest_Response
{
  bool success;
} custom_messeage__srv__RobotArmRequest_Response;

// Struct for a sequence of custom_messeage__srv__RobotArmRequest_Response.
typedef struct custom_messeage__srv__RobotArmRequest_Response__Sequence
{
  custom_messeage__srv__RobotArmRequest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messeage__srv__RobotArmRequest_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  custom_messeage__srv__RobotArmRequest_Event__request__MAX_SIZE = 1
};
// response
enum
{
  custom_messeage__srv__RobotArmRequest_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/RobotArmRequest in the package custom_messeage.
typedef struct custom_messeage__srv__RobotArmRequest_Event
{
  service_msgs__msg__ServiceEventInfo info;
  custom_messeage__srv__RobotArmRequest_Request__Sequence request;
  custom_messeage__srv__RobotArmRequest_Response__Sequence response;
} custom_messeage__srv__RobotArmRequest_Event;

// Struct for a sequence of custom_messeage__srv__RobotArmRequest_Event.
typedef struct custom_messeage__srv__RobotArmRequest_Event__Sequence
{
  custom_messeage__srv__RobotArmRequest_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_messeage__srv__RobotArmRequest_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MESSEAGE__SRV__DETAIL__ROBOT_ARM_REQUEST__STRUCT_H_
