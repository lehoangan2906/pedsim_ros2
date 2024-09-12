// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pedsim_srvs:srv/GetAgentState.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_SRVS__SRV__DETAIL__GET_AGENT_STATE__STRUCT_HPP_
#define PEDSIM_SRVS__SRV__DETAIL__GET_AGENT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pedsim_srvs__srv__GetAgentState_Request __attribute__((deprecated))
#else
# define DEPRECATED__pedsim_srvs__srv__GetAgentState_Request __declspec(deprecated)
#endif

namespace pedsim_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAgentState_Request_
{
  using Type = GetAgentState_Request_<ContainerAllocator>;

  explicit GetAgentState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->agent_id = 0;
    }
  }

  explicit GetAgentState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->agent_id = 0;
    }
  }

  // field types and members
  using _agent_id_type =
    int16_t;
  _agent_id_type agent_id;

  // setters for named parameter idiom
  Type & set__agent_id(
    const int16_t & _arg)
  {
    this->agent_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pedsim_srvs::srv::GetAgentState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pedsim_srvs::srv::GetAgentState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pedsim_srvs::srv::GetAgentState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pedsim_srvs::srv::GetAgentState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pedsim_srvs::srv::GetAgentState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pedsim_srvs::srv::GetAgentState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pedsim_srvs::srv::GetAgentState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pedsim_srvs::srv::GetAgentState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pedsim_srvs::srv::GetAgentState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pedsim_srvs::srv::GetAgentState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pedsim_srvs__srv__GetAgentState_Request
    std::shared_ptr<pedsim_srvs::srv::GetAgentState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pedsim_srvs__srv__GetAgentState_Request
    std::shared_ptr<pedsim_srvs::srv::GetAgentState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAgentState_Request_ & other) const
  {
    if (this->agent_id != other.agent_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAgentState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAgentState_Request_

// alias to use template instance with default allocator
using GetAgentState_Request =
  pedsim_srvs::srv::GetAgentState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pedsim_srvs


// Include directives for member types
// Member 'state'
#include "pedsim_msgs/msg/detail/agent_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pedsim_srvs__srv__GetAgentState_Response __attribute__((deprecated))
#else
# define DEPRECATED__pedsim_srvs__srv__GetAgentState_Response __declspec(deprecated)
#endif

namespace pedsim_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAgentState_Response_
{
  using Type = GetAgentState_Response_<ContainerAllocator>;

  explicit GetAgentState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_init)
  {
    (void)_init;
  }

  explicit GetAgentState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _state_type =
    pedsim_msgs::msg::AgentState_<ContainerAllocator>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__state(
    const pedsim_msgs::msg::AgentState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pedsim_srvs::srv::GetAgentState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pedsim_srvs::srv::GetAgentState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pedsim_srvs::srv::GetAgentState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pedsim_srvs::srv::GetAgentState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pedsim_srvs::srv::GetAgentState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pedsim_srvs::srv::GetAgentState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pedsim_srvs::srv::GetAgentState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pedsim_srvs::srv::GetAgentState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pedsim_srvs::srv::GetAgentState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pedsim_srvs::srv::GetAgentState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pedsim_srvs__srv__GetAgentState_Response
    std::shared_ptr<pedsim_srvs::srv::GetAgentState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pedsim_srvs__srv__GetAgentState_Response
    std::shared_ptr<pedsim_srvs::srv::GetAgentState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAgentState_Response_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAgentState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAgentState_Response_

// alias to use template instance with default allocator
using GetAgentState_Response =
  pedsim_srvs::srv::GetAgentState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pedsim_srvs

namespace pedsim_srvs
{

namespace srv
{

struct GetAgentState
{
  using Request = pedsim_srvs::srv::GetAgentState_Request;
  using Response = pedsim_srvs::srv::GetAgentState_Response;
};

}  // namespace srv

}  // namespace pedsim_srvs

#endif  // PEDSIM_SRVS__SRV__DETAIL__GET_AGENT_STATE__STRUCT_HPP_
