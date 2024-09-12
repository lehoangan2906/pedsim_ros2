// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pedsim_msgs:msg/SocialRelation.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__SOCIAL_RELATION__TRAITS_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__SOCIAL_RELATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pedsim_msgs/msg/detail/social_relation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pedsim_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SocialRelation & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: strength
  {
    out << "strength: ";
    rosidl_generator_traits::value_to_yaml(msg.strength, out);
    out << ", ";
  }

  // member: track1_id
  {
    out << "track1_id: ";
    rosidl_generator_traits::value_to_yaml(msg.track1_id, out);
    out << ", ";
  }

  // member: track2_id
  {
    out << "track2_id: ";
    rosidl_generator_traits::value_to_yaml(msg.track2_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SocialRelation & msg,
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

  // member: strength
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "strength: ";
    rosidl_generator_traits::value_to_yaml(msg.strength, out);
    out << "\n";
  }

  // member: track1_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track1_id: ";
    rosidl_generator_traits::value_to_yaml(msg.track1_id, out);
    out << "\n";
  }

  // member: track2_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track2_id: ";
    rosidl_generator_traits::value_to_yaml(msg.track2_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SocialRelation & msg, bool use_flow_style = false)
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
  const pedsim_msgs::msg::SocialRelation & msg,
  std::ostream & out, size_t indentation = 0)
{
  pedsim_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pedsim_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pedsim_msgs::msg::SocialRelation & msg)
{
  return pedsim_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pedsim_msgs::msg::SocialRelation>()
{
  return "pedsim_msgs::msg::SocialRelation";
}

template<>
inline const char * name<pedsim_msgs::msg::SocialRelation>()
{
  return "pedsim_msgs/msg/SocialRelation";
}

template<>
struct has_fixed_size<pedsim_msgs::msg::SocialRelation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pedsim_msgs::msg::SocialRelation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pedsim_msgs::msg::SocialRelation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PEDSIM_MSGS__MSG__DETAIL__SOCIAL_RELATION__TRAITS_HPP_
