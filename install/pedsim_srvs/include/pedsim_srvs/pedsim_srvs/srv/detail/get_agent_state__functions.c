// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pedsim_srvs:srv/GetAgentState.idl
// generated code does not contain a copyright notice
#include "pedsim_srvs/srv/detail/get_agent_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
pedsim_srvs__srv__GetAgentState_Request__init(pedsim_srvs__srv__GetAgentState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // agent_id
  return true;
}

void
pedsim_srvs__srv__GetAgentState_Request__fini(pedsim_srvs__srv__GetAgentState_Request * msg)
{
  if (!msg) {
    return;
  }
  // agent_id
}

bool
pedsim_srvs__srv__GetAgentState_Request__are_equal(const pedsim_srvs__srv__GetAgentState_Request * lhs, const pedsim_srvs__srv__GetAgentState_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // agent_id
  if (lhs->agent_id != rhs->agent_id) {
    return false;
  }
  return true;
}

bool
pedsim_srvs__srv__GetAgentState_Request__copy(
  const pedsim_srvs__srv__GetAgentState_Request * input,
  pedsim_srvs__srv__GetAgentState_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // agent_id
  output->agent_id = input->agent_id;
  return true;
}

pedsim_srvs__srv__GetAgentState_Request *
pedsim_srvs__srv__GetAgentState_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_srvs__srv__GetAgentState_Request * msg = (pedsim_srvs__srv__GetAgentState_Request *)allocator.allocate(sizeof(pedsim_srvs__srv__GetAgentState_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pedsim_srvs__srv__GetAgentState_Request));
  bool success = pedsim_srvs__srv__GetAgentState_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pedsim_srvs__srv__GetAgentState_Request__destroy(pedsim_srvs__srv__GetAgentState_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pedsim_srvs__srv__GetAgentState_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pedsim_srvs__srv__GetAgentState_Request__Sequence__init(pedsim_srvs__srv__GetAgentState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_srvs__srv__GetAgentState_Request * data = NULL;

  if (size) {
    data = (pedsim_srvs__srv__GetAgentState_Request *)allocator.zero_allocate(size, sizeof(pedsim_srvs__srv__GetAgentState_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pedsim_srvs__srv__GetAgentState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pedsim_srvs__srv__GetAgentState_Request__fini(&data[i - 1]);
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
pedsim_srvs__srv__GetAgentState_Request__Sequence__fini(pedsim_srvs__srv__GetAgentState_Request__Sequence * array)
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
      pedsim_srvs__srv__GetAgentState_Request__fini(&array->data[i]);
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

pedsim_srvs__srv__GetAgentState_Request__Sequence *
pedsim_srvs__srv__GetAgentState_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_srvs__srv__GetAgentState_Request__Sequence * array = (pedsim_srvs__srv__GetAgentState_Request__Sequence *)allocator.allocate(sizeof(pedsim_srvs__srv__GetAgentState_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pedsim_srvs__srv__GetAgentState_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pedsim_srvs__srv__GetAgentState_Request__Sequence__destroy(pedsim_srvs__srv__GetAgentState_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pedsim_srvs__srv__GetAgentState_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pedsim_srvs__srv__GetAgentState_Request__Sequence__are_equal(const pedsim_srvs__srv__GetAgentState_Request__Sequence * lhs, const pedsim_srvs__srv__GetAgentState_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pedsim_srvs__srv__GetAgentState_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pedsim_srvs__srv__GetAgentState_Request__Sequence__copy(
  const pedsim_srvs__srv__GetAgentState_Request__Sequence * input,
  pedsim_srvs__srv__GetAgentState_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pedsim_srvs__srv__GetAgentState_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pedsim_srvs__srv__GetAgentState_Request * data =
      (pedsim_srvs__srv__GetAgentState_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pedsim_srvs__srv__GetAgentState_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pedsim_srvs__srv__GetAgentState_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pedsim_srvs__srv__GetAgentState_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
#include "pedsim_msgs/msg/detail/agent_state__functions.h"

bool
pedsim_srvs__srv__GetAgentState_Response__init(pedsim_srvs__srv__GetAgentState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!pedsim_msgs__msg__AgentState__init(&msg->state)) {
    pedsim_srvs__srv__GetAgentState_Response__fini(msg);
    return false;
  }
  return true;
}

void
pedsim_srvs__srv__GetAgentState_Response__fini(pedsim_srvs__srv__GetAgentState_Response * msg)
{
  if (!msg) {
    return;
  }
  // state
  pedsim_msgs__msg__AgentState__fini(&msg->state);
}

bool
pedsim_srvs__srv__GetAgentState_Response__are_equal(const pedsim_srvs__srv__GetAgentState_Response * lhs, const pedsim_srvs__srv__GetAgentState_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!pedsim_msgs__msg__AgentState__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
pedsim_srvs__srv__GetAgentState_Response__copy(
  const pedsim_srvs__srv__GetAgentState_Response * input,
  pedsim_srvs__srv__GetAgentState_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!pedsim_msgs__msg__AgentState__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

pedsim_srvs__srv__GetAgentState_Response *
pedsim_srvs__srv__GetAgentState_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_srvs__srv__GetAgentState_Response * msg = (pedsim_srvs__srv__GetAgentState_Response *)allocator.allocate(sizeof(pedsim_srvs__srv__GetAgentState_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pedsim_srvs__srv__GetAgentState_Response));
  bool success = pedsim_srvs__srv__GetAgentState_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pedsim_srvs__srv__GetAgentState_Response__destroy(pedsim_srvs__srv__GetAgentState_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pedsim_srvs__srv__GetAgentState_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pedsim_srvs__srv__GetAgentState_Response__Sequence__init(pedsim_srvs__srv__GetAgentState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_srvs__srv__GetAgentState_Response * data = NULL;

  if (size) {
    data = (pedsim_srvs__srv__GetAgentState_Response *)allocator.zero_allocate(size, sizeof(pedsim_srvs__srv__GetAgentState_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pedsim_srvs__srv__GetAgentState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pedsim_srvs__srv__GetAgentState_Response__fini(&data[i - 1]);
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
pedsim_srvs__srv__GetAgentState_Response__Sequence__fini(pedsim_srvs__srv__GetAgentState_Response__Sequence * array)
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
      pedsim_srvs__srv__GetAgentState_Response__fini(&array->data[i]);
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

pedsim_srvs__srv__GetAgentState_Response__Sequence *
pedsim_srvs__srv__GetAgentState_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_srvs__srv__GetAgentState_Response__Sequence * array = (pedsim_srvs__srv__GetAgentState_Response__Sequence *)allocator.allocate(sizeof(pedsim_srvs__srv__GetAgentState_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pedsim_srvs__srv__GetAgentState_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pedsim_srvs__srv__GetAgentState_Response__Sequence__destroy(pedsim_srvs__srv__GetAgentState_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pedsim_srvs__srv__GetAgentState_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pedsim_srvs__srv__GetAgentState_Response__Sequence__are_equal(const pedsim_srvs__srv__GetAgentState_Response__Sequence * lhs, const pedsim_srvs__srv__GetAgentState_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pedsim_srvs__srv__GetAgentState_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pedsim_srvs__srv__GetAgentState_Response__Sequence__copy(
  const pedsim_srvs__srv__GetAgentState_Response__Sequence * input,
  pedsim_srvs__srv__GetAgentState_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pedsim_srvs__srv__GetAgentState_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pedsim_srvs__srv__GetAgentState_Response * data =
      (pedsim_srvs__srv__GetAgentState_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pedsim_srvs__srv__GetAgentState_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pedsim_srvs__srv__GetAgentState_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pedsim_srvs__srv__GetAgentState_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}