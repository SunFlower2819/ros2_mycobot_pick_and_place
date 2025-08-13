// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocallee_fms:msg/ArucoPoseArray.idl
// generated code does not contain a copyright notice
#include "robocallee_fms/msg/detail/aruco_pose_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `poses`
#include "robocallee_fms/msg/detail/aruco_pose__functions.h"

bool
robocallee_fms__msg__ArucoPoseArray__init(robocallee_fms__msg__ArucoPoseArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    robocallee_fms__msg__ArucoPoseArray__fini(msg);
    return false;
  }
  // poses
  if (!robocallee_fms__msg__ArucoPose__Sequence__init(&msg->poses, 0)) {
    robocallee_fms__msg__ArucoPoseArray__fini(msg);
    return false;
  }
  // count
  return true;
}

void
robocallee_fms__msg__ArucoPoseArray__fini(robocallee_fms__msg__ArucoPoseArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // poses
  robocallee_fms__msg__ArucoPose__Sequence__fini(&msg->poses);
  // count
}

bool
robocallee_fms__msg__ArucoPoseArray__are_equal(const robocallee_fms__msg__ArucoPoseArray * lhs, const robocallee_fms__msg__ArucoPoseArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // poses
  if (!robocallee_fms__msg__ArucoPose__Sequence__are_equal(
      &(lhs->poses), &(rhs->poses)))
  {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  return true;
}

bool
robocallee_fms__msg__ArucoPoseArray__copy(
  const robocallee_fms__msg__ArucoPoseArray * input,
  robocallee_fms__msg__ArucoPoseArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // poses
  if (!robocallee_fms__msg__ArucoPose__Sequence__copy(
      &(input->poses), &(output->poses)))
  {
    return false;
  }
  // count
  output->count = input->count;
  return true;
}

robocallee_fms__msg__ArucoPoseArray *
robocallee_fms__msg__ArucoPoseArray__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocallee_fms__msg__ArucoPoseArray * msg = (robocallee_fms__msg__ArucoPoseArray *)allocator.allocate(sizeof(robocallee_fms__msg__ArucoPoseArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocallee_fms__msg__ArucoPoseArray));
  bool success = robocallee_fms__msg__ArucoPoseArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocallee_fms__msg__ArucoPoseArray__destroy(robocallee_fms__msg__ArucoPoseArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocallee_fms__msg__ArucoPoseArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocallee_fms__msg__ArucoPoseArray__Sequence__init(robocallee_fms__msg__ArucoPoseArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocallee_fms__msg__ArucoPoseArray * data = NULL;

  if (size) {
    data = (robocallee_fms__msg__ArucoPoseArray *)allocator.zero_allocate(size, sizeof(robocallee_fms__msg__ArucoPoseArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocallee_fms__msg__ArucoPoseArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocallee_fms__msg__ArucoPoseArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robocallee_fms__msg__ArucoPoseArray__Sequence__fini(robocallee_fms__msg__ArucoPoseArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robocallee_fms__msg__ArucoPoseArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robocallee_fms__msg__ArucoPoseArray__Sequence *
robocallee_fms__msg__ArucoPoseArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocallee_fms__msg__ArucoPoseArray__Sequence * array = (robocallee_fms__msg__ArucoPoseArray__Sequence *)allocator.allocate(sizeof(robocallee_fms__msg__ArucoPoseArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocallee_fms__msg__ArucoPoseArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocallee_fms__msg__ArucoPoseArray__Sequence__destroy(robocallee_fms__msg__ArucoPoseArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocallee_fms__msg__ArucoPoseArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocallee_fms__msg__ArucoPoseArray__Sequence__are_equal(const robocallee_fms__msg__ArucoPoseArray__Sequence * lhs, const robocallee_fms__msg__ArucoPoseArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocallee_fms__msg__ArucoPoseArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocallee_fms__msg__ArucoPoseArray__Sequence__copy(
  const robocallee_fms__msg__ArucoPoseArray__Sequence * input,
  robocallee_fms__msg__ArucoPoseArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocallee_fms__msg__ArucoPoseArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robocallee_fms__msg__ArucoPoseArray * data =
      (robocallee_fms__msg__ArucoPoseArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocallee_fms__msg__ArucoPoseArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robocallee_fms__msg__ArucoPoseArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robocallee_fms__msg__ArucoPoseArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
