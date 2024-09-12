// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pedsim_msgs:msg/TrackedGroups.idl
// generated code does not contain a copyright notice
#include "pedsim_msgs/msg/detail/tracked_groups__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `groups`
#include "pedsim_msgs/msg/detail/tracked_group__functions.h"

bool
pedsim_msgs__msg__TrackedGroups__init(pedsim_msgs__msg__TrackedGroups * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pedsim_msgs__msg__TrackedGroups__fini(msg);
    return false;
  }
  // groups
  if (!pedsim_msgs__msg__TrackedGroup__Sequence__init(&msg->groups, 0)) {
    pedsim_msgs__msg__TrackedGroups__fini(msg);
    return false;
  }
  return true;
}

void
pedsim_msgs__msg__TrackedGroups__fini(pedsim_msgs__msg__TrackedGroups * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // groups
  pedsim_msgs__msg__TrackedGroup__Sequence__fini(&msg->groups);
}

bool
pedsim_msgs__msg__TrackedGroups__are_equal(const pedsim_msgs__msg__TrackedGroups * lhs, const pedsim_msgs__msg__TrackedGroups * rhs)
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
  // groups
  if (!pedsim_msgs__msg__TrackedGroup__Sequence__are_equal(
      &(lhs->groups), &(rhs->groups)))
  {
    return false;
  }
  return true;
}

bool
pedsim_msgs__msg__TrackedGroups__copy(
  const pedsim_msgs__msg__TrackedGroups * input,
  pedsim_msgs__msg__TrackedGroups * output)
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
  // groups
  if (!pedsim_msgs__msg__TrackedGroup__Sequence__copy(
      &(input->groups), &(output->groups)))
  {
    return false;
  }
  return true;
}

pedsim_msgs__msg__TrackedGroups *
pedsim_msgs__msg__TrackedGroups__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__TrackedGroups * msg = (pedsim_msgs__msg__TrackedGroups *)allocator.allocate(sizeof(pedsim_msgs__msg__TrackedGroups), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pedsim_msgs__msg__TrackedGroups));
  bool success = pedsim_msgs__msg__TrackedGroups__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pedsim_msgs__msg__TrackedGroups__destroy(pedsim_msgs__msg__TrackedGroups * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pedsim_msgs__msg__TrackedGroups__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pedsim_msgs__msg__TrackedGroups__Sequence__init(pedsim_msgs__msg__TrackedGroups__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__TrackedGroups * data = NULL;

  if (size) {
    data = (pedsim_msgs__msg__TrackedGroups *)allocator.zero_allocate(size, sizeof(pedsim_msgs__msg__TrackedGroups), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pedsim_msgs__msg__TrackedGroups__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pedsim_msgs__msg__TrackedGroups__fini(&data[i - 1]);
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
pedsim_msgs__msg__TrackedGroups__Sequence__fini(pedsim_msgs__msg__TrackedGroups__Sequence * array)
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
      pedsim_msgs__msg__TrackedGroups__fini(&array->data[i]);
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

pedsim_msgs__msg__TrackedGroups__Sequence *
pedsim_msgs__msg__TrackedGroups__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__TrackedGroups__Sequence * array = (pedsim_msgs__msg__TrackedGroups__Sequence *)allocator.allocate(sizeof(pedsim_msgs__msg__TrackedGroups__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pedsim_msgs__msg__TrackedGroups__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pedsim_msgs__msg__TrackedGroups__Sequence__destroy(pedsim_msgs__msg__TrackedGroups__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pedsim_msgs__msg__TrackedGroups__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pedsim_msgs__msg__TrackedGroups__Sequence__are_equal(const pedsim_msgs__msg__TrackedGroups__Sequence * lhs, const pedsim_msgs__msg__TrackedGroups__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pedsim_msgs__msg__TrackedGroups__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pedsim_msgs__msg__TrackedGroups__Sequence__copy(
  const pedsim_msgs__msg__TrackedGroups__Sequence * input,
  pedsim_msgs__msg__TrackedGroups__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pedsim_msgs__msg__TrackedGroups);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pedsim_msgs__msg__TrackedGroups * data =
      (pedsim_msgs__msg__TrackedGroups *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pedsim_msgs__msg__TrackedGroups__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pedsim_msgs__msg__TrackedGroups__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pedsim_msgs__msg__TrackedGroups__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
