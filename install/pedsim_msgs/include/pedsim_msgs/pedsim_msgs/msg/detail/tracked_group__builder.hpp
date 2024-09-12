// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pedsim_msgs:msg/TrackedGroup.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUP__BUILDER_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pedsim_msgs/msg/detail/tracked_group__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pedsim_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedGroup_track_ids
{
public:
  explicit Init_TrackedGroup_track_ids(::pedsim_msgs::msg::TrackedGroup & msg)
  : msg_(msg)
  {}
  ::pedsim_msgs::msg::TrackedGroup track_ids(::pedsim_msgs::msg::TrackedGroup::_track_ids_type arg)
  {
    msg_.track_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_msgs::msg::TrackedGroup msg_;
};

class Init_TrackedGroup_center_of_gravity
{
public:
  explicit Init_TrackedGroup_center_of_gravity(::pedsim_msgs::msg::TrackedGroup & msg)
  : msg_(msg)
  {}
  Init_TrackedGroup_track_ids center_of_gravity(::pedsim_msgs::msg::TrackedGroup::_center_of_gravity_type arg)
  {
    msg_.center_of_gravity = std::move(arg);
    return Init_TrackedGroup_track_ids(msg_);
  }

private:
  ::pedsim_msgs::msg::TrackedGroup msg_;
};

class Init_TrackedGroup_age
{
public:
  explicit Init_TrackedGroup_age(::pedsim_msgs::msg::TrackedGroup & msg)
  : msg_(msg)
  {}
  Init_TrackedGroup_center_of_gravity age(::pedsim_msgs::msg::TrackedGroup::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_TrackedGroup_center_of_gravity(msg_);
  }

private:
  ::pedsim_msgs::msg::TrackedGroup msg_;
};

class Init_TrackedGroup_group_id
{
public:
  Init_TrackedGroup_group_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedGroup_age group_id(::pedsim_msgs::msg::TrackedGroup::_group_id_type arg)
  {
    msg_.group_id = std::move(arg);
    return Init_TrackedGroup_age(msg_);
  }

private:
  ::pedsim_msgs::msg::TrackedGroup msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_msgs::msg::TrackedGroup>()
{
  return pedsim_msgs::msg::builder::Init_TrackedGroup_group_id();
}

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUP__BUILDER_HPP_
