// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pedsim_srvs:srv/SetAllAgentsState.idl
// generated code does not contain a copyright notice
#include "pedsim_srvs/srv/detail/set_all_agents_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `agent_states`
#include "pedsim_msgs/msg/detail/agent_states__functions.h"

bool
pedsim_srvs__srv__SetAllAgentsState_Request__init(pedsim_srvs__srv__SetAllAgentsState_Request * msg)
{
  if (!msg) {
    return false;
  }
  // agent_states
  if (!pedsim_msgs__msg__AgentStates__init(&msg->agent_states)) {
    pedsim_srvs__srv__SetAllAgentsState_Request__fini(msg);
    return false;
  }
  return true;
}

void
pedsim_srvs__srv__SetAllAgentsState_Request__fini(pedsim_srvs__srv__SetAllAgentsState_Request * msg)
{
  if (!msg) {
    return;
  }
  // agent_states
  pedsim_msgs__msg__AgentStates__fini(&msg->agent_states);
}

bool
pedsim_srvs__srv__SetAllAgentsState_Request__are_equal(const pedsim_srvs__srv__SetAllAgentsState_Request * lhs, const pedsim_srvs__srv__SetAllAgentsState_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // agent_states
  if (!pedsim_msgs__msg__AgentStates__are_equal(
      &(lhs->agent_states), &(rhs->agent_states)))
  {
    return false;
  }
  return true;
}

bool
pedsim_srvs__srv__SetAllAgentsState_Request__copy(
  const pedsim_srvs__srv__SetAllAgentsState_Request * input,
  pedsim_srvs__srv__SetAllAgentsState_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // agent_states
  if (!pedsim_msgs__msg__AgentStates__copy(
      &(input->agent_states), &(output->agent_states)))
  {
    return false;
  }
  return true;
}

pedsim_srvs__srv__SetAllAgentsState_Request *
pedsim_srvs__srv__SetAllAgentsState_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_srvs__srv__SetAllAgentsState_Request * msg = (pedsim_srvs__srv__SetAllAgentsState_Request *)allocator.allocate(sizeof(pedsim_srvs__srv__SetAllAgentsState_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pedsim_srvs__srv__SetAllAgentsState_Request));
  bool success = pedsim_srvs__srv__SetAllAgentsState_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pedsim_srvs__srv__SetAllAgentsState_Request__destroy(pedsim_srvs__srv__SetAllAgentsState_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pedsim_srvs__srv__SetAllAgentsState_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pedsim_srvs__srv__SetAllAgentsState_Request__Sequence__init(pedsim_srvs__srv__SetAllAgentsState_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_srvs__srv__SetAllAgentsState_Request * data = NULL;

  if (size) {
    data = (pedsim_srvs__srv__SetAllAgentsState_Request *)allocator.zero_allocate(size, sizeof(pedsim_srvs__srv__SetAllAgentsState_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pedsim_srvs__srv__SetAllAgentsState_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pedsim_srvs__srv__SetAllAgentsState_Request__fini(&data[i - 1]);
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
pedsim_srvs__srv__SetAllAgentsState_Request__Sequence__fini(pedsim_srvs__srv__SetAllAgentsState_Request__Sequence * array)
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
      pedsim_srvs__srv__SetAllAgentsState_Request__fini(&array->data[i]);
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

pedsim_srvs__srv__SetAllAgentsState_Request__Sequence *
pedsim_srvs__srv__SetAllAgentsState_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_srvs__srv__SetAllAgentsState_Request__Sequence * array = (pedsim_srvs__srv__SetAllAgentsState_Request__Sequence *)allocator.allocate(sizeof(pedsim_srvs__srv__SetAllAgentsState_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pedsim_srvs__srv__SetAllAgentsState_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pedsim_srvs__srv__SetAllAgentsState_Request__Sequence__destroy(pedsim_srvs__srv__SetAllAgentsState_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pedsim_srvs__srv__SetAllAgentsState_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pedsim_srvs__srv__SetAllAgentsState_Request__Sequence__are_equal(const pedsim_srvs__srv__SetAllAgentsState_Request__Sequence * lhs, const pedsim_srvs__srv__SetAllAgentsState_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pedsim_srvs__srv__SetAllAgentsState_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pedsim_srvs__srv__SetAllAgentsState_Request__Sequence__copy(
  const pedsim_srvs__srv__SetAllAgentsState_Request__Sequence * input,
  pedsim_srvs__srv__SetAllAgentsState_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pedsim_srvs__srv__SetAllAgentsState_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pedsim_srvs__srv__SetAllAgentsState_Request * data =
      (pedsim_srvs__srv__SetAllAgentsState_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pedsim_srvs__srv__SetAllAgentsState_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pedsim_srvs__srv__SetAllAgentsState_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pedsim_srvs__srv__SetAllAgentsState_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
pedsim_srvs__srv__SetAllAgentsState_Response__init(pedsim_srvs__srv__SetAllAgentsState_Response * msg)
{
  if (!msg) {
    return false;
  }
  // finished
  return true;
}

void
pedsim_srvs__srv__SetAllAgentsState_Response__fini(pedsim_srvs__srv__SetAllAgentsState_Response * msg)
{
  if (!msg) {
    return;
  }
  // finished
}

bool
pedsim_srvs__srv__SetAllAgentsState_Response__are_equal(const pedsim_srvs__srv__SetAllAgentsState_Response * lhs, const pedsim_srvs__srv__SetAllAgentsState_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // finished
  if (lhs->finished != rhs->finished) {
    return false;
  }
  return true;
}

bool
pedsim_srvs__srv__SetAllAgentsState_Response__copy(
  const pedsim_srvs__srv__SetAllAgentsState_Response * input,
  pedsim_srvs__srv__SetAllAgentsState_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // finished
  output->finished = input->finished;
  return true;
}

pedsim_srvs__srv__SetAllAgentsState_Response *
pedsim_srvs__srv__SetAllAgentsState_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_srvs__srv__SetAllAgentsState_Response * msg = (pedsim_srvs__srv__SetAllAgentsState_Response *)allocator.allocate(sizeof(pedsim_srvs__srv__SetAllAgentsState_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pedsim_srvs__srv__SetAllAgentsState_Response));
  bool success = pedsim_srvs__srv__SetAllAgentsState_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pedsim_srvs__srv__SetAllAgentsState_Response__destroy(pedsim_srvs__srv__SetAllAgentsState_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pedsim_srvs__srv__SetAllAgentsState_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pedsim_srvs__srv__SetAllAgentsState_Response__Sequence__init(pedsim_srvs__srv__SetAllAgentsState_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_srvs__srv__SetAllAgentsState_Response * data = NULL;

  if (size) {
    data = (pedsim_srvs__srv__SetAllAgentsState_Response *)allocator.zero_allocate(size, sizeof(pedsim_srvs__srv__SetAllAgentsState_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pedsim_srvs__srv__SetAllAgentsState_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pedsim_srvs__srv__SetAllAgentsState_Response__fini(&data[i - 1]);
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
pedsim_srvs__srv__SetAllAgentsState_Response__Sequence__fini(pedsim_srvs__srv__SetAllAgentsState_Response__Sequence * array)
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
      pedsim_srvs__srv__SetAllAgentsState_Response__fini(&array->data[i]);
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

pedsim_srvs__srv__SetAllAgentsState_Response__Sequence *
pedsim_srvs__srv__SetAllAgentsState_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_srvs__srv__SetAllAgentsState_Response__Sequence * array = (pedsim_srvs__srv__SetAllAgentsState_Response__Sequence *)allocator.allocate(sizeof(pedsim_srvs__srv__SetAllAgentsState_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pedsim_srvs__srv__SetAllAgentsState_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pedsim_srvs__srv__SetAllAgentsState_Response__Sequence__destroy(pedsim_srvs__srv__SetAllAgentsState_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pedsim_srvs__srv__SetAllAgentsState_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pedsim_srvs__srv__SetAllAgentsState_Response__Sequence__are_equal(const pedsim_srvs__srv__SetAllAgentsState_Response__Sequence * lhs, const pedsim_srvs__srv__SetAllAgentsState_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pedsim_srvs__srv__SetAllAgentsState_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pedsim_srvs__srv__SetAllAgentsState_Response__Sequence__copy(
  const pedsim_srvs__srv__SetAllAgentsState_Response__Sequence * input,
  pedsim_srvs__srv__SetAllAgentsState_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pedsim_srvs__srv__SetAllAgentsState_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pedsim_srvs__srv__SetAllAgentsState_Response * data =
      (pedsim_srvs__srv__SetAllAgentsState_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pedsim_srvs__srv__SetAllAgentsState_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pedsim_srvs__srv__SetAllAgentsState_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pedsim_srvs__srv__SetAllAgentsState_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
