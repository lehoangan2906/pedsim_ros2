// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pedsim_msgs:msg/AgentStates.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__AGENT_STATES__STRUCT_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__AGENT_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'agent_states'
#include "pedsim_msgs/msg/detail/agent_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pedsim_msgs__msg__AgentStates __attribute__((deprecated))
#else
# define DEPRECATED__pedsim_msgs__msg__AgentStates __declspec(deprecated)
#endif

namespace pedsim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AgentStates_
{
  using Type = AgentStates_<ContainerAllocator>;

  explicit AgentStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit AgentStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _agent_states_type =
    std::vector<pedsim_msgs::msg::AgentState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pedsim_msgs::msg::AgentState_<ContainerAllocator>>>;
  _agent_states_type agent_states;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__agent_states(
    const std::vector<pedsim_msgs::msg::AgentState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pedsim_msgs::msg::AgentState_<ContainerAllocator>>> & _arg)
  {
    this->agent_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pedsim_msgs::msg::AgentStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const pedsim_msgs::msg::AgentStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pedsim_msgs::msg::AgentStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pedsim_msgs::msg::AgentStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pedsim_msgs::msg::AgentStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pedsim_msgs::msg::AgentStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pedsim_msgs::msg::AgentStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pedsim_msgs::msg::AgentStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pedsim_msgs::msg::AgentStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pedsim_msgs::msg::AgentStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pedsim_msgs__msg__AgentStates
    std::shared_ptr<pedsim_msgs::msg::AgentStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pedsim_msgs__msg__AgentStates
    std::shared_ptr<pedsim_msgs::msg::AgentStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AgentStates_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->agent_states != other.agent_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const AgentStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AgentStates_

// alias to use template instance with default allocator
using AgentStates =
  pedsim_msgs::msg::AgentStates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__AGENT_STATES__STRUCT_HPP_
