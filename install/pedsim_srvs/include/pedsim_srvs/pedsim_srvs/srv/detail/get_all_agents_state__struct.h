// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pedsim_srvs:srv/GetAllAgentsState.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_SRVS__SRV__DETAIL__GET_ALL_AGENTS_STATE__STRUCT_H_
#define PEDSIM_SRVS__SRV__DETAIL__GET_ALL_AGENTS_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'agent_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/GetAllAgentsState in the package pedsim_srvs.
typedef struct pedsim_srvs__srv__GetAllAgentsState_Request
{
  rosidl_runtime_c__int16__Sequence agent_ids;
} pedsim_srvs__srv__GetAllAgentsState_Request;

// Struct for a sequence of pedsim_srvs__srv__GetAllAgentsState_Request.
typedef struct pedsim_srvs__srv__GetAllAgentsState_Request__Sequence
{
  pedsim_srvs__srv__GetAllAgentsState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_srvs__srv__GetAllAgentsState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'agent_states'
#include "pedsim_msgs/msg/detail/agent_states__struct.h"

/// Struct defined in srv/GetAllAgentsState in the package pedsim_srvs.
typedef struct pedsim_srvs__srv__GetAllAgentsState_Response
{
  pedsim_msgs__msg__AgentStates agent_states;
} pedsim_srvs__srv__GetAllAgentsState_Response;

// Struct for a sequence of pedsim_srvs__srv__GetAllAgentsState_Response.
typedef struct pedsim_srvs__srv__GetAllAgentsState_Response__Sequence
{
  pedsim_srvs__srv__GetAllAgentsState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_srvs__srv__GetAllAgentsState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_SRVS__SRV__DETAIL__GET_ALL_AGENTS_STATE__STRUCT_H_
