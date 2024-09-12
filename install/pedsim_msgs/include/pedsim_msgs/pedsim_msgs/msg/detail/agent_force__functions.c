// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pedsim_msgs:msg/AgentForce.idl
// generated code does not contain a copyright notice
#include "pedsim_msgs/msg/detail/agent_force__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `desired_force`
// Member `obstacle_force`
// Member `social_force`
// Member `group_coherence_force`
// Member `group_gaze_force`
// Member `group_repulsion_force`
// Member `random_force`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
pedsim_msgs__msg__AgentForce__init(pedsim_msgs__msg__AgentForce * msg)
{
  if (!msg) {
    return false;
  }
  // desired_force
  if (!geometry_msgs__msg__Vector3__init(&msg->desired_force)) {
    pedsim_msgs__msg__AgentForce__fini(msg);
    return false;
  }
  // obstacle_force
  if (!geometry_msgs__msg__Vector3__init(&msg->obstacle_force)) {
    pedsim_msgs__msg__AgentForce__fini(msg);
    return false;
  }
  // social_force
  if (!geometry_msgs__msg__Vector3__init(&msg->social_force)) {
    pedsim_msgs__msg__AgentForce__fini(msg);
    return false;
  }
  // group_coherence_force
  if (!geometry_msgs__msg__Vector3__init(&msg->group_coherence_force)) {
    pedsim_msgs__msg__AgentForce__fini(msg);
    return false;
  }
  // group_gaze_force
  if (!geometry_msgs__msg__Vector3__init(&msg->group_gaze_force)) {
    pedsim_msgs__msg__AgentForce__fini(msg);
    return false;
  }
  // group_repulsion_force
  if (!geometry_msgs__msg__Vector3__init(&msg->group_repulsion_force)) {
    pedsim_msgs__msg__AgentForce__fini(msg);
    return false;
  }
  // random_force
  if (!geometry_msgs__msg__Vector3__init(&msg->random_force)) {
    pedsim_msgs__msg__AgentForce__fini(msg);
    return false;
  }
  return true;
}

void
pedsim_msgs__msg__AgentForce__fini(pedsim_msgs__msg__AgentForce * msg)
{
  if (!msg) {
    return;
  }
  // desired_force
  geometry_msgs__msg__Vector3__fini(&msg->desired_force);
  // obstacle_force
  geometry_msgs__msg__Vector3__fini(&msg->obstacle_force);
  // social_force
  geometry_msgs__msg__Vector3__fini(&msg->social_force);
  // group_coherence_force
  geometry_msgs__msg__Vector3__fini(&msg->group_coherence_force);
  // group_gaze_force
  geometry_msgs__msg__Vector3__fini(&msg->group_gaze_force);
  // group_repulsion_force
  geometry_msgs__msg__Vector3__fini(&msg->group_repulsion_force);
  // random_force
  geometry_msgs__msg__Vector3__fini(&msg->random_force);
}

bool
pedsim_msgs__msg__AgentForce__are_equal(const pedsim_msgs__msg__AgentForce * lhs, const pedsim_msgs__msg__AgentForce * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // desired_force
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->desired_force), &(rhs->desired_force)))
  {
    return false;
  }
  // obstacle_force
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->obstacle_force), &(rhs->obstacle_force)))
  {
    return false;
  }
  // social_force
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->social_force), &(rhs->social_force)))
  {
    return false;
  }
  // group_coherence_force
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->group_coherence_force), &(rhs->group_coherence_force)))
  {
    return false;
  }
  // group_gaze_force
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->group_gaze_force), &(rhs->group_gaze_force)))
  {
    return false;
  }
  // group_repulsion_force
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->group_repulsion_force), &(rhs->group_repulsion_force)))
  {
    return false;
  }
  // random_force
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->random_force), &(rhs->random_force)))
  {
    return false;
  }
  return true;
}

bool
pedsim_msgs__msg__AgentForce__copy(
  const pedsim_msgs__msg__AgentForce * input,
  pedsim_msgs__msg__AgentForce * output)
{
  if (!input || !output) {
    return false;
  }
  // desired_force
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->desired_force), &(output->desired_force)))
  {
    return false;
  }
  // obstacle_force
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->obstacle_force), &(output->obstacle_force)))
  {
    return false;
  }
  // social_force
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->social_force), &(output->social_force)))
  {
    return false;
  }
  // group_coherence_force
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->group_coherence_force), &(output->group_coherence_force)))
  {
    return false;
  }
  // group_gaze_force
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->group_gaze_force), &(output->group_gaze_force)))
  {
    return false;
  }
  // group_repulsion_force
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->group_repulsion_force), &(output->group_repulsion_force)))
  {
    return false;
  }
  // random_force
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->random_force), &(output->random_force)))
  {
    return false;
  }
  return true;
}

pedsim_msgs__msg__AgentForce *
pedsim_msgs__msg__AgentForce__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__AgentForce * msg = (pedsim_msgs__msg__AgentForce *)allocator.allocate(sizeof(pedsim_msgs__msg__AgentForce), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pedsim_msgs__msg__AgentForce));
  bool success = pedsim_msgs__msg__AgentForce__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pedsim_msgs__msg__AgentForce__destroy(pedsim_msgs__msg__AgentForce * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pedsim_msgs__msg__AgentForce__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pedsim_msgs__msg__AgentForce__Sequence__init(pedsim_msgs__msg__AgentForce__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__AgentForce * data = NULL;

  if (size) {
    data = (pedsim_msgs__msg__AgentForce *)allocator.zero_allocate(size, sizeof(pedsim_msgs__msg__AgentForce), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pedsim_msgs__msg__AgentForce__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pedsim_msgs__msg__AgentForce__fini(&data[i - 1]);
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
pedsim_msgs__msg__AgentForce__Sequence__fini(pedsim_msgs__msg__AgentForce__Sequence * array)
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
      pedsim_msgs__msg__AgentForce__fini(&array->data[i]);
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

pedsim_msgs__msg__AgentForce__Sequence *
pedsim_msgs__msg__AgentForce__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pedsim_msgs__msg__AgentForce__Sequence * array = (pedsim_msgs__msg__AgentForce__Sequence *)allocator.allocate(sizeof(pedsim_msgs__msg__AgentForce__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pedsim_msgs__msg__AgentForce__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pedsim_msgs__msg__AgentForce__Sequence__destroy(pedsim_msgs__msg__AgentForce__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pedsim_msgs__msg__AgentForce__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pedsim_msgs__msg__AgentForce__Sequence__are_equal(const pedsim_msgs__msg__AgentForce__Sequence * lhs, const pedsim_msgs__msg__AgentForce__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pedsim_msgs__msg__AgentForce__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pedsim_msgs__msg__AgentForce__Sequence__copy(
  const pedsim_msgs__msg__AgentForce__Sequence * input,
  pedsim_msgs__msg__AgentForce__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pedsim_msgs__msg__AgentForce);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pedsim_msgs__msg__AgentForce * data =
      (pedsim_msgs__msg__AgentForce *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pedsim_msgs__msg__AgentForce__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pedsim_msgs__msg__AgentForce__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pedsim_msgs__msg__AgentForce__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
