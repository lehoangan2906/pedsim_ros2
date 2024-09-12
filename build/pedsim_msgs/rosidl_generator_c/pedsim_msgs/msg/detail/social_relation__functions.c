// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pedsim_msgs:msg/SocialRelation.idl
// generated code does not contain a copyright notice
#include "pedsim_msgs/msg/detail/social_relation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"

bool
pedsim_msgs__msg__SocialRelation__init(pedsim_msgs__msg__SocialRelation * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    pedsim_msgs__msg__SocialRelation__fini(msg);
    return false;
  }
  // strength
  // track1_id
  // track2_id
  return true;
}

void
pedsim_msgs__msg__SocialRelation__fini(pedsim_msgs__msg__SocialRelation * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // strength
  // track1_id
  // track2_id
}

bool
pedsim_msgs__msg__SocialRelation__are_equal(const pedsim_msgs__msg__SocialRelation * lhs, const pedsim_msgs__msg__SocialRelation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // strength
  if (lhs->strength != rhs->strength) {
    return false;
  }
  // track1_id
  if (lhs->track1_id != rhs->track1_id) {
    return false;
  }
  // track2_id
  if (lhs->track2_id != rhs->track2_id) {
    return false;
  }
  return true;
}

bool
pedsim_msgs__msg__SocialRelation__copy(
  const pedsim_msgs__msg__SocialRelation * input,
  pedsim_msgs__msg__SocialRelation * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // strength
  output->strength = input->strength;
  // track1_id
  output->track1_id = input->track1_id;
  // track2_id
  output->track2_id = input->track2_id;
  return true;
}

pedsim_msgs__msg__SocialRelation *
pedsim_msgs__msg__SocialRelation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__SocialRelation * msg = (pedsim_msgs__msg__SocialRelation *)allocator.allocate(sizeof(pedsim_msgs__msg__SocialRelation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pedsim_msgs__msg__SocialRelation));
  bool success = pedsim_msgs__msg__SocialRelation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pedsim_msgs__msg__SocialRelation__destroy(pedsim_msgs__msg__SocialRelation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pedsim_msgs__msg__SocialRelation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pedsim_msgs__msg__SocialRelation__Sequence__init(pedsim_msgs__msg__SocialRelation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__SocialRelation * data = NULL;

  if (size) {
    data = (pedsim_msgs__msg__SocialRelation *)allocator.zero_allocate(size, sizeof(pedsim_msgs__msg__SocialRelation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pedsim_msgs__msg__SocialRelation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pedsim_msgs__msg__SocialRelation__fini(&data[i - 1]);
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
pedsim_msgs__msg__SocialRelation__Sequence__fini(pedsim_msgs__msg__SocialRelation__Sequence * array)
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
      pedsim_msgs__msg__SocialRelation__fini(&array->data[i]);
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

pedsim_msgs__msg__SocialRelation__Sequence *
pedsim_msgs__msg__SocialRelation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__SocialRelation__Sequence * array = (pedsim_msgs__msg__SocialRelation__Sequence *)allocator.allocate(sizeof(pedsim_msgs__msg__SocialRelation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pedsim_msgs__msg__SocialRelation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pedsim_msgs__msg__SocialRelation__Sequence__destroy(pedsim_msgs__msg__SocialRelation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pedsim_msgs__msg__SocialRelation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pedsim_msgs__msg__SocialRelation__Sequence__are_equal(const pedsim_msgs__msg__SocialRelation__Sequence * lhs, const pedsim_msgs__msg__SocialRelation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pedsim_msgs__msg__SocialRelation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pedsim_msgs__msg__SocialRelation__Sequence__copy(
  const pedsim_msgs__msg__SocialRelation__Sequence * input,
  pedsim_msgs__msg__SocialRelation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pedsim_msgs__msg__SocialRelation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pedsim_msgs__msg__SocialRelation * data =
      (pedsim_msgs__msg__SocialRelation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pedsim_msgs__msg__SocialRelation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pedsim_msgs__msg__SocialRelation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pedsim_msgs__msg__SocialRelation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
