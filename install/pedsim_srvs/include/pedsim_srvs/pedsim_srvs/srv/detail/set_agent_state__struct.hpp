// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pedsim_srvs:srv/SetAgentState.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_SRVS__SRV__DETAIL__SET_AGENT_STATE__STRUCT_HPP_
#define PEDSIM_SRVS__SRV__DETAIL__SET_AGENT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'state'
#include "pedsim_msgs/msg/detail/agent_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pedsim_srvs__srv__SetAgentState_Request __attribute__((deprecated))
#else
# define DEPRECATED__pedsim_srvs__srv__SetAgentState_Request __declspec(deprecated)
#endif

namespace pedsim_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetAgentState_Request_
{
  using Type = SetAgentState_Request_<ContainerAllocator>;

  explicit SetAgentState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_init)
  {
    (void)_init;
  }

  explicit SetAgentState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    pedsim_srvs::srv::SetAgentState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pedsim_srvs::srv::SetAgentState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pedsim_srvs::srv::SetAgentState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pedsim_srvs::srv::SetAgentState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pedsim_srvs::srv::SetAgentState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pedsim_srvs::srv::SetAgentState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pedsim_srvs::srv::SetAgentState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pedsim_srvs::srv::SetAgentState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pedsim_srvs::srv::SetAgentState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pedsim_srvs::srv::SetAgentState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pedsim_srvs__srv__SetAgentState_Request
    std::shared_ptr<pedsim_srvs::srv::SetAgentState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pedsim_srvs__srv__SetAgentState_Request
    std::shared_ptr<pedsim_srvs::srv::SetAgentState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAgentState_Request_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAgentState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAgentState_Request_

// alias to use template instance with default allocator
using SetAgentState_Request =
  pedsim_srvs::srv::SetAgentState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pedsim_srvs


#ifndef _WIN32
# define DEPRECATED__pedsim_srvs__srv__SetAgentState_Response __attribute__((deprecated))
#else
# define DEPRECATED__pedsim_srvs__srv__SetAgentState_Response __declspec(deprecated)
#endif

namespace pedsim_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetAgentState_Response_
{
  using Type = SetAgentState_Response_<ContainerAllocator>;

  explicit SetAgentState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->finished = false;
    }
  }

  explicit SetAgentState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->finished = false;
    }
  }

  // field types and members
  using _finished_type =
    bool;
  _finished_type finished;

  // setters for named parameter idiom
  Type & set__finished(
    const bool & _arg)
  {
    this->finished = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pedsim_srvs::srv::SetAgentState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pedsim_srvs::srv::SetAgentState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pedsim_srvs::srv::SetAgentState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pedsim_srvs::srv::SetAgentState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pedsim_srvs::srv::SetAgentState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pedsim_srvs::srv::SetAgentState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pedsim_srvs::srv::SetAgentState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pedsim_srvs::srv::SetAgentState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pedsim_srvs::srv::SetAgentState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pedsim_srvs::srv::SetAgentState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pedsim_srvs__srv__SetAgentState_Response
    std::shared_ptr<pedsim_srvs::srv::SetAgentState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pedsim_srvs__srv__SetAgentState_Response
    std::shared_ptr<pedsim_srvs::srv::SetAgentState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetAgentState_Response_ & other) const
  {
    if (this->finished != other.finished) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetAgentState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetAgentState_Response_

// alias to use template instance with default allocator
using SetAgentState_Response =
  pedsim_srvs::srv::SetAgentState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pedsim_srvs

namespace pedsim_srvs
{

namespace srv
{

struct SetAgentState
{
  using Request = pedsim_srvs::srv::SetAgentState_Request;
  using Response = pedsim_srvs::srv::SetAgentState_Response;
};

}  // namespace srv

}  // namespace pedsim_srvs

#endif  // PEDSIM_SRVS__SRV__DETAIL__SET_AGENT_STATE__STRUCT_HPP_
