// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pedsim_msgs:msg/SocialActivities.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITIES__TRAITS_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pedsim_msgs/msg/detail/social_activities__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'elements'
#include "pedsim_msgs/msg/detail/social_activity__traits.hpp"

namespace pedsim_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SocialActivities & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: elements
  {
    if (msg.elements.size() == 0) {
      out << "elements: []";
    } else {
      out << "elements: [";
      size_t pending_items = msg.elements.size();
      for (auto item : msg.elements) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SocialActivities & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: elements
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.elements.size() == 0) {
      out << "elements: []\n";
    } else {
      out << "elements:\n";
      for (auto item : msg.elements) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SocialActivities & msg, bool use_flow_style = false)
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
  const pedsim_msgs::msg::SocialActivities & msg,
  std::ostream & out, size_t indentation = 0)
{
  pedsim_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pedsim_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pedsim_msgs::msg::SocialActivities & msg)
{
  return pedsim_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pedsim_msgs::msg::SocialActivities>()
{
  return "pedsim_msgs::msg::SocialActivities";
}

template<>
inline const char * name<pedsim_msgs::msg::SocialActivities>()
{
  return "pedsim_msgs/msg/SocialActivities";
}

template<>
struct has_fixed_size<pedsim_msgs::msg::SocialActivities>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pedsim_msgs::msg::SocialActivities>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pedsim_msgs::msg::SocialActivities>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITIES__TRAITS_HPP_
