// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pedsim_msgs:msg/TrackedPerson.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__TRACKED_PERSON__TRAITS_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__TRACKED_PERSON__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pedsim_msgs/msg/detail/tracked_person__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'age'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__traits.hpp"

namespace pedsim_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrackedPerson & msg,
  std::ostream & out)
{
  out << "{";
  // member: track_id
  {
    out << "track_id: ";
    rosidl_generator_traits::value_to_yaml(msg.track_id, out);
    out << ", ";
  }

  // member: is_occluded
  {
    out << "is_occluded: ";
    rosidl_generator_traits::value_to_yaml(msg.is_occluded, out);
    out << ", ";
  }

  // member: is_matched
  {
    out << "is_matched: ";
    rosidl_generator_traits::value_to_yaml(msg.is_matched, out);
    out << ", ";
  }

  // member: detection_id
  {
    out << "detection_id: ";
    rosidl_generator_traits::value_to_yaml(msg.detection_id, out);
    out << ", ";
  }

  // member: age
  {
    out << "age: ";
    to_flow_style_yaml(msg.age, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: twist
  {
    out << "twist: ";
    to_flow_style_yaml(msg.twist, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrackedPerson & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: track_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_id: ";
    rosidl_generator_traits::value_to_yaml(msg.track_id, out);
    out << "\n";
  }

  // member: is_occluded
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_occluded: ";
    rosidl_generator_traits::value_to_yaml(msg.is_occluded, out);
    out << "\n";
  }

  // member: is_matched
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_matched: ";
    rosidl_generator_traits::value_to_yaml(msg.is_matched, out);
    out << "\n";
  }

  // member: detection_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detection_id: ";
    rosidl_generator_traits::value_to_yaml(msg.detection_id, out);
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

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: twist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twist:\n";
    to_block_style_yaml(msg.twist, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrackedPerson & msg, bool use_flow_style = false)
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
  const pedsim_msgs::msg::TrackedPerson & msg,
  std::ostream & out, size_t indentation = 0)
{
  pedsim_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pedsim_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pedsim_msgs::msg::TrackedPerson & msg)
{
  return pedsim_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pedsim_msgs::msg::TrackedPerson>()
{
  return "pedsim_msgs::msg::TrackedPerson";
}

template<>
inline const char * name<pedsim_msgs::msg::TrackedPerson>()
{
  return "pedsim_msgs/msg/TrackedPerson";
}

template<>
struct has_fixed_size<pedsim_msgs::msg::TrackedPerson>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<geometry_msgs::msg::PoseWithCovariance>::value && has_fixed_size<geometry_msgs::msg::TwistWithCovariance>::value> {};

template<>
struct has_bounded_size<pedsim_msgs::msg::TrackedPerson>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<geometry_msgs::msg::PoseWithCovariance>::value && has_bounded_size<geometry_msgs::msg::TwistWithCovariance>::value> {};

template<>
struct is_message<pedsim_msgs::msg::TrackedPerson>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PEDSIM_MSGS__MSG__DETAIL__TRACKED_PERSON__TRAITS_HPP_
