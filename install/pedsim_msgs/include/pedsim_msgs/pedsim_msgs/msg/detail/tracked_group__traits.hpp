// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pedsim_msgs:msg/TrackedGroup.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUP__TRAITS_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pedsim_msgs/msg/detail/tracked_group__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'age'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'center_of_gravity'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"

namespace pedsim_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackedGroup & msg,
  std::ostream & out)
{
  out << "{";
  // member: group_id
  {
    out << "group_id: ";
    rosidl_generator_traits::value_to_yaml(msg.group_id, out);
    out << ", ";
  }

  // member: age
  {
    out << "age: ";
    to_flow_style_yaml(msg.age, out);
    out << ", ";
  }

  // member: center_of_gravity
  {
    out << "center_of_gravity: ";
    to_flow_style_yaml(msg.center_of_gravity, out);
    out << ", ";
  }

  // member: track_ids
  {
    if (msg.track_ids.size() == 0) {
      out << "track_ids: []";
    } else {
      out << "track_ids: [";
      size_t pending_items = msg.track_ids.size();
      for (auto item : msg.track_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const TrackedGroup & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: group_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_id: ";
    rosidl_generator_traits::value_to_yaml(msg.group_id, out);
    out << "\n";
  }

  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age:\n";
    to_block_style_yaml(msg.age, out, indentation + 2);
  }

  // member: center_of_gravity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_of_gravity:\n";
    to_block_style_yaml(msg.center_of_gravity, out, indentation + 2);
  }

  // member: track_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.track_ids.size() == 0) {
      out << "track_ids: []\n";
    } else {
      out << "track_ids:\n";
      for (auto item : msg.track_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackedGroup & msg, bool use_flow_style = false)
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
  const pedsim_msgs::msg::TrackedGroup & msg,
  std::ostream & out, size_t indentation = 0)
{
  pedsim_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pedsim_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pedsim_msgs::msg::TrackedGroup & msg)
{
  return pedsim_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pedsim_msgs::msg::TrackedGroup>()
{
  return "pedsim_msgs::msg::TrackedGroup";
}

template<>
inline const char * name<pedsim_msgs::msg::TrackedGroup>()
{
  return "pedsim_msgs/msg/TrackedGroup";
}

template<>
struct has_fixed_size<pedsim_msgs::msg::TrackedGroup>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pedsim_msgs::msg::TrackedGroup>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pedsim_msgs::msg::TrackedGroup>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUP__TRAITS_HPP_
