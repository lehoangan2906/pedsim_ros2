// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pedsim_msgs:msg/LineObstacle.idl
// generated code does not contain a copyright notice
#include "pedsim_msgs/msg/detail/line_obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `start`
// Member `end`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
pedsim_msgs__msg__LineObstacle__init(pedsim_msgs__msg__LineObstacle * msg)
{
  if (!msg) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__Point__init(&msg->start)) {
    pedsim_msgs__msg__LineObstacle__fini(msg);
    return false;
  }
  // end
  if (!geometry_msgs__msg__Point__init(&msg->end)) {
    pedsim_msgs__msg__LineObstacle__fini(msg);
    return false;
  }
  return true;
}

void
pedsim_msgs__msg__LineObstacle__fini(pedsim_msgs__msg__LineObstacle * msg)
{
  if (!msg) {
    return;
  }
  // start
  geometry_msgs__msg__Point__fini(&msg->start);
  // end
  geometry_msgs__msg__Point__fini(&msg->end);
}

bool
pedsim_msgs__msg__LineObstacle__are_equal(const pedsim_msgs__msg__LineObstacle * lhs, const pedsim_msgs__msg__LineObstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->start), &(rhs->start)))
  {
    return false;
  }
  // end
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->end), &(rhs->end)))
  {
    return false;
  }
  return true;
}

bool
pedsim_msgs__msg__LineObstacle__copy(
  const pedsim_msgs__msg__LineObstacle * input,
  pedsim_msgs__msg__LineObstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__Point__copy(
      &(input->start), &(output->start)))
  {
    return false;
  }
  // end
  if (!geometry_msgs__msg__Point__copy(
      &(input->end), &(output->end)))
  {
    return false;
  }
  return true;
}

pedsim_msgs__msg__LineObstacle *
pedsim_msgs__msg__LineObstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__LineObstacle * msg = (pedsim_msgs__msg__LineObstacle *)allocator.allocate(sizeof(pedsim_msgs__msg__LineObstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pedsim_msgs__msg__LineObstacle));
  bool success = pedsim_msgs__msg__LineObstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pedsim_msgs__msg__LineObstacle__destroy(pedsim_msgs__msg__LineObstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pedsim_msgs__msg__LineObstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pedsim_msgs__msg__LineObstacle__Sequence__init(pedsim_msgs__msg__LineObstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__LineObstacle * data = NULL;

  if (size) {
    data = (pedsim_msgs__msg__LineObstacle *)allocator.zero_allocate(size, sizeof(pedsim_msgs__msg__LineObstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pedsim_msgs__msg__LineObstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pedsim_msgs__msg__LineObstacle__fini(&data[i - 1]);
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
pedsim_msgs__msg__LineObstacle__Sequence__fini(pedsim_msgs__msg__LineObstacle__Sequence * array)
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
      pedsim_msgs__msg__LineObstacle__fini(&array->data[i]);
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

pedsim_msgs__msg__LineObstacle__Sequence *
pedsim_msgs__msg__LineObstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__LineObstacle__Sequence * array = (pedsim_msgs__msg__LineObstacle__Sequence *)allocator.allocate(sizeof(pedsim_msgs__msg__LineObstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pedsim_msgs__msg__LineObstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pedsim_msgs__msg__LineObstacle__Sequence__destroy(pedsim_msgs__msg__LineObstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pedsim_msgs__msg__LineObstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pedsim_msgs__msg__LineObstacle__Sequence__are_equal(const pedsim_msgs__msg__LineObstacle__Sequence * lhs, const pedsim_msgs__msg__LineObstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pedsim_msgs__msg__LineObstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pedsim_msgs__msg__LineObstacle__Sequence__copy(
  const pedsim_msgs__msg__LineObstacle__Sequence * input,
  pedsim_msgs__msg__LineObstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pedsim_msgs__msg__LineObstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pedsim_msgs__msg__LineObstacle * data =
      (pedsim_msgs__msg__LineObstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pedsim_msgs__msg__LineObstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pedsim_msgs__msg__LineObstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pedsim_msgs__msg__LineObstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
