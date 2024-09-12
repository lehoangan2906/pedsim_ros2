// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pedsim_msgs:msg/AgentForce.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__AGENT_FORCE__STRUCT_H_
#define PEDSIM_MSGS__MSG__DETAIL__AGENT_FORCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'desired_force'
// Member 'obstacle_force'
// Member 'social_force'
// Member 'group_coherence_force'
// Member 'group_gaze_force'
// Member 'group_repulsion_force'
// Member 'random_force'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/AgentForce in the package pedsim_msgs.
/**
  * Forces acting on an agent.
 */
typedef struct pedsim_msgs__msg__AgentForce
{
  /// Basic SFM forces.
  geometry_msgs__msg__Vector3 desired_force;
  geometry_msgs__msg__Vector3 obstacle_force;
  geometry_msgs__msg__Vector3 social_force;
  /// Additional Group Forces
  geometry_msgs__msg__Vector3 group_coherence_force;
  geometry_msgs__msg__Vector3 group_gaze_force;
  geometry_msgs__msg__Vector3 group_repulsion_force;
  /// Extra stabilization/custom forces.
  geometry_msgs__msg__Vector3 random_force;
} pedsim_msgs__msg__AgentForce;

// Struct for a sequence of pedsim_msgs__msg__AgentForce.
typedef struct pedsim_msgs__msg__AgentForce__Sequence
{
  pedsim_msgs__msg__AgentForce * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_msgs__msg__AgentForce__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_MSGS__MSG__DETAIL__AGENT_FORCE__STRUCT_H_
