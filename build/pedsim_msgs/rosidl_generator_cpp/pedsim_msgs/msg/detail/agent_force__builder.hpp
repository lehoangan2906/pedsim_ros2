// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pedsim_msgs:msg/AgentForce.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__AGENT_FORCE__BUILDER_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__AGENT_FORCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pedsim_msgs/msg/detail/agent_force__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pedsim_msgs
{

namespace msg
{

namespace builder
{

class Init_AgentForce_random_force
{
public:
  explicit Init_AgentForce_random_force(::pedsim_msgs::msg::AgentForce & msg)
  : msg_(msg)
  {}
  ::pedsim_msgs::msg::AgentForce random_force(::pedsim_msgs::msg::AgentForce::_random_force_type arg)
  {
    msg_.random_force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentForce msg_;
};

class Init_AgentForce_group_repulsion_force
{
public:
  explicit Init_AgentForce_group_repulsion_force(::pedsim_msgs::msg::AgentForce & msg)
  : msg_(msg)
  {}
  Init_AgentForce_random_force group_repulsion_force(::pedsim_msgs::msg::AgentForce::_group_repulsion_force_type arg)
  {
    msg_.group_repulsion_force = std::move(arg);
    return Init_AgentForce_random_force(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentForce msg_;
};

class Init_AgentForce_group_gaze_force
{
public:
  explicit Init_AgentForce_group_gaze_force(::pedsim_msgs::msg::AgentForce & msg)
  : msg_(msg)
  {}
  Init_AgentForce_group_repulsion_force group_gaze_force(::pedsim_msgs::msg::AgentForce::_group_gaze_force_type arg)
  {
    msg_.group_gaze_force = std::move(arg);
    return Init_AgentForce_group_repulsion_force(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentForce msg_;
};

class Init_AgentForce_group_coherence_force
{
public:
  explicit Init_AgentForce_group_coherence_force(::pedsim_msgs::msg::AgentForce & msg)
  : msg_(msg)
  {}
  Init_AgentForce_group_gaze_force group_coherence_force(::pedsim_msgs::msg::AgentForce::_group_coherence_force_type arg)
  {
    msg_.group_coherence_force = std::move(arg);
    return Init_AgentForce_group_gaze_force(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentForce msg_;
};

class Init_AgentForce_social_force
{
public:
  explicit Init_AgentForce_social_force(::pedsim_msgs::msg::AgentForce & msg)
  : msg_(msg)
  {}
  Init_AgentForce_group_coherence_force social_force(::pedsim_msgs::msg::AgentForce::_social_force_type arg)
  {
    msg_.social_force = std::move(arg);
    return Init_AgentForce_group_coherence_force(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentForce msg_;
};

class Init_AgentForce_obstacle_force
{
public:
  explicit Init_AgentForce_obstacle_force(::pedsim_msgs::msg::AgentForce & msg)
  : msg_(msg)
  {}
  Init_AgentForce_social_force obstacle_force(::pedsim_msgs::msg::AgentForce::_obstacle_force_type arg)
  {
    msg_.obstacle_force = std::move(arg);
    return Init_AgentForce_social_force(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentForce msg_;
};

class Init_AgentForce_desired_force
{
public:
  Init_AgentForce_desired_force()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgentForce_obstacle_force desired_force(::pedsim_msgs::msg::AgentForce::_desired_force_type arg)
  {
    msg_.desired_force = std::move(arg);
    return Init_AgentForce_obstacle_force(msg_);
  }

private:
  ::pedsim_msgs::msg::AgentForce msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_msgs::msg::AgentForce>()
{
  return pedsim_msgs::msg::builder::Init_AgentForce_desired_force();
}

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__AGENT_FORCE__BUILDER_HPP_
