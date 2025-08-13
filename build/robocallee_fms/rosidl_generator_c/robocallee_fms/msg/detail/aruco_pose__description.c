// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robocallee_fms:msg/ArucoPose.idl
// generated code does not contain a copyright notice

#include "robocallee_fms/msg/detail/aruco_pose__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
const rosidl_type_hash_t *
robocallee_fms__msg__ArucoPose__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfb, 0xb2, 0xc5, 0xd4, 0x28, 0x14, 0x02, 0x30,
      0x77, 0x1c, 0xfb, 0x37, 0x31, 0xfc, 0x2d, 0x93,
      0x0f, 0x23, 0xe1, 0xaf, 0xf2, 0x6b, 0x08, 0xe7,
      0xf4, 0xc4, 0xdd, 0xc4, 0xff, 0x01, 0xd5, 0x53,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robocallee_fms__msg__ArucoPose__TYPE_NAME[] = "robocallee_fms/msg/ArucoPose";

// Define type names, field names, and default values
static char robocallee_fms__msg__ArucoPose__FIELD_NAME__id[] = "id";
static char robocallee_fms__msg__ArucoPose__FIELD_NAME__x[] = "x";
static char robocallee_fms__msg__ArucoPose__FIELD_NAME__y[] = "y";
static char robocallee_fms__msg__ArucoPose__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field robocallee_fms__msg__ArucoPose__FIELDS[] = {
  {
    {robocallee_fms__msg__ArucoPose__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__msg__ArucoPose__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__msg__ArucoPose__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robocallee_fms__msg__ArucoPose__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robocallee_fms__msg__ArucoPose__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robocallee_fms__msg__ArucoPose__TYPE_NAME, 28, 28},
      {robocallee_fms__msg__ArucoPose__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 id\n"
  "float64 x\n"
  "float64 y\n"
  "float64 yaw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robocallee_fms__msg__ArucoPose__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robocallee_fms__msg__ArucoPose__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 40, 40},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robocallee_fms__msg__ArucoPose__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robocallee_fms__msg__ArucoPose__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
