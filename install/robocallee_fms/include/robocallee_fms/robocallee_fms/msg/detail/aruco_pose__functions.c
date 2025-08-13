// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robocallee_fms:msg/ArucoPose.idl
// generated code does not contain a copyright notice
#include "robocallee_fms/msg/detail/aruco_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robocallee_fms__msg__ArucoPose__init(robocallee_fms__msg__ArucoPose * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // x
  // y
  // yaw
  return true;
}

void
robocallee_fms__msg__ArucoPose__fini(robocallee_fms__msg__ArucoPose * msg)
{
  if (!msg) {
    return;
  }
  // id
  // x
  // y
  // yaw
}

bool
robocallee_fms__msg__ArucoPose__are_equal(const robocallee_fms__msg__ArucoPose * lhs, const robocallee_fms__msg__ArucoPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
robocallee_fms__msg__ArucoPose__copy(
  const robocallee_fms__msg__ArucoPose * input,
  robocallee_fms__msg__ArucoPose * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // yaw
  output->yaw = input->yaw;
  return true;
}

robocallee_fms__msg__ArucoPose *
robocallee_fms__msg__ArucoPose__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocallee_fms__msg__ArucoPose * msg = (robocallee_fms__msg__ArucoPose *)allocator.allocate(sizeof(robocallee_fms__msg__ArucoPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robocallee_fms__msg__ArucoPose));
  bool success = robocallee_fms__msg__ArucoPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robocallee_fms__msg__ArucoPose__destroy(robocallee_fms__msg__ArucoPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robocallee_fms__msg__ArucoPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robocallee_fms__msg__ArucoPose__Sequence__init(robocallee_fms__msg__ArucoPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocallee_fms__msg__ArucoPose * data = NULL;

  if (size) {
    data = (robocallee_fms__msg__ArucoPose *)allocator.zero_allocate(size, sizeof(robocallee_fms__msg__ArucoPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robocallee_fms__msg__ArucoPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robocallee_fms__msg__ArucoPose__fini(&data[i - 1]);
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
robocallee_fms__msg__ArucoPose__Sequence__fini(robocallee_fms__msg__ArucoPose__Sequence * array)
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
      robocallee_fms__msg__ArucoPose__fini(&array->data[i]);
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

robocallee_fms__msg__ArucoPose__Sequence *
robocallee_fms__msg__ArucoPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robocallee_fms__msg__ArucoPose__Sequence * array = (robocallee_fms__msg__ArucoPose__Sequence *)allocator.allocate(sizeof(robocallee_fms__msg__ArucoPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robocallee_fms__msg__ArucoPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robocallee_fms__msg__ArucoPose__Sequence__destroy(robocallee_fms__msg__ArucoPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robocallee_fms__msg__ArucoPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robocallee_fms__msg__ArucoPose__Sequence__are_equal(const robocallee_fms__msg__ArucoPose__Sequence * lhs, const robocallee_fms__msg__ArucoPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robocallee_fms__msg__ArucoPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robocallee_fms__msg__ArucoPose__Sequence__copy(
  const robocallee_fms__msg__ArucoPose__Sequence * input,
  robocallee_fms__msg__ArucoPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robocallee_fms__msg__ArucoPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robocallee_fms__msg__ArucoPose * data =
      (robocallee_fms__msg__ArucoPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robocallee_fms__msg__ArucoPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robocallee_fms__msg__ArucoPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robocallee_fms__msg__ArucoPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
