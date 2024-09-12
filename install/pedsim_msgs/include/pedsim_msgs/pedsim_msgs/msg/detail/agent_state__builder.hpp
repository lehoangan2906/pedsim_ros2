// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pedsim_msgs:msg/AgentState.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__AGENT_STATE__BUILDER_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__AGENT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pedsim_msgs/msg/detail/agent_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pedsim_msgs
{

namespace msg
{

namespace builder
{

class Init_AgentState_forces
{
public:
  explicit Init_AgentState_forces(::pedsim_msgs::msg::AgentState & msg)
  : msg_(msg)
  {}
  ::pedsim_msgs::msg::AgentState forces(::pedsim_msgs::msg::AgentState::_forces_type arg)
  {
    msg_.forces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentState msg_;
};

class Init_AgentState_twist
{
public:
  explicit Init_AgentState_twist(::pedsim_msgs::msg::AgentState & msg)
  : msg_(msg)
  {}
  Init_AgentState_forces twist(::pedsim_msgs::msg::AgentState::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_AgentState_forces(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentState msg_;
};

class Init_AgentState_pose
{
public:
  explicit Init_AgentState_pose(::pedsim_msgs::msg::AgentState & msg)
  : msg_(msg)
  {}
  Init_AgentState_twist pose(::pedsim_msgs::msg::AgentState::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_AgentState_twist(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentState msg_;
};

class Init_AgentState_social_state
{
public:
  explicit Init_AgentState_social_state(::pedsim_msgs::msg::AgentState & msg)
  : msg_(msg)
  {}
  Init_AgentState_pose social_state(::pedsim_msgs::msg::AgentState::_social_state_type arg)
  {
    msg_.social_state = std::move(arg);
    return Init_AgentState_pose(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentState msg_;
};

class Init_AgentState_type
{
public:
  explicit Init_AgentState_type(::pedsim_msgs::msg::AgentState & msg)
  : msg_(msg)
  {}
  Init_AgentState_social_state type(::pedsim_msgs::msg::AgentState::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_AgentState_social_state(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentState msg_;
};

class Init_AgentState_id
{
public:
  explicit Init_AgentState_id(::pedsim_msgs::msg::AgentState & msg)
  : msg_(msg)
  {}
  Init_AgentState_type id(::pedsim_msgs::msg::AgentState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_AgentState_type(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentState msg_;
};

class Init_AgentState_header
{
public:
  Init_AgentState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgentState_id header(::pedsim_msgs::msg::AgentState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AgentState_id(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_msgs::msg::AgentState>()
{
  return pedsim_msgs::msg::builder::Init_AgentState_header();
}

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__AGENT_STATE__BUILDER_HPP_
