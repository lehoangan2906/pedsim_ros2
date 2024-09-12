// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pedsim_srvs:srv/SetAllAgentsState.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_SRVS__SRV__DETAIL__SET_ALL_AGENTS_STATE__STRUCT_H_
#define PEDSIM_SRVS__SRV__DETAIL__SET_ALL_AGENTS_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'agent_states'
#include "pedsim_msgs/msg/detail/agent_states__struct.h"

/// Struct defined in srv/SetAllAgentsState in the package pedsim_srvs.
typedef struct pedsim_srvs__srv__SetAllAgentsState_Request
{
  pedsim_msgs__msg__AgentStates agent_states;
} pedsim_srvs__srv__SetAllAgentsState_Request;

// Struct for a sequence of pedsim_srvs__srv__SetAllAgentsState_Request.
typedef struct pedsim_srvs__srv__SetAllAgentsState_Request__Sequence
{
  pedsim_srvs__srv__SetAllAgentsState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_srvs__srv__SetAllAgentsState_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetAllAgentsState in the package pedsim_srvs.
typedef struct pedsim_srvs__srv__SetAllAgentsState_Response
{
  bool finished;
} pedsim_srvs__srv__SetAllAgentsState_Response;

// Struct for a sequence of pedsim_srvs__srv__SetAllAgentsState_Response.
typedef struct pedsim_srvs__srv__SetAllAgentsState_Response__Sequence
{
  pedsim_srvs__srv__SetAllAgentsState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_srvs__srv__SetAllAgentsState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_SRVS__SRV__DETAIL__SET_ALL_AGENTS_STATE__STRUCT_H_
