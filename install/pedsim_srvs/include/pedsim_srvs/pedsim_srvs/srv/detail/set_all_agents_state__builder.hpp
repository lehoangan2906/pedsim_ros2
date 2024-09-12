// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pedsim_srvs:srv/SetAllAgentsState.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_SRVS__SRV__DETAIL__SET_ALL_AGENTS_STATE__BUILDER_HPP_
#define PEDSIM_SRVS__SRV__DETAIL__SET_ALL_AGENTS_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pedsim_srvs/srv/detail/set_all_agents_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pedsim_srvs
{

namespace srv
{

namespace builder
{

class Init_SetAllAgentsState_Request_agent_states
{
public:
  Init_SetAllAgentsState_Request_agent_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pedsim_srvs::srv::SetAllAgentsState_Request agent_states(::pedsim_srvs::srv::SetAllAgentsState_Request::_agent_states_type arg)
  {
    msg_.agent_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_srvs::srv::SetAllAgentsState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_srvs::srv::SetAllAgentsState_Request>()
{
  return pedsim_srvs::srv::builder::Init_SetAllAgentsState_Request_agent_states();
}

}  // namespace pedsim_srvs


namespace pedsim_srvs
{

namespace srv
{

namespace builder
{

class Init_SetAllAgentsState_Response_finished
{
public:
  Init_SetAllAgentsState_Response_finished()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pedsim_srvs::srv::SetAllAgentsState_Response finished(::pedsim_srvs::srv::SetAllAgentsState_Response::_finished_type arg)
  {
    msg_.finished = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_srvs::srv::SetAllAgentsState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_srvs::srv::SetAllAgentsState_Response>()
{
  return pedsim_srvs::srv::builder::Init_SetAllAgentsState_Response_finished();
}

}  // namespace pedsim_srvs

#endif  // PEDSIM_SRVS__SRV__DETAIL__SET_ALL_AGENTS_STATE__BUILDER_HPP_
