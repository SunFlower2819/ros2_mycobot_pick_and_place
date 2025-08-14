// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robocallee_fms:msg/ArucoPoseArray.idl
// generated code does not contain a copyright notice

#include "robocallee_fms/msg/detail/aruco_pose_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
const rosidl_type_hash_t *
robocallee_fms__msg__ArucoPoseArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdb, 0xa7, 0xf0, 0x87, 0x28, 0xce, 0xba, 0xb8,
      0x9d, 0xf7, 0xee, 0x34, 0x26, 0x09, 0x9d, 0x44,
      0xc0, 0x96, 0xa2, 0x4c, 0xfb, 0xc4, 0xf1, 0xb6,
      0x67, 0xb3, 0xff, 0xc9, 0xc2, 0xf6, 0x62, 0xd6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "robocallee_fms/msg/detail/aruco_pose__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t robocallee_fms__msg__ArucoPose__EXPECTED_HASH = {1, {
    0xfb, 0xb2, 0xc5, 0xd4, 0x28, 0x14, 0x02, 0x30,
    0x77, 0x1c, 0xfb, 0x37, 0x31, 0xfc, 0x2d, 0x93,
    0x0f, 0x23, 0xe1, 0xaf, 0xf2, 0x6b, 0x08, 0xe7,
    0xf4, 0xc4, 0xdd, 0xc4, 0xff, 0x01, 0xd5, 0x53,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char robocallee_fms__msg__ArucoPoseArray__TYPE_NAME[] = "robocallee_fms/msg/ArucoPoseArray";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char robocallee_fms__msg__ArucoPose__TYPE_NAME[] = "robocallee_fms/msg/ArucoPose";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char robocallee_fms__msg__ArucoPoseArray__FIELD_NAME__header[] = "header";
static char robocallee_fms__msg__ArucoPoseArray__FIELD_NAME__poses[] = "poses";
static char robocallee_fms__msg__ArucoPoseArray__FIELD_NAME__count[] = "count";

static rosidl_runtime_c__type_description__Field robocallee_fms__msg__ArucoPoseArray__FIELDS[] = {
  {
    {robocallee_fms__msg__ArucoPoseArray__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__msg__ArucoPoseArray__FIELD_NAME__poses, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {robocallee_fms__msg__ArucoPose__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__msg__ArucoPoseArray__FIELD_NAME__count, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robocallee_fms__msg__ArucoPoseArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__msg__ArucoPose__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robocallee_fms__msg__ArucoPoseArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robocallee_fms__msg__ArucoPoseArray__TYPE_NAME, 33, 33},
      {robocallee_fms__msg__ArucoPoseArray__FIELDS, 3, 3},
    },
    {robocallee_fms__msg__ArucoPoseArray__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&robocallee_fms__msg__ArucoPose__EXPECTED_HASH, robocallee_fms__msg__ArucoPose__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = robocallee_fms__msg__ArucoPose__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/Header header\n"
  "ArucoPose[] poses\n"
  "int32 count";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robocallee_fms__msg__ArucoPoseArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robocallee_fms__msg__ArucoPoseArray__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 52, 52},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robocallee_fms__msg__ArucoPoseArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robocallee_fms__msg__ArucoPoseArray__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robocallee_fms__msg__ArucoPose__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
