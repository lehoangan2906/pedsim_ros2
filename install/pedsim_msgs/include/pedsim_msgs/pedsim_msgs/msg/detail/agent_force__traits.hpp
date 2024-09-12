// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pedsim_msgs:msg/AgentForce.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__AGENT_FORCE__TRAITS_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__AGENT_FORCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pedsim_msgs/msg/detail/agent_force__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'desired_force'
// Member 'obstacle_force'
// Member 'social_force'
// Member 'group_coherence_force'
// Member 'group_gaze_force'
// Member 'group_repulsion_force'
// Member 'random_force'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace pedsim_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AgentForce & msg,
  std::ostream & out)
{
  out << "{";
  // member: desired_force
  {
    out << "desired_force: ";
    to_flow_style_yaml(msg.desired_force, out);
    out << ", ";
  }

  // member: obstacle_force
  {
    out << "obstacle_force: ";
    to_flow_style_yaml(msg.obstacle_force, out);
    out << ", ";
  }

  // member: social_force
  {
    out << "social_force: ";
    to_flow_style_yaml(msg.social_force, out);
    out << ", ";
  }

  // member: group_coherence_force
  {
    out << "group_coherence_force: ";
    to_flow_style_yaml(msg.group_coherence_force, out);
    out << ", ";
  }

  // member: group_gaze_force
  {
    out << "group_gaze_force: ";
    to_flow_style_yaml(msg.group_gaze_force, out);
    out << ", ";
  }

  // member: group_repulsion_force
  {
    out << "group_repulsion_force: ";
    to_flow_style_yaml(msg.group_repulsion_force, out);
    out << ", ";
  }

  // member: random_force
  {
    out << "random_force: ";
    to_flow_style_yaml(msg.random_force, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AgentForce & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: desired_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "desired_force:\n";
    to_block_style_yaml(msg.desired_force, out, indentation + 2);
  }

  // member: obstacle_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_force:\n";
    to_block_style_yaml(msg.obstacle_force, out, indentation + 2);
  }

  // member: social_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "social_force:\n";
    to_block_style_yaml(msg.social_force, out, indentation + 2);
  }

  // member: group_coherence_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_coherence_force:\n";
    to_block_style_yaml(msg.group_coherence_force, out, indentation + 2);
  }

  // member: group_gaze_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_gaze_force:\n";
    to_block_style_yaml(msg.group_gaze_force, out, indentation + 2);
  }

  // member: group_repulsion_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_repulsion_force:\n";
    to_block_style_yaml(msg.group_repulsion_force, out, indentation + 2);
  }

  // member: random_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "random_force:\n";
    to_block_style_yaml(msg.random_force, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AgentForce & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace pedsim_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pedsim_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pedsim_msgs::msg::AgentForce & msg,
  std::ostream & out, size_t indentation = 0)
{
  pedsim_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pedsim_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pedsim_msgs::msg::AgentForce & msg)
{
  return pedsim_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pedsim_msgs::msg::AgentForce>()
{
  return "pedsim_msgs::msg::AgentForce";
}

template<>
inline const char * name<pedsim_msgs::msg::AgentForce>()
{
  return "pedsim_msgs/msg/AgentForce";
}

template<>
struct has_fixed_size<pedsim_msgs::msg::AgentForce>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<pedsim_msgs::msg::AgentForce>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<pedsim_msgs::msg::AgentForce>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PEDSIM_MSGS__MSG__DETAIL__AGENT_FORCE__TRAITS_HPP_
