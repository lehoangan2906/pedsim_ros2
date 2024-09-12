// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pedsim_srvs:srv/GetAgentState.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_SRVS__SRV__DETAIL__GET_AGENT_STATE__TRAITS_HPP_
#define PEDSIM_SRVS__SRV__DETAIL__GET_AGENT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pedsim_srvs/srv/detail/get_agent_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pedsim_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetAgentState_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: agent_id
  {
    out << "agent_id: ";
    rosidl_generator_traits::value_to_yaml(msg.agent_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetAgentState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: agent_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "agent_id: ";
    rosidl_generator_traits::value_to_yaml(msg.agent_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetAgentState_Request & msg, bool use_flow_style = false)
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
  const pedsim_srvs::srv::GetAgentState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  pedsim_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pedsim_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pedsim_srvs::srv::GetAgentState_Request & msg)
{
  return pedsim_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pedsim_srvs::srv::GetAgentState_Request>()
{
  return "pedsim_srvs::srv::GetAgentState_Request";
}

template<>
inline const char * name<pedsim_srvs::srv::GetAgentState_Request>()
{
  return "pedsim_srvs/srv/GetAgentState_Request";
}

template<>
struct has_fixed_size<pedsim_srvs::srv::GetAgentState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pedsim_srvs::srv::GetAgentState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pedsim_srvs::srv::GetAgentState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'state'
#include "pedsim_msgs/msg/detail/agent_state__traits.hpp"

namespace pedsim_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetAgentState_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetAgentState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetAgentState_Response & msg, bool use_flow_style = false)
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
  const pedsim_srvs::srv::GetAgentState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  pedsim_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pedsim_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const pedsim_srvs::srv::GetAgentState_Response & msg)
{
  return pedsim_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<pedsim_srvs::srv::GetAgentState_Response>()
{
  return "pedsim_srvs::srv::GetAgentState_Response";
}

template<>
inline const char * name<pedsim_srvs::srv::GetAgentState_Response>()
{
  return "pedsim_srvs/srv/GetAgentState_Response";
}

template<>
struct has_fixed_size<pedsim_srvs::srv::GetAgentState_Response>
  : std::integral_constant<bool, has_fixed_size<pedsim_msgs::msg::AgentState>::value> {};

template<>
struct has_bounded_size<pedsim_srvs::srv::GetAgentState_Response>
  : std::integral_constant<bool, has_bounded_size<pedsim_msgs::msg::AgentState>::value> {};

template<>
struct is_message<pedsim_srvs::srv::GetAgentState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pedsim_srvs::srv::GetAgentState>()
{
  return "pedsim_srvs::srv::GetAgentState";
}

template<>
inline const char * name<pedsim_srvs::srv::GetAgentState>()
{
  return "pedsim_srvs/srv/GetAgentState";
}

template<>
struct has_fixed_size<pedsim_srvs::srv::GetAgentState>
  : std::integral_constant<
    bool,
    has_fixed_size<pedsim_srvs::srv::GetAgentState_Request>::value &&
    has_fixed_size<pedsim_srvs::srv::GetAgentState_Response>::value
  >
{
};

template<>
struct has_bounded_size<pedsim_srvs::srv::GetAgentState>
  : std::integral_constant<
    bool,
    has_bounded_size<pedsim_srvs::srv::GetAgentState_Request>::value &&
    has_bounded_size<pedsim_srvs::srv::GetAgentState_Response>::value
  >
{
};

template<>
struct is_service<pedsim_srvs::srv::GetAgentState>
  : std::true_type
{
};

template<>
struct is_service_request<pedsim_srvs::srv::GetAgentState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<pedsim_srvs::srv::GetAgentState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PEDSIM_SRVS__SRV__DETAIL__GET_AGENT_STATE__TRAITS_HPP_
