// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from pedsim_srvs:srv/SetAllAgentsState.idl
// generated code does not contain a copyright notice
#include "pedsim_srvs/srv/detail/set_all_agents_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "pedsim_srvs/srv/detail/set_all_agents_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace pedsim_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const pedsim_msgs::msg::AgentStates &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  pedsim_msgs::msg::AgentStates &);
size_t get_serialized_size(
  const pedsim_msgs::msg::AgentStates &,
  size_t current_alignment);
size_t
max_serialized_size_AgentStates(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace pedsim_msgs


namespace pedsim_srvs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pedsim_srvs
cdr_serialize(
  const pedsim_srvs::srv::SetAllAgentsState_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: agent_states
  pedsim_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.agent_states,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pedsim_srvs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pedsim_srvs::srv::SetAllAgentsState_Request & ros_message)
{
  // Member: agent_states
  pedsim_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.agent_states);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pedsim_srvs
get_serialized_size(
  const pedsim_srvs::srv::SetAllAgentsState_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: agent_states

  current_alignment +=
    pedsim_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.agent_states, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pedsim_srvs
max_serialized_size_SetAllAgentsState_Request(
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


  // Member: agent_states
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        pedsim_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_AgentStates(
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
    using DataType = pedsim_srvs::srv::SetAllAgentsState_Request;
    is_plain =
      (
      offsetof(DataType, agent_states) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetAllAgentsState_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const pedsim_srvs::srv::SetAllAgentsState_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetAllAgentsState_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pedsim_srvs::srv::SetAllAgentsState_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetAllAgentsState_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pedsim_srvs::srv::SetAllAgentsState_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetAllAgentsState_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetAllAgentsState_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetAllAgentsState_Request__callbacks = {
  "pedsim_srvs::srv",
  "SetAllAgentsState_Request",
  _SetAllAgentsState_Request__cdr_serialize,
  _SetAllAgentsState_Request__cdr_deserialize,
  _SetAllAgentsState_Request__get_serialized_size,
  _SetAllAgentsState_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetAllAgentsState_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetAllAgentsState_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace pedsim_srvs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pedsim_srvs
const rosidl_message_type_support_t *
get_message_type_support_handle<pedsim_srvs::srv::SetAllAgentsState_Request>()
{
  return &pedsim_srvs::srv::typesupport_fastrtps_cpp::_SetAllAgentsState_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pedsim_srvs, srv, SetAllAgentsState_Request)() {
  return &pedsim_srvs::srv::typesupport_fastrtps_cpp::_SetAllAgentsState_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace pedsim_srvs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pedsim_srvs
cdr_serialize(
  const pedsim_srvs::srv::SetAllAgentsState_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: finished
  cdr << (ros_message.finished ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pedsim_srvs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pedsim_srvs::srv::SetAllAgentsState_Response & ros_message)
{
  // Member: finished
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.finished = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pedsim_srvs
get_serialized_size(
  const pedsim_srvs::srv::SetAllAgentsState_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: finished
  {
    size_t item_size = sizeof(ros_message.finished);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pedsim_srvs
max_serialized_size_SetAllAgentsState_Response(
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


  // Member: finished
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = pedsim_srvs::srv::SetAllAgentsState_Response;
    is_plain =
      (
      offsetof(DataType, finished) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetAllAgentsState_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const pedsim_srvs::srv::SetAllAgentsState_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetAllAgentsState_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pedsim_srvs::srv::SetAllAgentsState_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetAllAgentsState_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pedsim_srvs::srv::SetAllAgentsState_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetAllAgentsState_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetAllAgentsState_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetAllAgentsState_Response__callbacks = {
  "pedsim_srvs::srv",
  "SetAllAgentsState_Response",
  _SetAllAgentsState_Response__cdr_serialize,
  _SetAllAgentsState_Response__cdr_deserialize,
  _SetAllAgentsState_Response__get_serialized_size,
  _SetAllAgentsState_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetAllAgentsState_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetAllAgentsState_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace pedsim_srvs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pedsim_srvs
const rosidl_message_type_support_t *
get_message_type_support_handle<pedsim_srvs::srv::SetAllAgentsState_Response>()
{
  return &pedsim_srvs::srv::typesupport_fastrtps_cpp::_SetAllAgentsState_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pedsim_srvs, srv, SetAllAgentsState_Response)() {
  return &pedsim_srvs::srv::typesupport_fastrtps_cpp::_SetAllAgentsState_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace pedsim_srvs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SetAllAgentsState__callbacks = {
  "pedsim_srvs::srv",
  "SetAllAgentsState",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pedsim_srvs, srv, SetAllAgentsState_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pedsim_srvs, srv, SetAllAgentsState_Response)(),
};

static rosidl_service_type_support_t _SetAllAgentsState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetAllAgentsState__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace pedsim_srvs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pedsim_srvs
const rosidl_service_type_support_t *
get_service_type_support_handle<pedsim_srvs::srv::SetAllAgentsState>()
{
  return &pedsim_srvs::srv::typesupport_fastrtps_cpp::_SetAllAgentsState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pedsim_srvs, srv, SetAllAgentsState)() {
  return &pedsim_srvs::srv::typesupport_fastrtps_cpp::_SetAllAgentsState__handle;
}

#ifdef __cplusplus
}
#endif
