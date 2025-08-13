// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robocallee_fms:msg/ArucoPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robocallee_fms/msg/aruco_pose.h"


#ifndef ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE__FUNCTIONS_H_
#define ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "robocallee_fms/msg/rosidl_generator_c__visibility_control.h"

#include "robocallee_fms/msg/detail/aruco_pose__struct.h"

/// Initialize msg/ArucoPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robocallee_fms__msg__ArucoPose
 * )) before or use
 * robocallee_fms__msg__ArucoPose__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
bool
robocallee_fms__msg__ArucoPose__init(robocallee_fms__msg__ArucoPose * msg);

/// Finalize msg/ArucoPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
void
robocallee_fms__msg__ArucoPose__fini(robocallee_fms__msg__ArucoPose * msg);

/// Create msg/ArucoPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robocallee_fms__msg__ArucoPose__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
robocallee_fms__msg__ArucoPose *
robocallee_fms__msg__ArucoPose__create(void);

/// Destroy msg/ArucoPose message.
/**
 * It calls
 * robocallee_fms__msg__ArucoPose__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
void
robocallee_fms__msg__ArucoPose__destroy(robocallee_fms__msg__ArucoPose * msg);

/// Check for msg/ArucoPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
bool
robocallee_fms__msg__ArucoPose__are_equal(const robocallee_fms__msg__ArucoPose * lhs, const robocallee_fms__msg__ArucoPose * rhs);

/// Copy a msg/ArucoPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
bool
robocallee_fms__msg__ArucoPose__copy(
  const robocallee_fms__msg__ArucoPose * input,
  robocallee_fms__msg__ArucoPose * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
const rosidl_type_hash_t *
robocallee_fms__msg__ArucoPose__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
const rosidl_runtime_c__type_description__TypeDescription *
robocallee_fms__msg__ArucoPose__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
const rosidl_runtime_c__type_description__TypeSource *
robocallee_fms__msg__ArucoPose__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
const rosidl_runtime_c__type_description__TypeSource__Sequence *
robocallee_fms__msg__ArucoPose__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/ArucoPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * robocallee_fms__msg__ArucoPose__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
bool
robocallee_fms__msg__ArucoPose__Sequence__init(robocallee_fms__msg__ArucoPose__Sequence * array, size_t size);

/// Finalize array of msg/ArucoPose messages.
/**
 * It calls
 * robocallee_fms__msg__ArucoPose__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
void
robocallee_fms__msg__ArucoPose__Sequence__fini(robocallee_fms__msg__ArucoPose__Sequence * array);

/// Create array of msg/ArucoPose messages.
/**
 * It allocates the memory for the array and calls
 * robocallee_fms__msg__ArucoPose__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
robocallee_fms__msg__ArucoPose__Sequence *
robocallee_fms__msg__ArucoPose__Sequence__create(size_t size);

/// Destroy array of msg/ArucoPose messages.
/**
 * It calls
 * robocallee_fms__msg__ArucoPose__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
void
robocallee_fms__msg__ArucoPose__Sequence__destroy(robocallee_fms__msg__ArucoPose__Sequence * array);

/// Check for msg/ArucoPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
bool
robocallee_fms__msg__ArucoPose__Sequence__are_equal(const robocallee_fms__msg__ArucoPose__Sequence * lhs, const robocallee_fms__msg__ArucoPose__Sequence * rhs);

/// Copy an array of msg/ArucoPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robocallee_fms
bool
robocallee_fms__msg__ArucoPose__Sequence__copy(
  const robocallee_fms__msg__ArucoPose__Sequence * input,
  robocallee_fms__msg__ArucoPose__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE__FUNCTIONS_H_
