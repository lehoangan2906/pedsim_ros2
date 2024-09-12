// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pedsim_msgs:msg/AgentState.idl
// generated code does not contain a copyright notice
#include "pedsim_msgs/msg/detail/agent_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `social_state`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `forces`
#include "pedsim_msgs/msg/detail/agent_force__functions.h"

bool
pedsim_msgs__msg__AgentState__init(pedsim_msgs__msg__AgentState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pedsim_msgs__msg__AgentState__fini(msg);
    return false;
  }
  // id
  // type
  // social_state
  if (!rosidl_runtime_c__String__init(&msg->social_state)) {
    pedsim_msgs__msg__AgentState__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    pedsim_msgs__msg__AgentState__fini(msg);
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__init(&msg->twist)) {
    pedsim_msgs__msg__AgentState__fini(msg);
    return false;
  }
  // forces
  if (!pedsim_msgs__msg__AgentForce__init(&msg->forces)) {
    pedsim_msgs__msg__AgentState__fini(msg);
    return false;
  }
  return true;
}

void
pedsim_msgs__msg__AgentState__fini(pedsim_msgs__msg__AgentState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // type
  // social_state
  rosidl_runtime_c__String__fini(&msg->social_state);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // twist
  geometry_msgs__msg__Twist__fini(&msg->twist);
  // forces
  pedsim_msgs__msg__AgentForce__fini(&msg->forces);
}

bool
pedsim_msgs__msg__AgentState__are_equal(const pedsim_msgs__msg__AgentState * lhs, const pedsim_msgs__msg__AgentState * rhs)
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
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // social_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->social_state), &(rhs->social_state)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->twist), &(rhs->twist)))
  {
    return false;
  }
  // forces
  if (!pedsim_msgs__msg__AgentForce__are_equal(
      &(lhs->forces), &(rhs->forces)))
  {
    return false;
  }
  return true;
}

bool
pedsim_msgs__msg__AgentState__copy(
  const pedsim_msgs__msg__AgentState * input,
  pedsim_msgs__msg__AgentState * output)
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
  // id
  output->id = input->id;
  // type
  output->type = input->type;
  // social_state
  if (!rosidl_runtime_c__String__copy(
      &(input->social_state), &(output->social_state)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // twist
  if (!geometry_msgs__msg__Twist__copy(
      &(input->twist), &(output->twist)))
  {
    return false;
  }
  // forces
  if (!pedsim_msgs__msg__AgentForce__copy(
      &(input->forces), &(output->forces)))
  {
    return false;
  }
  return true;
}

pedsim_msgs__msg__AgentState *
pedsim_msgs__msg__AgentState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__AgentState * msg = (pedsim_msgs__msg__AgentState *)allocator.allocate(sizeof(pedsim_msgs__msg__AgentState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pedsim_msgs__msg__AgentState));
  bool success = pedsim_msgs__msg__AgentState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pedsim_msgs__msg__AgentState__destroy(pedsim_msgs__msg__AgentState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pedsim_msgs__msg__AgentState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pedsim_msgs__msg__AgentState__Sequence__init(pedsim_msgs__msg__AgentState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__AgentState * data = NULL;

  if (size) {
    data = (pedsim_msgs__msg__AgentState *)allocator.zero_allocate(size, sizeof(pedsim_msgs__msg__AgentState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pedsim_msgs__msg__AgentState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pedsim_msgs__msg__AgentState__fini(&data[i - 1]);
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
pedsim_msgs__msg__AgentState__Sequence__fini(pedsim_msgs__msg__AgentState__Sequence * array)
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
      pedsim_msgs__msg__AgentState__fini(&array->data[i]);
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

pedsim_msgs__msg__AgentState__Sequence *
pedsim_msgs__msg__AgentState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__AgentState__Sequence * array = (pedsim_msgs__msg__AgentState__Sequence *)allocator.allocate(sizeof(pedsim_msgs__msg__AgentState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pedsim_msgs__msg__AgentState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pedsim_msgs__msg__AgentState__Sequence__destroy(pedsim_msgs__msg__AgentState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pedsim_msgs__msg__AgentState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pedsim_msgs__msg__AgentState__Sequence__are_equal(const pedsim_msgs__msg__AgentState__Sequence * lhs, const pedsim_msgs__msg__AgentState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pedsim_msgs__msg__AgentState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pedsim_msgs__msg__AgentState__Sequence__copy(
  const pedsim_msgs__msg__AgentState__Sequence * input,
  pedsim_msgs__msg__AgentState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pedsim_msgs__msg__AgentState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pedsim_msgs__msg__AgentState * data =
      (pedsim_msgs__msg__AgentState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pedsim_msgs__msg__AgentState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pedsim_msgs__msg__AgentState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pedsim_msgs__msg__AgentState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
