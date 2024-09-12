// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pedsim_msgs:msg/AgentState.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__AGENT_STATE__STRUCT_H_
#define PEDSIM_MSGS__MSG__DETAIL__AGENT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_STANDING'.
/**
  * Use sensors package to control observability
  * Social State string constants
 */
static const char * const pedsim_msgs__msg__AgentState__TYPE_STANDING = "standing";

/// Constant 'TYPE_INDIVIDUAL_MOVING'.
static const char * const pedsim_msgs__msg__AgentState__TYPE_INDIVIDUAL_MOVING = "individual_moving";

/// Constant 'TYPE_WAITING_IN_QUEUE'.
static const char * const pedsim_msgs__msg__AgentState__TYPE_WAITING_IN_QUEUE = "waiting_in_queue";

/// Constant 'TYPE_GROUP_MOVING'.
static const char * const pedsim_msgs__msg__AgentState__TYPE_GROUP_MOVING = "group_moving";

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'social_state'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist__struct.h"
// Member 'forces'
#include "pedsim_msgs/msg/detail/agent_force__struct.h"

/// Struct defined in msg/AgentState in the package pedsim_msgs.
typedef struct pedsim_msgs__msg__AgentState
{
  std_msgs__msg__Header header;
  uint64_t id;
  uint16_t type;
  rosidl_runtime_c__String social_state;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist twist;
  pedsim_msgs__msg__AgentForce forces;
} pedsim_msgs__msg__AgentState;

// Struct for a sequence of pedsim_msgs__msg__AgentState.
typedef struct pedsim_msgs__msg__AgentState__Sequence
{
  pedsim_msgs__msg__AgentState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_msgs__msg__AgentState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_MSGS__MSG__DETAIL__AGENT_STATE__STRUCT_H_
