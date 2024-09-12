// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pedsim_msgs:msg/AgentGroup.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__AGENT_GROUP__STRUCT_H_
#define PEDSIM_MSGS__MSG__DETAIL__AGENT_GROUP__STRUCT_H_

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
// Member 'members'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'center_of_mass'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/AgentGroup in the package pedsim_msgs.
typedef struct pedsim_msgs__msg__AgentGroup
{
  std_msgs__msg__Header header;
  uint16_t group_id;
  double age;
  rosidl_runtime_c__uint64__Sequence members;
  geometry_msgs__msg__Pose center_of_mass;
} pedsim_msgs__msg__AgentGroup;

// Struct for a sequence of pedsim_msgs__msg__AgentGroup.
typedef struct pedsim_msgs__msg__AgentGroup__Sequence
{
  pedsim_msgs__msg__AgentGroup * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_msgs__msg__AgentGroup__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_MSGS__MSG__DETAIL__AGENT_GROUP__STRUCT_H_
