// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pedsim_msgs:msg/TrackedGroup.idl
// generated code does not contain a copyright notice
#include "pedsim_msgs/msg/detail/tracked_group__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `age`
#include "builtin_interfaces/msg/detail/duration__functions.h"
// Member `center_of_gravity`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
// Member `track_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
pedsim_msgs__msg__TrackedGroup__init(pedsim_msgs__msg__TrackedGroup * msg)
{
  if (!msg) {
    return false;
  }
  // group_id
  // age
  if (!builtin_interfaces__msg__Duration__init(&msg->age)) {
    pedsim_msgs__msg__TrackedGroup__fini(msg);
    return false;
  }
  // center_of_gravity
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->center_of_gravity)) {
    pedsim_msgs__msg__TrackedGroup__fini(msg);
    return false;
  }
  // track_ids
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->track_ids, 0)) {
    pedsim_msgs__msg__TrackedGroup__fini(msg);
    return false;
  }
  return true;
}

void
pedsim_msgs__msg__TrackedGroup__fini(pedsim_msgs__msg__TrackedGroup * msg)
{
  if (!msg) {
    return;
  }
  // group_id
  // age
  builtin_interfaces__msg__Duration__fini(&msg->age);
  // center_of_gravity
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->center_of_gravity);
  // track_ids
  rosidl_runtime_c__uint64__Sequence__fini(&msg->track_ids);
}

bool
pedsim_msgs__msg__TrackedGroup__are_equal(const pedsim_msgs__msg__TrackedGroup * lhs, const pedsim_msgs__msg__TrackedGroup * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // group_id
  if (lhs->group_id != rhs->group_id) {
    return false;
  }
  // age
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->age), &(rhs->age)))
  {
    return false;
  }
  // center_of_gravity
  if (!geometry_msgs__msg__PoseWithCovariance__are_equal(
      &(lhs->center_of_gravity), &(rhs->center_of_gravity)))
  {
    return false;
  }
  // track_ids
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->track_ids), &(rhs->track_ids)))
  {
    return false;
  }
  return true;
}

bool
pedsim_msgs__msg__TrackedGroup__copy(
  const pedsim_msgs__msg__TrackedGroup * input,
  pedsim_msgs__msg__TrackedGroup * output)
{
  if (!input || !output) {
    return false;
  }
  // group_id
  output->group_id = input->group_id;
  // age
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->age), &(output->age)))
  {
    return false;
  }
  // center_of_gravity
  if (!geometry_msgs__msg__PoseWithCovariance__copy(
      &(input->center_of_gravity), &(output->center_of_gravity)))
  {
    return false;
  }
  // track_ids
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->track_ids), &(output->track_ids)))
  {
    return false;
  }
  return true;
}

pedsim_msgs__msg__TrackedGroup *
pedsim_msgs__msg__TrackedGroup__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__TrackedGroup * msg = (pedsim_msgs__msg__TrackedGroup *)allocator.allocate(sizeof(pedsim_msgs__msg__TrackedGroup), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pedsim_msgs__msg__TrackedGroup));
  bool success = pedsim_msgs__msg__TrackedGroup__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pedsim_msgs__msg__TrackedGroup__destroy(pedsim_msgs__msg__TrackedGroup * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pedsim_msgs__msg__TrackedGroup__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pedsim_msgs__msg__TrackedGroup__Sequence__init(pedsim_msgs__msg__TrackedGroup__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__TrackedGroup * data = NULL;

  if (size) {
    data = (pedsim_msgs__msg__TrackedGroup *)allocator.zero_allocate(size, sizeof(pedsim_msgs__msg__TrackedGroup), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pedsim_msgs__msg__TrackedGroup__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pedsim_msgs__msg__TrackedGroup__fini(&data[i - 1]);
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
pedsim_msgs__msg__TrackedGroup__Sequence__fini(pedsim_msgs__msg__TrackedGroup__Sequence * array)
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
      pedsim_msgs__msg__TrackedGroup__fini(&array->data[i]);
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

pedsim_msgs__msg__TrackedGroup__Sequence *
pedsim_msgs__msg__TrackedGroup__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__TrackedGroup__Sequence * array = (pedsim_msgs__msg__TrackedGroup__Sequence *)allocator.allocate(sizeof(pedsim_msgs__msg__TrackedGroup__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pedsim_msgs__msg__TrackedGroup__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pedsim_msgs__msg__TrackedGroup__Sequence__destroy(pedsim_msgs__msg__TrackedGroup__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pedsim_msgs__msg__TrackedGroup__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pedsim_msgs__msg__TrackedGroup__Sequence__are_equal(const pedsim_msgs__msg__TrackedGroup__Sequence * lhs, const pedsim_msgs__msg__TrackedGroup__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pedsim_msgs__msg__TrackedGroup__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pedsim_msgs__msg__TrackedGroup__Sequence__copy(
  const pedsim_msgs__msg__TrackedGroup__Sequence * input,
  pedsim_msgs__msg__TrackedGroup__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pedsim_msgs__msg__TrackedGroup);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pedsim_msgs__msg__TrackedGroup * data =
      (pedsim_msgs__msg__TrackedGroup *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pedsim_msgs__msg__TrackedGroup__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pedsim_msgs__msg__TrackedGroup__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pedsim_msgs__msg__TrackedGroup__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
