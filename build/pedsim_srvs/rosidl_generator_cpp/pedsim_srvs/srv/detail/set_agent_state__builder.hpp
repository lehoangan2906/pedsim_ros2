// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pedsim_srvs:srv/SetAgentState.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_SRVS__SRV__DETAIL__SET_AGENT_STATE__BUILDER_HPP_
#define PEDSIM_SRVS__SRV__DETAIL__SET_AGENT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pedsim_srvs/srv/detail/set_agent_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pedsim_srvs
{

namespace srv
{

namespace builder
{

class Init_SetAgentState_Request_state
{
public:
  Init_SetAgentState_Request_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pedsim_srvs::srv::SetAgentState_Request state(::pedsim_srvs::srv::SetAgentState_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_srvs::srv::SetAgentState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_srvs::srv::SetAgentState_Request>()
{
  return pedsim_srvs::srv::builder::Init_SetAgentState_Request_state();
}

}  // namespace pedsim_srvs


namespace pedsim_srvs
{

namespace srv
{

namespace builder
{

class Init_SetAgentState_Response_finished
{
public:
  Init_SetAgentState_Response_finished()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pedsim_srvs::srv::SetAgentState_Response finished(::pedsim_srvs::srv::SetAgentState_Response::_finished_type arg)
  {
    msg_.finished = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_srvs::srv::SetAgentState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_srvs::srv::SetAgentState_Response>()
{
  return pedsim_srvs::srv::builder::Init_SetAgentState_Response_finished();
}

}  // namespace pedsim_srvs

#endif  // PEDSIM_SRVS__SRV__DETAIL__SET_AGENT_STATE__BUILDER_HPP_
