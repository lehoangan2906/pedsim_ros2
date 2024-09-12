// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pedsim_msgs:msg/TrackedPerson.idl
// generated code does not contain a copyright notice
#include "pedsim_msgs/msg/detail/tracked_person__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `age`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"

bool
pedsim_msgs__msg__TrackedPerson__init(pedsim_msgs__msg__TrackedPerson * msg)
{
  if (!msg) {
    return false;
  }
  // track_id
  // is_occluded
  // is_matched
  // detection_id
  // age
  if (!builtin_interfaces__msg__Duration__init(&msg->age)) {
    pedsim_msgs__msg__TrackedPerson__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->pose)) {
    pedsim_msgs__msg__TrackedPerson__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistWithCovariance__init(&msg->twist)) {
    pedsim_msgs__msg__TrackedPerson__fini(msg);
    return false;
  }
  return true;
}

void
pedsim_msgs__msg__TrackedPerson__fini(pedsim_msgs__msg__TrackedPerson * msg)
{
  if (!msg) {
    return;
  }
  // track_id
  // is_occluded
  // is_matched
  // detection_id
  // age
  builtin_interfaces__msg__Duration__fini(&msg->age);
  // pose
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->pose);
  // twist
  geometry_msgs__msg__TwistWithCovariance__fini(&msg->twist);
}

bool
pedsim_msgs__msg__TrackedPerson__are_equal(const pedsim_msgs__msg__TrackedPerson * lhs, const pedsim_msgs__msg__TrackedPerson * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // track_id
  if (lhs->track_id != rhs->track_id) {
    return false;
  }
  // is_occluded
  if (lhs->is_occluded != rhs->is_occluded) {
    return false;
  }
  // is_matched
  if (lhs->is_matched != rhs->is_matched) {
    return false;
  }
  // detection_id
  if (lhs->detection_id != rhs->detection_id) {
    return false;
  }
  // age
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->age), &(rhs->age)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistWithCovariance__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  return true;
}

bool
pedsim_msgs__msg__TrackedPerson__copy(
  const pedsim_msgs__msg__TrackedPerson * input,
  pedsim_msgs__msg__TrackedPerson * output)
{
  if (!input || !output) {
    return false;
  }
  // track_id
  output->track_id = input->track_id;
  // is_occluded
  output->is_occluded = input->is_occluded;
  // is_matched
  output->is_matched = input->is_matched;
  // detection_id
  output->detection_id = input->detection_id;
  // age
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->age), &(output->age)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__TwistWithCovariance__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  return true;
}

pedsim_msgs__msg__TrackedPerson *
pedsim_msgs__msg__TrackedPerson__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__TrackedPerson * msg = (pedsim_msgs__msg__TrackedPerson *)allocator.allocate(sizeof(pedsim_msgs__msg__TrackedPerson), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pedsim_msgs__msg__TrackedPerson));
  bool success = pedsim_msgs__msg__TrackedPerson__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pedsim_msgs__msg__TrackedPerson__destroy(pedsim_msgs__msg__TrackedPerson * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pedsim_msgs__msg__TrackedPerson__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pedsim_msgs__msg__TrackedPerson__Sequence__init(pedsim_msgs__msg__TrackedPerson__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__TrackedPerson * data = NULL;

  if (size) {
    data = (pedsim_msgs__msg__TrackedPerson *)allocator.zero_allocate(size, sizeof(pedsim_msgs__msg__TrackedPerson), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pedsim_msgs__msg__TrackedPerson__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pedsim_msgs__msg__TrackedPerson__fini(&data[i - 1]);
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
pedsim_msgs__msg__TrackedPerson__Sequence__fini(pedsim_msgs__msg__TrackedPerson__Sequence * array)
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
      pedsim_msgs__msg__TrackedPerson__fini(&array->data[i]);
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

pedsim_msgs__msg__TrackedPerson__Sequence *
pedsim_msgs__msg__TrackedPerson__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__TrackedPerson__Sequence * array = (pedsim_msgs__msg__TrackedPerson__Sequence *)allocator.allocate(sizeof(pedsim_msgs__msg__TrackedPerson__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pedsim_msgs__msg__TrackedPerson__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pedsim_msgs__msg__TrackedPerson__Sequence__destroy(pedsim_msgs__msg__TrackedPerson__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pedsim_msgs__msg__TrackedPerson__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pedsim_msgs__msg__TrackedPerson__Sequence__are_equal(const pedsim_msgs__msg__TrackedPerson__Sequence * lhs, const pedsim_msgs__msg__TrackedPerson__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pedsim_msgs__msg__TrackedPerson__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pedsim_msgs__msg__TrackedPerson__Sequence__copy(
  const pedsim_msgs__msg__TrackedPerson__Sequence * input,
  pedsim_msgs__msg__TrackedPerson__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pedsim_msgs__msg__TrackedPerson);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pedsim_msgs__msg__TrackedPerson * data =
      (pedsim_msgs__msg__TrackedPerson *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pedsim_msgs__msg__TrackedPerson__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pedsim_msgs__msg__TrackedPerson__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pedsim_msgs__msg__TrackedPerson__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
