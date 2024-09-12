// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pedsim_msgs:msg/SocialActivity.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITY__BUILDER_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pedsim_msgs/msg/detail/social_activity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pedsim_msgs
{

namespace msg
{

namespace builder
{

class Init_SocialActivity_track_ids
{
public:
  explicit Init_SocialActivity_track_ids(::pedsim_msgs::msg::SocialActivity & msg)
  : msg_(msg)
  {}
  ::pedsim_msgs::msg::SocialActivity track_ids(::pedsim_msgs::msg::SocialActivity::_track_ids_type arg)
  {
    msg_.track_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_msgs::msg::SocialActivity msg_;
};

class Init_SocialActivity_confidence
{
public:
  explicit Init_SocialActivity_confidence(::pedsim_msgs::msg::SocialActivity & msg)
  : msg_(msg)
  {}
  Init_SocialActivity_track_ids confidence(::pedsim_msgs::msg::SocialActivity::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_SocialActivity_track_ids(msg_);
  }

private:
  ::pedsim_msgs::msg::SocialActivity msg_;
};

class Init_SocialActivity_type
{
public:
  Init_SocialActivity_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SocialActivity_confidence type(::pedsim_msgs::msg::SocialActivity::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SocialActivity_confidence(msg_);
  }

private:
  ::pedsim_msgs::msg::SocialActivity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_msgs::msg::SocialActivity>()
{
  return pedsim_msgs::msg::builder::Init_SocialActivity_type();
}

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITY__BUILDER_HPP_
