// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pedsim_msgs:msg/SocialActivities.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITIES__BUILDER_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pedsim_msgs/msg/detail/social_activities__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pedsim_msgs
{

namespace msg
{

namespace builder
{

class Init_SocialActivities_elements
{
public:
  explicit Init_SocialActivities_elements(::pedsim_msgs::msg::SocialActivities & msg)
  : msg_(msg)
  {}
  ::pedsim_msgs::msg::SocialActivities elements(::pedsim_msgs::msg::SocialActivities::_elements_type arg)
  {
    msg_.elements = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_msgs::msg::SocialActivities msg_;
};

class Init_SocialActivities_header
{
public:
  Init_SocialActivities_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SocialActivities_elements header(::pedsim_msgs::msg::SocialActivities::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SocialActivities_elements(msg_);
  }

private:
  ::pedsim_msgs::msg::SocialActivities msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_msgs::msg::SocialActivities>()
{
  return pedsim_msgs::msg::builder::Init_SocialActivities_header();
}

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITIES__BUILDER_HPP_
