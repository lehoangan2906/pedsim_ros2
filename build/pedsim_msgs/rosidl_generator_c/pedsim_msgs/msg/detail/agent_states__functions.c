// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pedsim_msgs:msg/AgentStates.idl
// generated code does not contain a copyright notice
#include "pedsim_msgs/msg/detail/agent_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `agent_states`
#include "pedsim_msgs/msg/detail/agent_state__functions.h"

bool
pedsim_msgs__msg__AgentStates__init(pedsim_msgs__msg__AgentStates * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pedsim_msgs__msg__AgentStates__fini(msg);
    return false;
  }
  // agent_states
  if (!pedsim_msgs__msg__AgentState__Sequence__init(&msg->agent_states, 0)) {
    pedsim_msgs__msg__AgentStates__fini(msg);
    return false;
  }
  return true;
}

void
pedsim_msgs__msg__AgentStates__fini(pedsim_msgs__msg__AgentStates * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // agent_states
  pedsim_msgs__msg__AgentState__Sequence__fini(&msg->agent_states);
}

bool
pedsim_msgs__msg__AgentStates__are_equal(const pedsim_msgs__msg__AgentStates * lhs, const pedsim_msgs__msg__AgentStates * rhs)
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
  // agent_states
  if (!pedsim_msgs__msg__AgentState__Sequence__are_equal(
      &(lhs->agent_states), &(rhs->agent_states)))
  {
    return false;
  }
  return true;
}

bool
pedsim_msgs__msg__AgentStates__copy(
  const pedsim_msgs__msg__AgentStates * input,
  pedsim_msgs__msg__AgentStates * output)
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
  // agent_states
  if (!pedsim_msgs__msg__AgentState__Sequence__copy(
      &(input->agent_states), &(output->agent_states)))
  {
    return false;
  }
  return true;
}

pedsim_msgs__msg__AgentStates *
pedsim_msgs__msg__AgentStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__AgentStates * msg = (pedsim_msgs__msg__AgentStates *)allocator.allocate(sizeof(pedsim_msgs__msg__AgentStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pedsim_msgs__msg__AgentStates));
  bool success = pedsim_msgs__msg__AgentStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pedsim_msgs__msg__AgentStates__destroy(pedsim_msgs__msg__AgentStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pedsim_msgs__msg__AgentStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pedsim_msgs__msg__AgentStates__Sequence__init(pedsim_msgs__msg__AgentStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__AgentStates * data = NULL;

  if (size) {
    data = (pedsim_msgs__msg__AgentStates *)allocator.zero_allocate(size, sizeof(pedsim_msgs__msg__AgentStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pedsim_msgs__msg__AgentStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pedsim_msgs__msg__AgentStates__fini(&data[i - 1]);
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
pedsim_msgs__msg__AgentStates__Sequence__fini(pedsim_msgs__msg__AgentStates__Sequence * array)
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
      pedsim_msgs__msg__AgentStates__fini(&array->data[i]);
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

pedsim_msgs__msg__AgentStates__Sequence *
pedsim_msgs__msg__AgentStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__AgentStates__Sequence * array = (pedsim_msgs__msg__AgentStates__Sequence *)allocator.allocate(sizeof(pedsim_msgs__msg__AgentStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pedsim_msgs__msg__AgentStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pedsim_msgs__msg__AgentStates__Sequence__destroy(pedsim_msgs__msg__AgentStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pedsim_msgs__msg__AgentStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pedsim_msgs__msg__AgentStates__Sequence__are_equal(const pedsim_msgs__msg__AgentStates__Sequence * lhs, const pedsim_msgs__msg__AgentStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pedsim_msgs__msg__AgentStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pedsim_msgs__msg__AgentStates__Sequence__copy(
  const pedsim_msgs__msg__AgentStates__Sequence * input,
  pedsim_msgs__msg__AgentStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pedsim_msgs__msg__AgentStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pedsim_msgs__msg__AgentStates * data =
      (pedsim_msgs__msg__AgentStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pedsim_msgs__msg__AgentStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pedsim_msgs__msg__AgentStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pedsim_msgs__msg__AgentStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
