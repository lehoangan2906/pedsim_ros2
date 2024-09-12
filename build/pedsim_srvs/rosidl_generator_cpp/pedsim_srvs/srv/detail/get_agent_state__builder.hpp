// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pedsim_srvs:srv/GetAgentState.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_SRVS__SRV__DETAIL__GET_AGENT_STATE__BUILDER_HPP_
#define PEDSIM_SRVS__SRV__DETAIL__GET_AGENT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pedsim_srvs/srv/detail/get_agent_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pedsim_srvs
{

namespace srv
{

namespace builder
{

class Init_GetAgentState_Request_agent_id
{
public:
  Init_GetAgentState_Request_agent_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pedsim_srvs::srv::GetAgentState_Request agent_id(::pedsim_srvs::srv::GetAgentState_Request::_agent_id_type arg)
  {
    msg_.agent_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_srvs::srv::GetAgentState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_srvs::srv::GetAgentState_Request>()
{
  return pedsim_srvs::srv::builder::Init_GetAgentState_Request_agent_id();
}

}  // namespace pedsim_srvs


namespace pedsim_srvs
{

namespace srv
{

namespace builder
{

class Init_GetAgentState_Response_state
{
public:
  Init_GetAgentState_Response_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pedsim_srvs::srv::GetAgentState_Response state(::pedsim_srvs::srv::GetAgentState_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_srvs::srv::GetAgentState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_srvs::srv::GetAgentState_Response>()
{
  return pedsim_srvs::srv::builder::Init_GetAgentState_Response_state();
}

}  // namespace pedsim_srvs

#endif  // PEDSIM_SRVS__SRV__DETAIL__GET_AGENT_STATE__BUILDER_HPP_
