// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pedsim_msgs:msg/AgentGroup.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__AGENT_GROUP__BUILDER_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__AGENT_GROUP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pedsim_msgs/msg/detail/agent_group__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pedsim_msgs
{

namespace msg
{

namespace builder
{

class Init_AgentGroup_center_of_mass
{
public:
  explicit Init_AgentGroup_center_of_mass(::pedsim_msgs::msg::AgentGroup & msg)
  : msg_(msg)
  {}
  ::pedsim_msgs::msg::AgentGroup center_of_mass(::pedsim_msgs::msg::AgentGroup::_center_of_mass_type arg)
  {
    msg_.center_of_mass = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentGroup msg_;
};

class Init_AgentGroup_members
{
public:
  explicit Init_AgentGroup_members(::pedsim_msgs::msg::AgentGroup & msg)
  : msg_(msg)
  {}
  Init_AgentGroup_center_of_mass members(::pedsim_msgs::msg::AgentGroup::_members_type arg)
  {
    msg_.members = std::move(arg);
    return Init_AgentGroup_center_of_mass(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentGroup msg_;
};

class Init_AgentGroup_age
{
public:
  explicit Init_AgentGroup_age(::pedsim_msgs::msg::AgentGroup & msg)
  : msg_(msg)
  {}
  Init_AgentGroup_members age(::pedsim_msgs::msg::AgentGroup::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_AgentGroup_members(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentGroup msg_;
};

class Init_AgentGroup_group_id
{
public:
  explicit Init_AgentGroup_group_id(::pedsim_msgs::msg::AgentGroup & msg)
  : msg_(msg)
  {}
  Init_AgentGroup_age group_id(::pedsim_msgs::msg::AgentGroup::_group_id_type arg)
  {
    msg_.group_id = std::move(arg);
    return Init_AgentGroup_age(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentGroup msg_;
};

class Init_AgentGroup_header
{
public:
  Init_AgentGroup_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgentGroup_group_id header(::pedsim_msgs::msg::AgentGroup::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AgentGroup_group_id(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentGroup msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_msgs::msg::AgentGroup>()
{
  return pedsim_msgs::msg::builder::Init_AgentGroup_header();
}

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__AGENT_GROUP__BUILDER_HPP_
