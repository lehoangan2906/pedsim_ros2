// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pedsim_srvs:srv/GetAllAgentsState.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_SRVS__SRV__DETAIL__GET_ALL_AGENTS_STATE__BUILDER_HPP_
#define PEDSIM_SRVS__SRV__DETAIL__GET_ALL_AGENTS_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pedsim_srvs/srv/detail/get_all_agents_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pedsim_srvs
{

namespace srv
{

namespace builder
{

class Init_GetAllAgentsState_Request_agent_ids
{
public:
  Init_GetAllAgentsState_Request_agent_ids()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pedsim_srvs::srv::GetAllAgentsState_Request agent_ids(::pedsim_srvs::srv::GetAllAgentsState_Request::_agent_ids_type arg)
  {
    msg_.agent_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_srvs::srv::GetAllAgentsState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_srvs::srv::GetAllAgentsState_Request>()
{
  return pedsim_srvs::srv::builder::Init_GetAllAgentsState_Request_agent_ids();
}

}  // namespace pedsim_srvs


namespace pedsim_srvs
{

namespace srv
{

namespace builder
{

class Init_GetAllAgentsState_Response_agent_states
{
public:
  Init_GetAllAgentsState_Response_agent_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::pedsim_srvs::srv::GetAllAgentsState_Response agent_states(::pedsim_srvs::srv::GetAllAgentsState_Response::_agent_states_type arg)
  {
    msg_.agent_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_srvs::srv::GetAllAgentsState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_srvs::srv::GetAllAgentsState_Response>()
{
  return pedsim_srvs::srv::builder::Init_GetAllAgentsState_Response_agent_states();
}

}  // namespace pedsim_srvs

#endif  // PEDSIM_SRVS__SRV__DETAIL__GET_ALL_AGENTS_STATE__BUILDER_HPP_
