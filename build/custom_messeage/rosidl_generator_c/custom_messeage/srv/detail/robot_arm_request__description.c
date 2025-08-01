// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from custom_messeage:srv/RobotArmRequest.idl
// generated code does not contain a copyright notice

#include "custom_messeage/srv/detail/robot_arm_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_custom_messeage
const rosidl_type_hash_t *
custom_messeage__srv__RobotArmRequest__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf1, 0x1b, 0x27, 0xbf, 0xd2, 0x9d, 0x81, 0xfc,
      0x2b, 0x52, 0x8a, 0xae, 0x91, 0x73, 0x63, 0x47,
      0x08, 0x6a, 0x0a, 0x48, 0xe8, 0x27, 0x03, 0xe9,
      0x99, 0x8b, 0x85, 0xa8, 0xfb, 0xd4, 0x7e, 0x65,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_messeage
const rosidl_type_hash_t *
custom_messeage__srv__RobotArmRequest_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcc, 0xac, 0xe1, 0x0b, 0xe6, 0x16, 0xe7, 0x7f,
      0x85, 0x0d, 0x18, 0xbd, 0x82, 0xf4, 0x1f, 0x4b,
      0x46, 0x2e, 0x06, 0x7e, 0xf0, 0xab, 0x2f, 0x73,
      0x6d, 0x7e, 0x2d, 0xfc, 0xfd, 0x2b, 0x46, 0x98,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_messeage
const rosidl_type_hash_t *
custom_messeage__srv__RobotArmRequest_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x29, 0xe8, 0x12, 0xeb, 0x7d, 0xf6, 0x1f, 0x40,
      0x5d, 0xc3, 0x30, 0x42, 0x50, 0x38, 0x0f, 0xb0,
      0xeb, 0x9d, 0x5a, 0x11, 0x90, 0xda, 0x2b, 0xd4,
      0x5b, 0x9a, 0x94, 0xe3, 0x5e, 0xf3, 0x10, 0xfb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_custom_messeage
const rosidl_type_hash_t *
custom_messeage__srv__RobotArmRequest_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2c, 0x0c, 0x11, 0x79, 0xdb, 0x58, 0x00, 0xa0,
      0x1c, 0xbe, 0xa1, 0x08, 0x1f, 0xa6, 0xb2, 0x68,
      0xb7, 0x68, 0x1b, 0x51, 0x1a, 0x63, 0x0a, 0x92,
      0x5d, 0x79, 0x8a, 0xe0, 0x55, 0x02, 0x3f, 0x4f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char custom_messeage__srv__RobotArmRequest__TYPE_NAME[] = "custom_messeage/srv/RobotArmRequest";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char custom_messeage__srv__RobotArmRequest_Event__TYPE_NAME[] = "custom_messeage/srv/RobotArmRequest_Event";
static char custom_messeage__srv__RobotArmRequest_Request__TYPE_NAME[] = "custom_messeage/srv/RobotArmRequest_Request";
static char custom_messeage__srv__RobotArmRequest_Response__TYPE_NAME[] = "custom_messeage/srv/RobotArmRequest_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char custom_messeage__srv__RobotArmRequest__FIELD_NAME__request_message[] = "request_message";
static char custom_messeage__srv__RobotArmRequest__FIELD_NAME__response_message[] = "response_message";
static char custom_messeage__srv__RobotArmRequest__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field custom_messeage__srv__RobotArmRequest__FIELDS[] = {
  {
    {custom_messeage__srv__RobotArmRequest__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_messeage__srv__RobotArmRequest_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {custom_messeage__srv__RobotArmRequest__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_messeage__srv__RobotArmRequest_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {custom_messeage__srv__RobotArmRequest__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {custom_messeage__srv__RobotArmRequest_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_messeage__srv__RobotArmRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {custom_messeage__srv__RobotArmRequest_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {custom_messeage__srv__RobotArmRequest_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {custom_messeage__srv__RobotArmRequest_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_messeage__srv__RobotArmRequest__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_messeage__srv__RobotArmRequest__TYPE_NAME, 35, 35},
      {custom_messeage__srv__RobotArmRequest__FIELDS, 3, 3},
    },
    {custom_messeage__srv__RobotArmRequest__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = custom_messeage__srv__RobotArmRequest_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = custom_messeage__srv__RobotArmRequest_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = custom_messeage__srv__RobotArmRequest_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_messeage__srv__RobotArmRequest_Request__FIELD_NAME__shelf_num[] = "shelf_num";
static char custom_messeage__srv__RobotArmRequest_Request__FIELD_NAME__pinky_num[] = "pinky_num";
static char custom_messeage__srv__RobotArmRequest_Request__FIELD_NAME__action[] = "action";
static char custom_messeage__srv__RobotArmRequest_Request__FIELD_NAME__shoe_info[] = "shoe_info";

static rosidl_runtime_c__type_description__Field custom_messeage__srv__RobotArmRequest_Request__FIELDS[] = {
  {
    {custom_messeage__srv__RobotArmRequest_Request__FIELD_NAME__shelf_num, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_messeage__srv__RobotArmRequest_Request__FIELD_NAME__pinky_num, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_messeage__srv__RobotArmRequest_Request__FIELD_NAME__action, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {custom_messeage__srv__RobotArmRequest_Request__FIELD_NAME__shoe_info, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_messeage__srv__RobotArmRequest_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_messeage__srv__RobotArmRequest_Request__TYPE_NAME, 43, 43},
      {custom_messeage__srv__RobotArmRequest_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_messeage__srv__RobotArmRequest_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field custom_messeage__srv__RobotArmRequest_Response__FIELDS[] = {
  {
    {custom_messeage__srv__RobotArmRequest_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_messeage__srv__RobotArmRequest_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_messeage__srv__RobotArmRequest_Response__TYPE_NAME, 44, 44},
      {custom_messeage__srv__RobotArmRequest_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char custom_messeage__srv__RobotArmRequest_Event__FIELD_NAME__info[] = "info";
static char custom_messeage__srv__RobotArmRequest_Event__FIELD_NAME__request[] = "request";
static char custom_messeage__srv__RobotArmRequest_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field custom_messeage__srv__RobotArmRequest_Event__FIELDS[] = {
  {
    {custom_messeage__srv__RobotArmRequest_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {custom_messeage__srv__RobotArmRequest_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {custom_messeage__srv__RobotArmRequest_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {custom_messeage__srv__RobotArmRequest_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {custom_messeage__srv__RobotArmRequest_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription custom_messeage__srv__RobotArmRequest_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {custom_messeage__srv__RobotArmRequest_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {custom_messeage__srv__RobotArmRequest_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
custom_messeage__srv__RobotArmRequest_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {custom_messeage__srv__RobotArmRequest_Event__TYPE_NAME, 41, 41},
      {custom_messeage__srv__RobotArmRequest_Event__FIELDS, 3, 3},
    },
    {custom_messeage__srv__RobotArmRequest_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = custom_messeage__srv__RobotArmRequest_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = custom_messeage__srv__RobotArmRequest_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 shelf_num\n"
  "int32 pinky_num\n"
  "string action\n"
  "string shoe_info\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
custom_messeage__srv__RobotArmRequest__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_messeage__srv__RobotArmRequest__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 79, 79},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_messeage__srv__RobotArmRequest_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_messeage__srv__RobotArmRequest_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_messeage__srv__RobotArmRequest_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_messeage__srv__RobotArmRequest_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
custom_messeage__srv__RobotArmRequest_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {custom_messeage__srv__RobotArmRequest_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_messeage__srv__RobotArmRequest__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_messeage__srv__RobotArmRequest__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *custom_messeage__srv__RobotArmRequest_Event__get_individual_type_description_source(NULL);
    sources[3] = *custom_messeage__srv__RobotArmRequest_Request__get_individual_type_description_source(NULL);
    sources[4] = *custom_messeage__srv__RobotArmRequest_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_messeage__srv__RobotArmRequest_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_messeage__srv__RobotArmRequest_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_messeage__srv__RobotArmRequest_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_messeage__srv__RobotArmRequest_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
custom_messeage__srv__RobotArmRequest_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *custom_messeage__srv__RobotArmRequest_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *custom_messeage__srv__RobotArmRequest_Request__get_individual_type_description_source(NULL);
    sources[3] = *custom_messeage__srv__RobotArmRequest_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
