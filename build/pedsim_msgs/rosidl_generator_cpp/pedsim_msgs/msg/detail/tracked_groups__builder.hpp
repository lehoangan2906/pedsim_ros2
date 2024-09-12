// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pedsim_msgs:msg/TrackedGroups.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUPS__BUILDER_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUPS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pedsim_msgs/msg/detail/tracked_groups__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pedsim_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedGroups_groups
{
public:
  explicit Init_TrackedGroups_groups(::pedsim_msgs::msg::TrackedGroups & msg)
  : msg_(msg)
  {}
  ::pedsim_msgs::msg::TrackedGroups groups(::pedsim_msgs::msg::TrackedGroups::_groups_type arg)
  {
    msg_.groups = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_msgs::msg::TrackedGroups msg_;
};

class Init_TrackedGroups_header
{
public:
  Init_TrackedGroups_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedGroups_groups header(::pedsim_msgs::msg::TrackedGroups::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackedGroups_groups(msg_);
  }

private:
  ::pedsim_msgs::msg::TrackedGroups msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_msgs::msg::TrackedGroups>()
{
  return pedsim_msgs::msg::builder::Init_TrackedGroups_header();
}

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUPS__BUILDER_HPP_
