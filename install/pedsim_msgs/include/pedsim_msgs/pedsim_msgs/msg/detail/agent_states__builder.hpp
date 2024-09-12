// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pedsim_msgs:msg/AgentStates.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__AGENT_STATES__BUILDER_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__AGENT_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pedsim_msgs/msg/detail/agent_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pedsim_msgs
{

namespace msg
{

namespace builder
{

class Init_AgentStates_agent_states
{
public:
  explicit Init_AgentStates_agent_states(::pedsim_msgs::msg::AgentStates & msg)
  : msg_(msg)
  {}
  ::pedsim_msgs::msg::AgentStates agent_states(::pedsim_msgs::msg::AgentStates::_agent_states_type arg)
  {
    msg_.agent_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentStates msg_;
};

class Init_AgentStates_header
{
public:
  Init_AgentStates_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgentStates_agent_states header(::pedsim_msgs::msg::AgentStates::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AgentStates_agent_states(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_msgs::msg::AgentStates>()
{
  return pedsim_msgs::msg::builder::Init_AgentStates_header();
}

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__AGENT_STATES__BUILDER_HPP_
