// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pedsim_srvs:srv/GetAllAgentsState.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_SRVS__SRV__DETAIL__GET_ALL_AGENTS_STATE__STRUCT_HPP_
#define PEDSIM_SRVS__SRV__DETAIL__GET_ALL_AGENTS_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pedsim_srvs__srv__GetAllAgentsState_Request __attribute__((deprecated))
#else
# define DEPRECATED__pedsim_srvs__srv__GetAllAgentsState_Request __declspec(deprecated)
#endif

namespace pedsim_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAllAgentsState_Request_
{
  using Type = GetAllAgentsState_Request_<ContainerAllocator>;

  explicit GetAllAgentsState_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetAllAgentsState_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _agent_ids_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _agent_ids_type agent_ids;

  // setters for named parameter idiom
  Type & set__agent_ids(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->agent_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pedsim_srvs::srv::GetAllAgentsState_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const pedsim_srvs::srv::GetAllAgentsState_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pedsim_srvs::srv::GetAllAgentsState_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pedsim_srvs::srv::GetAllAgentsState_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pedsim_srvs::srv::GetAllAgentsState_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pedsim_srvs::srv::GetAllAgentsState_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pedsim_srvs::srv::GetAllAgentsState_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pedsim_srvs::srv::GetAllAgentsState_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pedsim_srvs::srv::GetAllAgentsState_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pedsim_srvs::srv::GetAllAgentsState_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pedsim_srvs__srv__GetAllAgentsState_Request
    std::shared_ptr<pedsim_srvs::srv::GetAllAgentsState_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pedsim_srvs__srv__GetAllAgentsState_Request
    std::shared_ptr<pedsim_srvs::srv::GetAllAgentsState_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAllAgentsState_Request_ & other) const
  {
    if (this->agent_ids != other.agent_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAllAgentsState_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAllAgentsState_Request_

// alias to use template instance with default allocator
using GetAllAgentsState_Request =
  pedsim_srvs::srv::GetAllAgentsState_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pedsim_srvs


// Include directives for member types
// Member 'agent_states'
#include "pedsim_msgs/msg/detail/agent_states__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pedsim_srvs__srv__GetAllAgentsState_Response __attribute__((deprecated))
#else
# define DEPRECATED__pedsim_srvs__srv__GetAllAgentsState_Response __declspec(deprecated)
#endif

namespace pedsim_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAllAgentsState_Response_
{
  using Type = GetAllAgentsState_Response_<ContainerAllocator>;

  explicit GetAllAgentsState_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : agent_states(_init)
  {
    (void)_init;
  }

  explicit GetAllAgentsState_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : agent_states(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _agent_states_type =
    pedsim_msgs::msg::AgentStates_<ContainerAllocator>;
  _agent_states_type agent_states;

  // setters for named parameter idiom
  Type & set__agent_states(
    const pedsim_msgs::msg::AgentStates_<ContainerAllocator> & _arg)
  {
    this->agent_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pedsim_srvs::srv::GetAllAgentsState_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const pedsim_srvs::srv::GetAllAgentsState_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pedsim_srvs::srv::GetAllAgentsState_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pedsim_srvs::srv::GetAllAgentsState_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pedsim_srvs::srv::GetAllAgentsState_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pedsim_srvs::srv::GetAllAgentsState_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pedsim_srvs::srv::GetAllAgentsState_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pedsim_srvs::srv::GetAllAgentsState_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pedsim_srvs::srv::GetAllAgentsState_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pedsim_srvs::srv::GetAllAgentsState_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pedsim_srvs__srv__GetAllAgentsState_Response
    std::shared_ptr<pedsim_srvs::srv::GetAllAgentsState_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pedsim_srvs__srv__GetAllAgentsState_Response
    std::shared_ptr<pedsim_srvs::srv::GetAllAgentsState_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAllAgentsState_Response_ & other) const
  {
    if (this->agent_states != other.agent_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAllAgentsState_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAllAgentsState_Response_

// alias to use template instance with default allocator
using GetAllAgentsState_Response =
  pedsim_srvs::srv::GetAllAgentsState_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace pedsim_srvs

namespace pedsim_srvs
{

namespace srv
{

struct GetAllAgentsState
{
  using Request = pedsim_srvs::srv::GetAllAgentsState_Request;
  using Response = pedsim_srvs::srv::GetAllAgentsState_Response;
};

}  // namespace srv

}  // namespace pedsim_srvs

#endif  // PEDSIM_SRVS__SRV__DETAIL__GET_ALL_AGENTS_STATE__STRUCT_HPP_
