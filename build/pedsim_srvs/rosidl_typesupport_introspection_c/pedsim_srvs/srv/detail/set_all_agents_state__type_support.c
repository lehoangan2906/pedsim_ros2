// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pedsim_srvs:srv/SetAllAgentsState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pedsim_srvs/srv/detail/set_all_agents_state__rosidl_typesupport_introspection_c.h"
#include "pedsim_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pedsim_srvs/srv/detail/set_all_agents_state__functions.h"
#include "pedsim_srvs/srv/detail/set_all_agents_state__struct.h"


// Include directives for member types
// Member `agent_states`
#include "pedsim_msgs/msg/agent_states.h"
// Member `agent_states`
#include "pedsim_msgs/msg/detail/agent_states__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pedsim_srvs__srv__SetAllAgentsState_Request__rosidl_typesupport_introspection_c__SetAllAgentsState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pedsim_srvs__srv__SetAllAgentsState_Request__init(message_memory);
}

void pedsim_srvs__srv__SetAllAgentsState_Request__rosidl_typesupport_introspection_c__SetAllAgentsState_Request_fini_function(void * message_memory)
{
  pedsim_srvs__srv__SetAllAgentsState_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pedsim_srvs__srv__SetAllAgentsState_Request__rosidl_typesupport_introspection_c__SetAllAgentsState_Request_message_member_array[1] = {
  {
    "agent_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pedsim_srvs__srv__SetAllAgentsState_Request, agent_states),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pedsim_srvs__srv__SetAllAgentsState_Request__rosidl_typesupport_introspection_c__SetAllAgentsState_Request_message_members = {
  "pedsim_srvs__srv",  // message namespace
  "SetAllAgentsState_Request",  // message name
  1,  // number of fields
  sizeof(pedsim_srvs__srv__SetAllAgentsState_Request),
  pedsim_srvs__srv__SetAllAgentsState_Request__rosidl_typesupport_introspection_c__SetAllAgentsState_Request_message_member_array,  // message members
  pedsim_srvs__srv__SetAllAgentsState_Request__rosidl_typesupport_introspection_c__SetAllAgentsState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  pedsim_srvs__srv__SetAllAgentsState_Request__rosidl_typesupport_introspection_c__SetAllAgentsState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pedsim_srvs__srv__SetAllAgentsState_Request__rosidl_typesupport_introspection_c__SetAllAgentsState_Request_message_type_support_handle = {
  0,
  &pedsim_srvs__srv__SetAllAgentsState_Request__rosidl_typesupport_introspection_c__SetAllAgentsState_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pedsim_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pedsim_srvs, srv, SetAllAgentsState_Request)() {
  pedsim_srvs__srv__SetAllAgentsState_Request__rosidl_typesupport_introspection_c__SetAllAgentsState_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pedsim_msgs, msg, AgentStates)();
  if (!pedsim_srvs__srv__SetAllAgentsState_Request__rosidl_typesupport_introspection_c__SetAllAgentsState_Request_message_type_support_handle.typesupport_identifier) {
    pedsim_srvs__srv__SetAllAgentsState_Request__rosidl_typesupport_introspection_c__SetAllAgentsState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pedsim_srvs__srv__SetAllAgentsState_Request__rosidl_typesupport_introspection_c__SetAllAgentsState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "pedsim_srvs/srv/detail/set_all_agents_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "pedsim_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "pedsim_srvs/srv/detail/set_all_agents_state__functions.h"
// already included above
// #include "pedsim_srvs/srv/detail/set_all_agents_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void pedsim_srvs__srv__SetAllAgentsState_Response__rosidl_typesupport_introspection_c__SetAllAgentsState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pedsim_srvs__srv__SetAllAgentsState_Response__init(message_memory);
}

void pedsim_srvs__srv__SetAllAgentsState_Response__rosidl_typesupport_introspection_c__SetAllAgentsState_Response_fini_function(void * message_memory)
{
  pedsim_srvs__srv__SetAllAgentsState_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pedsim_srvs__srv__SetAllAgentsState_Response__rosidl_typesupport_introspection_c__SetAllAgentsState_Response_message_member_array[1] = {
  {
    "finished",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pedsim_srvs__srv__SetAllAgentsState_Response, finished),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pedsim_srvs__srv__SetAllAgentsState_Response__rosidl_typesupport_introspection_c__SetAllAgentsState_Response_message_members = {
  "pedsim_srvs__srv",  // message namespace
  "SetAllAgentsState_Response",  // message name
  1,  // number of fields
  sizeof(pedsim_srvs__srv__SetAllAgentsState_Response),
  pedsim_srvs__srv__SetAllAgentsState_Response__rosidl_typesupport_introspection_c__SetAllAgentsState_Response_message_member_array,  // message members
  pedsim_srvs__srv__SetAllAgentsState_Response__rosidl_typesupport_introspection_c__SetAllAgentsState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  pedsim_srvs__srv__SetAllAgentsState_Response__rosidl_typesupport_introspection_c__SetAllAgentsState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pedsim_srvs__srv__SetAllAgentsState_Response__rosidl_typesupport_introspection_c__SetAllAgentsState_Response_message_type_support_handle = {
  0,
  &pedsim_srvs__srv__SetAllAgentsState_Response__rosidl_typesupport_introspection_c__SetAllAgentsState_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pedsim_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pedsim_srvs, srv, SetAllAgentsState_Response)() {
  if (!pedsim_srvs__srv__SetAllAgentsState_Response__rosidl_typesupport_introspection_c__SetAllAgentsState_Response_message_type_support_handle.typesupport_identifier) {
    pedsim_srvs__srv__SetAllAgentsState_Response__rosidl_typesupport_introspection_c__SetAllAgentsState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pedsim_srvs__srv__SetAllAgentsState_Response__rosidl_typesupport_introspection_c__SetAllAgentsState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "pedsim_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "pedsim_srvs/srv/detail/set_all_agents_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers pedsim_srvs__srv__detail__set_all_agents_state__rosidl_typesupport_introspection_c__SetAllAgentsState_service_members = {
  "pedsim_srvs__srv",  // service namespace
  "SetAllAgentsState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // pedsim_srvs__srv__detail__set_all_agents_state__rosidl_typesupport_introspection_c__SetAllAgentsState_Request_message_type_support_handle,
  NULL  // response message
  // pedsim_srvs__srv__detail__set_all_agents_state__rosidl_typesupport_introspection_c__SetAllAgentsState_Response_message_type_support_handle
};

static rosidl_service_type_support_t pedsim_srvs__srv__detail__set_all_agents_state__rosidl_typesupport_introspection_c__SetAllAgentsState_service_type_support_handle = {
  0,
  &pedsim_srvs__srv__detail__set_all_agents_state__rosidl_typesupport_introspection_c__SetAllAgentsState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pedsim_srvs, srv, SetAllAgentsState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pedsim_srvs, srv, SetAllAgentsState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pedsim_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pedsim_srvs, srv, SetAllAgentsState)() {
  if (!pedsim_srvs__srv__detail__set_all_agents_state__rosidl_typesupport_introspection_c__SetAllAgentsState_service_type_support_handle.typesupport_identifier) {
    pedsim_srvs__srv__detail__set_all_agents_state__rosidl_typesupport_introspection_c__SetAllAgentsState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)pedsim_srvs__srv__detail__set_all_agents_state__rosidl_typesupport_introspection_c__SetAllAgentsState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pedsim_srvs, srv, SetAllAgentsState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pedsim_srvs, srv, SetAllAgentsState_Response)()->data;
  }

  return &pedsim_srvs__srv__detail__set_all_agents_state__rosidl_typesupport_introspection_c__SetAllAgentsState_service_type_support_handle;
}
