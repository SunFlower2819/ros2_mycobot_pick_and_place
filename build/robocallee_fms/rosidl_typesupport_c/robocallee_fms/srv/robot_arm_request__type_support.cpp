// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from robocallee_fms:srv/RobotArmRequest.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "robocallee_fms/srv/detail/robot_arm_request__struct.h"
#include "robocallee_fms/srv/detail/robot_arm_request__type_support.h"
#include "robocallee_fms/srv/detail/robot_arm_request__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace robocallee_fms
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _RobotArmRequest_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotArmRequest_Request_type_support_ids_t;

static const _RobotArmRequest_Request_type_support_ids_t _RobotArmRequest_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RobotArmRequest_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotArmRequest_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotArmRequest_Request_type_support_symbol_names_t _RobotArmRequest_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocallee_fms, srv, RobotArmRequest_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocallee_fms, srv, RobotArmRequest_Request)),
  }
};

typedef struct _RobotArmRequest_Request_type_support_data_t
{
  void * data[2];
} _RobotArmRequest_Request_type_support_data_t;

static _RobotArmRequest_Request_type_support_data_t _RobotArmRequest_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotArmRequest_Request_message_typesupport_map = {
  2,
  "robocallee_fms",
  &_RobotArmRequest_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RobotArmRequest_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RobotArmRequest_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotArmRequest_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotArmRequest_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &robocallee_fms__srv__RobotArmRequest_Request__get_type_hash,
  &robocallee_fms__srv__RobotArmRequest_Request__get_type_description,
  &robocallee_fms__srv__RobotArmRequest_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robocallee_fms

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robocallee_fms, srv, RobotArmRequest_Request)() {
  return &::robocallee_fms::srv::rosidl_typesupport_c::RobotArmRequest_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robocallee_fms/srv/detail/robot_arm_request__struct.h"
// already included above
// #include "robocallee_fms/srv/detail/robot_arm_request__type_support.h"
// already included above
// #include "robocallee_fms/srv/detail/robot_arm_request__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robocallee_fms
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _RobotArmRequest_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotArmRequest_Response_type_support_ids_t;

static const _RobotArmRequest_Response_type_support_ids_t _RobotArmRequest_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RobotArmRequest_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotArmRequest_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotArmRequest_Response_type_support_symbol_names_t _RobotArmRequest_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocallee_fms, srv, RobotArmRequest_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocallee_fms, srv, RobotArmRequest_Response)),
  }
};

typedef struct _RobotArmRequest_Response_type_support_data_t
{
  void * data[2];
} _RobotArmRequest_Response_type_support_data_t;

static _RobotArmRequest_Response_type_support_data_t _RobotArmRequest_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotArmRequest_Response_message_typesupport_map = {
  2,
  "robocallee_fms",
  &_RobotArmRequest_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RobotArmRequest_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RobotArmRequest_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotArmRequest_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotArmRequest_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &robocallee_fms__srv__RobotArmRequest_Response__get_type_hash,
  &robocallee_fms__srv__RobotArmRequest_Response__get_type_description,
  &robocallee_fms__srv__RobotArmRequest_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robocallee_fms

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robocallee_fms, srv, RobotArmRequest_Response)() {
  return &::robocallee_fms::srv::rosidl_typesupport_c::RobotArmRequest_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robocallee_fms/srv/detail/robot_arm_request__struct.h"
// already included above
// #include "robocallee_fms/srv/detail/robot_arm_request__type_support.h"
// already included above
// #include "robocallee_fms/srv/detail/robot_arm_request__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robocallee_fms
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _RobotArmRequest_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotArmRequest_Event_type_support_ids_t;

static const _RobotArmRequest_Event_type_support_ids_t _RobotArmRequest_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RobotArmRequest_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotArmRequest_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotArmRequest_Event_type_support_symbol_names_t _RobotArmRequest_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocallee_fms, srv, RobotArmRequest_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocallee_fms, srv, RobotArmRequest_Event)),
  }
};

typedef struct _RobotArmRequest_Event_type_support_data_t
{
  void * data[2];
} _RobotArmRequest_Event_type_support_data_t;

static _RobotArmRequest_Event_type_support_data_t _RobotArmRequest_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotArmRequest_Event_message_typesupport_map = {
  2,
  "robocallee_fms",
  &_RobotArmRequest_Event_message_typesupport_ids.typesupport_identifier[0],
  &_RobotArmRequest_Event_message_typesupport_symbol_names.symbol_name[0],
  &_RobotArmRequest_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RobotArmRequest_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotArmRequest_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &robocallee_fms__srv__RobotArmRequest_Event__get_type_hash,
  &robocallee_fms__srv__RobotArmRequest_Event__get_type_description,
  &robocallee_fms__srv__RobotArmRequest_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robocallee_fms

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robocallee_fms, srv, RobotArmRequest_Event)() {
  return &::robocallee_fms::srv::rosidl_typesupport_c::RobotArmRequest_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robocallee_fms/srv/detail/robot_arm_request__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace robocallee_fms
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _RobotArmRequest_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RobotArmRequest_type_support_ids_t;

static const _RobotArmRequest_type_support_ids_t _RobotArmRequest_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RobotArmRequest_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RobotArmRequest_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RobotArmRequest_type_support_symbol_names_t _RobotArmRequest_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robocallee_fms, srv, RobotArmRequest)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robocallee_fms, srv, RobotArmRequest)),
  }
};

typedef struct _RobotArmRequest_type_support_data_t
{
  void * data[2];
} _RobotArmRequest_type_support_data_t;

static _RobotArmRequest_type_support_data_t _RobotArmRequest_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RobotArmRequest_service_typesupport_map = {
  2,
  "robocallee_fms",
  &_RobotArmRequest_service_typesupport_ids.typesupport_identifier[0],
  &_RobotArmRequest_service_typesupport_symbol_names.symbol_name[0],
  &_RobotArmRequest_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RobotArmRequest_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RobotArmRequest_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &RobotArmRequest_Request_message_type_support_handle,
  &RobotArmRequest_Response_message_type_support_handle,
  &RobotArmRequest_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robocallee_fms,
    srv,
    RobotArmRequest
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robocallee_fms,
    srv,
    RobotArmRequest
  ),
  &robocallee_fms__srv__RobotArmRequest__get_type_hash,
  &robocallee_fms__srv__RobotArmRequest__get_type_description,
  &robocallee_fms__srv__RobotArmRequest__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robocallee_fms

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, robocallee_fms, srv, RobotArmRequest)() {
  return &::robocallee_fms::srv::rosidl_typesupport_c::RobotArmRequest_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
