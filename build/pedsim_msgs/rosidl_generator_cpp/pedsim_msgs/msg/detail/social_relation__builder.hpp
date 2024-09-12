// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pedsim_msgs:msg/SocialRelation.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__SOCIAL_RELATION__BUILDER_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__SOCIAL_RELATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pedsim_msgs/msg/detail/social_relation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pedsim_msgs
{

namespace msg
{

namespace builder
{

class Init_SocialRelation_track2_id
{
public:
  explicit Init_SocialRelation_track2_id(::pedsim_msgs::msg::SocialRelation & msg)
  : msg_(msg)
  {}
  ::pedsim_msgs::msg::SocialRelation track2_id(::pedsim_msgs::msg::SocialRelation::_track2_id_type arg)
  {
    msg_.track2_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_msgs::msg::SocialRelation msg_;
};

class Init_SocialRelation_track1_id
{
public:
  explicit Init_SocialRelation_track1_id(::pedsim_msgs::msg::SocialRelation & msg)
  : msg_(msg)
  {}
  Init_SocialRelation_track2_id track1_id(::pedsim_msgs::msg::SocialRelation::_track1_id_type arg)
  {
    msg_.track1_id = std::move(arg);
    return Init_SocialRelation_track2_id(msg_);
  }

private:
  ::pedsim_msgs::msg::SocialRelation msg_;
};

class Init_SocialRelation_strength
{
public:
  explicit Init_SocialRelation_strength(::pedsim_msgs::msg::SocialRelation & msg)
  : msg_(msg)
  {}
  Init_SocialRelation_track1_id strength(::pedsim_msgs::msg::SocialRelation::_strength_type arg)
  {
    msg_.strength = std::move(arg);
    return Init_SocialRelation_track1_id(msg_);
  }

private:
  ::pedsim_msgs::msg::SocialRelation msg_;
};

class Init_SocialRelation_type
{
public:
  Init_SocialRelation_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SocialRelation_strength type(::pedsim_msgs::msg::SocialRelation::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SocialRelation_strength(msg_);
  }

private:
  ::pedsim_msgs::msg::SocialRelation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_msgs::msg::SocialRelation>()
{
  return pedsim_msgs::msg::builder::Init_SocialRelation_type();
}

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__SOCIAL_RELATION__BUILDER_HPP_
