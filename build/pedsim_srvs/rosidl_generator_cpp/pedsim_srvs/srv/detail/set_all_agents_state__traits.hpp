// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pedsim_srvs:srv/SetAllAgentsState.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_SRVS__SRV__DETAIL__SET_ALL_AGENTS_STATE__TRAITS_HPP_
#define PEDSIM_SRVS__SRV__DETAIL__SET_ALL_AGENTS_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pedsim_srvs/srv/detail/set_all_agents_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'agent_states'
#include "pedsim_msgs/msg/detail/agent_states__traits.hpp"

namespace pedsim_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetAllAgentsState_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: agent_states
  {
    out << "agent_states: ";
    to_flow_style_yaml(msg.agent_states, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetAllAgentsState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: agent_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "agent_states:\n";
    to_block_style_yaml(msg.agent_states, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetAllAgentsState_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace pedsim_srvs

namespace rosidl_generator_traits
{

[[deprecated("use pedsim_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pedsim_srvs::srv::SetAllAgentsState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pedsim_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pedsim_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pedsim_srvs::srv::SetAllAgentsState_Request & msg)
{
  return pedsim_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pedsim_srvs::srv::SetAllAgentsState_Request>()
{
  return "pedsim_srvs::srv::SetAllAgentsState_Request";
}

template<>
inline const char * name<pedsim_srvs::srv::SetAllAgentsState_Request>()
{
  return "pedsim_srvs/srv/SetAllAgentsState_Request";
}

template<>
struct has_fixed_size<pedsim_srvs::srv::SetAllAgentsState_Request>
  : std::integral_constant<bool, has_fixed_size<pedsim_msgs::msg::AgentStates>::value> {};

template<>
struct has_bounded_size<pedsim_srvs::srv::SetAllAgentsState_Request>
  : std::integral_constant<bool, has_bounded_size<pedsim_msgs::msg::AgentStates>::value> {};

template<>
struct is_message<pedsim_srvs::srv::SetAllAgentsState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace pedsim_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetAllAgentsState_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: finished
  {
    out << "finished: ";
    rosidl_generator_traits::value_to_yaml(msg.finished, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetAllAgentsState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: finished
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "finished: ";
    rosidl_generator_traits::value_to_yaml(msg.finished, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetAllAgentsState_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace pedsim_srvs

namespace rosidl_generator_traits
{

[[deprecated("use pedsim_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pedsim_srvs::srv::SetAllAgentsState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pedsim_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pedsim_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pedsim_srvs::srv::SetAllAgentsState_Response & msg)
{
  return pedsim_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pedsim_srvs::srv::SetAllAgentsState_Response>()
{
  return "pedsim_srvs::srv::SetAllAgentsState_Response";
}

template<>
inline const char * name<pedsim_srvs::srv::SetAllAgentsState_Response>()
{
  return "pedsim_srvs/srv/SetAllAgentsState_Response";
}

template<>
struct has_fixed_size<pedsim_srvs::srv::SetAllAgentsState_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pedsim_srvs::srv::SetAllAgentsState_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pedsim_srvs::srv::SetAllAgentsState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pedsim_srvs::srv::SetAllAgentsState>()
{
  return "pedsim_srvs::srv::SetAllAgentsState";
}

template<>
inline const char * name<pedsim_srvs::srv::SetAllAgentsState>()
{
  return "pedsim_srvs/srv/SetAllAgentsState";
}

template<>
struct has_fixed_size<pedsim_srvs::srv::SetAllAgentsState>
  : std::integral_constant<
    bool,
    has_fixed_size<pedsim_srvs::srv::SetAllAgentsState_Request>::value &&
    has_fixed_size<pedsim_srvs::srv::SetAllAgentsState_Response>::value
  >
{
};

template<>
struct has_bounded_size<pedsim_srvs::srv::SetAllAgentsState>
  : std::integral_constant<
    bool,
    has_bounded_size<pedsim_srvs::srv::SetAllAgentsState_Request>::value &&
    has_bounded_size<pedsim_srvs::srv::SetAllAgentsState_Response>::value
  >
{
};

template<>
struct is_service<pedsim_srvs::srv::SetAllAgentsState>
  : std::true_type
{
};

template<>
struct is_service_request<pedsim_srvs::srv::SetAllAgentsState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pedsim_srvs::srv::SetAllAgentsState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PEDSIM_SRVS__SRV__DETAIL__SET_ALL_AGENTS_STATE__TRAITS_HPP_
