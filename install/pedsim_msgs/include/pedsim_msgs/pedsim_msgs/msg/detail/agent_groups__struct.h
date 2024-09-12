// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pedsim_msgs:msg/AgentGroups.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__AGENT_GROUPS__STRUCT_H_
#define PEDSIM_MSGS__MSG__DETAIL__AGENT_GROUPS__STRUCT_H_

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
// Member 'groups'
#include "pedsim_msgs/msg/detail/agent_group__struct.h"

/// Struct defined in msg/AgentGroups in the package pedsim_msgs.
typedef struct pedsim_msgs__msg__AgentGroups
{
  std_msgs__msg__Header header;
  pedsim_msgs__msg__AgentGroup__Sequence groups;
} pedsim_msgs__msg__AgentGroups;

// Struct for a sequence of pedsim_msgs__msg__AgentGroups.
typedef struct pedsim_msgs__msg__AgentGroups__Sequence
{
  pedsim_msgs__msg__AgentGroups * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_msgs__msg__AgentGroups__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_MSGS__MSG__DETAIL__AGENT_GROUPS__STRUCT_H_
