// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pedsim_msgs:msg/SocialActivity.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITY__TRAITS_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pedsim_msgs/msg/detail/social_activity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pedsim_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SocialActivity & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
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
  const SocialActivity & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
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

inline std::string to_yaml(const SocialActivity & msg, bool use_flow_style = false)
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
  const pedsim_msgs::msg::SocialActivity & msg,
  std::ostream & out, size_t indentation = 0)
{
  pedsim_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pedsim_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pedsim_msgs::msg::SocialActivity & msg)
{
  return pedsim_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pedsim_msgs::msg::SocialActivity>()
{
  return "pedsim_msgs::msg::SocialActivity";
}

template<>
inline const char * name<pedsim_msgs::msg::SocialActivity>()
{
  return "pedsim_msgs/msg/SocialActivity";
}

template<>
struct has_fixed_size<pedsim_msgs::msg::SocialActivity>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pedsim_msgs::msg::SocialActivity>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pedsim_msgs::msg::SocialActivity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITY__TRAITS_HPP_
