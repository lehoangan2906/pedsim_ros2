// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from pedsim_srvs:srv/GetAgentState.idl
// generated code does not contain a copyright notice
#include "pedsim_srvs/srv/detail/get_agent_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "pedsim_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pedsim_srvs/srv/detail/get_agent_state__struct.h"
#include "pedsim_srvs/srv/detail/get_agent_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GetAgentState_Request__ros_msg_type = pedsim_srvs__srv__GetAgentState_Request;

static bool _GetAgentState_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetAgentState_Request__ros_msg_type * ros_message = static_cast<const _GetAgentState_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: agent_id
  {
    cdr << ros_message->agent_id;
  }

  return true;
}

static bool _GetAgentState_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetAgentState_Request__ros_msg_type * ros_message = static_cast<_GetAgentState_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: agent_id
  {
    cdr >> ros_message->agent_id;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pedsim_srvs
size_t get_serialized_size_pedsim_srvs__srv__GetAgentState_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetAgentState_Request__ros_msg_type * ros_message = static_cast<const _GetAgentState_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name agent_id
  {
    size_t item_size = sizeof(ros_message->agent_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetAgentState_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pedsim_srvs__srv__GetAgentState_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pedsim_srvs
size_t max_serialized_size_pedsim_srvs__srv__GetAgentState_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: agent_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pedsim_srvs__srv__GetAgentState_Request;
    is_plain =
      (
      offsetof(DataType, agent_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetAgentState_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_pedsim_srvs__srv__GetAgentState_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetAgentState_Request = {
  "pedsim_srvs::srv",
  "GetAgentState_Request",
  _GetAgentState_Request__cdr_serialize,
  _GetAgentState_Request__cdr_deserialize,
  _GetAgentState_Request__get_serialized_size,
  _GetAgentState_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetAgentState_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetAgentState_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pedsim_srvs, srv, GetAgentState_Request)() {
  return &_GetAgentState_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "pedsim_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "pedsim_srvs/srv/detail/get_agent_state__struct.h"
// already included above
// #include "pedsim_srvs/srv/detail/get_agent_state__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "pedsim_msgs/msg/detail/agent_state__functions.h"  // state

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_pedsim_srvs
size_t get_serialized_size_pedsim_msgs__msg__AgentState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_pedsim_srvs
size_t max_serialized_size_pedsim_msgs__msg__AgentState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_pedsim_srvs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pedsim_msgs, msg, AgentState)();


using _GetAgentState_Response__ros_msg_type = pedsim_srvs__srv__GetAgentState_Response;

static bool _GetAgentState_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetAgentState_Response__ros_msg_type * ros_message = static_cast<const _GetAgentState_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pedsim_msgs, msg, AgentState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->state, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetAgentState_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetAgentState_Response__ros_msg_type * ros_message = static_cast<_GetAgentState_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, pedsim_msgs, msg, AgentState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->state))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pedsim_srvs
size_t get_serialized_size_pedsim_srvs__srv__GetAgentState_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetAgentState_Response__ros_msg_type * ros_message = static_cast<const _GetAgentState_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name state

  current_alignment += get_serialized_size_pedsim_msgs__msg__AgentState(
    &(ros_message->state), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetAgentState_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pedsim_srvs__srv__GetAgentState_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pedsim_srvs
size_t max_serialized_size_pedsim_srvs__srv__GetAgentState_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: state
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_pedsim_msgs__msg__AgentState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pedsim_srvs__srv__GetAgentState_Response;
    is_plain =
      (
      offsetof(DataType, state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetAgentState_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_pedsim_srvs__srv__GetAgentState_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetAgentState_Response = {
  "pedsim_srvs::srv",
  "GetAgentState_Response",
  _GetAgentState_Response__cdr_serialize,
  _GetAgentState_Response__cdr_deserialize,
  _GetAgentState_Response__get_serialized_size,
  _GetAgentState_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetAgentState_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetAgentState_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pedsim_srvs, srv, GetAgentState_Response)() {
  return &_GetAgentState_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "pedsim_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pedsim_srvs/srv/get_agent_state.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetAgentState__callbacks = {
  "pedsim_srvs::srv",
  "GetAgentState",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pedsim_srvs, srv, GetAgentState_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pedsim_srvs, srv, GetAgentState_Response)(),
};

static rosidl_service_type_support_t GetAgentState__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetAgentState__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pedsim_srvs, srv, GetAgentState)() {
  return &GetAgentState__handle;
}

#if defined(__cplusplus)
}
#endif
