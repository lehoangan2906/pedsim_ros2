// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pedsim_srvs:srv/GetAgentState.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_SRVS__SRV__DETAIL__GET_AGENT_STATE__STRUCT_H_
#define PEDSIM_SRVS__SRV__DETAIL__GET_AGENT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetAgentState in the package pedsim_srvs.
typedef struct pedsim_srvs__srv__GetAgentState_Request
{
  int16_t agent_id;
} pedsim_srvs__srv__GetAgentState_Request;

// Struct for a sequence of pedsim_srvs__srv__GetAgentState_Request.
typedef struct pedsim_srvs__srv__GetAgentState_Request__Sequence
{
  pedsim_srvs__srv__GetAgentState_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_srvs__srv__GetAgentState_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "pedsim_msgs/msg/detail/agent_state__struct.h"

/// Struct defined in srv/GetAgentState in the package pedsim_srvs.
typedef struct pedsim_srvs__srv__GetAgentState_Response
{
  pedsim_msgs__msg__AgentState state;
} pedsim_srvs__srv__GetAgentState_Response;

// Struct for a sequence of pedsim_srvs__srv__GetAgentState_Response.
typedef struct pedsim_srvs__srv__GetAgentState_Response__Sequence
{
  pedsim_srvs__srv__GetAgentState_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_srvs__srv__GetAgentState_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_SRVS__SRV__DETAIL__GET_AGENT_STATE__STRUCT_H_
