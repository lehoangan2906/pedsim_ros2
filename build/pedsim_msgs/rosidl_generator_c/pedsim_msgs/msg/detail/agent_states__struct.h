// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pedsim_msgs:msg/AgentStates.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__AGENT_STATES__STRUCT_H_
#define PEDSIM_MSGS__MSG__DETAIL__AGENT_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'agent_states'
#include "pedsim_msgs/msg/detail/agent_state__struct.h"

/// Struct defined in msg/AgentStates in the package pedsim_msgs.
typedef struct pedsim_msgs__msg__AgentStates
{
  std_msgs__msg__Header header;
  pedsim_msgs__msg__AgentState__Sequence agent_states;
} pedsim_msgs__msg__AgentStates;

// Struct for a sequence of pedsim_msgs__msg__AgentStates.
typedef struct pedsim_msgs__msg__AgentStates__Sequence
{
  pedsim_msgs__msg__AgentStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_msgs__msg__AgentStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_MSGS__MSG__DETAIL__AGENT_STATES__STRUCT_H_
