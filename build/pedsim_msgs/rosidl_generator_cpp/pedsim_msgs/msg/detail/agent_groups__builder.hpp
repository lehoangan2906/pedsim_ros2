// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pedsim_msgs:msg/AgentGroups.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__AGENT_GROUPS__BUILDER_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__AGENT_GROUPS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pedsim_msgs/msg/detail/agent_groups__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pedsim_msgs
{

namespace msg
{

namespace builder
{

class Init_AgentGroups_groups
{
public:
  explicit Init_AgentGroups_groups(::pedsim_msgs::msg::AgentGroups & msg)
  : msg_(msg)
  {}
  ::pedsim_msgs::msg::AgentGroups groups(::pedsim_msgs::msg::AgentGroups::_groups_type arg)
  {
    msg_.groups = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentGroups msg_;
};

class Init_AgentGroups_header
{
public:
  Init_AgentGroups_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgentGroups_groups header(::pedsim_msgs::msg::AgentGroups::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AgentGroups_groups(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentGroups msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_msgs::msg::AgentGroups>()
{
  return pedsim_msgs::msg::builder::Init_AgentGroups_header();
}

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__AGENT_GROUPS__BUILDER_HPP_
