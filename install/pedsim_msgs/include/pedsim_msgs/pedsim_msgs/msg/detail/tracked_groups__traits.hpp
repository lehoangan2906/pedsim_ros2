// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pedsim_msgs:msg/TrackedGroups.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUPS__TRAITS_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUPS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pedsim_msgs/msg/detail/tracked_groups__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'groups'
#include "pedsim_msgs/msg/detail/tracked_group__traits.hpp"

namespace pedsim_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackedGroups & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: groups
  {
    if (msg.groups.size() == 0) {
      out << "groups: []";
    } else {
      out << "groups: [";
      size_t pending_items = msg.groups.size();
      for (auto item : msg.groups) {
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
  const TrackedGroups & msg,
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

  // member: groups
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.groups.size() == 0) {
      out << "groups: []\n";
    } else {
      out << "groups:\n";
      for (auto item : msg.groups) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackedGroups & msg, bool use_flow_style = false)
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
  const pedsim_msgs::msg::TrackedGroups & msg,
  std::ostream & out, size_t indentation = 0)
{
  pedsim_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pedsim_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pedsim_msgs::msg::TrackedGroups & msg)
{
  return pedsim_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pedsim_msgs::msg::TrackedGroups>()
{
  return "pedsim_msgs::msg::TrackedGroups";
}

template<>
inline const char * name<pedsim_msgs::msg::TrackedGroups>()
{
  return "pedsim_msgs/msg/TrackedGroups";
}

template<>
struct has_fixed_size<pedsim_msgs::msg::TrackedGroups>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pedsim_msgs::msg::TrackedGroups>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pedsim_msgs::msg::TrackedGroups>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUPS__TRAITS_HPP_
