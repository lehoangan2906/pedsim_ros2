// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pedsim_msgs:msg/AgentForce.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__AGENT_FORCE__STRUCT_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__AGENT_FORCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'desired_force'
// Member 'obstacle_force'
// Member 'social_force'
// Member 'group_coherence_force'
// Member 'group_gaze_force'
// Member 'group_repulsion_force'
// Member 'random_force'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pedsim_msgs__msg__AgentForce __attribute__((deprecated))
#else
# define DEPRECATED__pedsim_msgs__msg__AgentForce __declspec(deprecated)
#endif

namespace pedsim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AgentForce_
{
  using Type = AgentForce_<ContainerAllocator>;

  explicit AgentForce_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : desired_force(_init),
    obstacle_force(_init),
    social_force(_init),
    group_coherence_force(_init),
    group_gaze_force(_init),
    group_repulsion_force(_init),
    random_force(_init)
  {
    (void)_init;
  }

  explicit AgentForce_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : desired_force(_alloc, _init),
    obstacle_force(_alloc, _init),
    social_force(_alloc, _init),
    group_coherence_force(_alloc, _init),
    group_gaze_force(_alloc, _init),
    group_repulsion_force(_alloc, _init),
    random_force(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _desired_force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _desired_force_type desired_force;
  using _obstacle_force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _obstacle_force_type obstacle_force;
  using _social_force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _social_force_type social_force;
  using _group_coherence_force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _group_coherence_force_type group_coherence_force;
  using _group_gaze_force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _group_gaze_force_type group_gaze_force;
  using _group_repulsion_force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _group_repulsion_force_type group_repulsion_force;
  using _random_force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _random_force_type random_force;

  // setters for named parameter idiom
  Type & set__desired_force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->desired_force = _arg;
    return *this;
  }
  Type & set__obstacle_force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->obstacle_force = _arg;
    return *this;
  }
  Type & set__social_force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->social_force = _arg;
    return *this;
  }
  Type & set__group_coherence_force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->group_coherence_force = _arg;
    return *this;
  }
  Type & set__group_gaze_force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->group_gaze_force = _arg;
    return *this;
  }
  Type & set__group_repulsion_force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->group_repulsion_force = _arg;
    return *this;
  }
  Type & set__random_force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->random_force = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pedsim_msgs::msg::AgentForce_<ContainerAllocator> *;
  using ConstRawPtr =
    const pedsim_msgs::msg::AgentForce_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pedsim_msgs::msg::AgentForce_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pedsim_msgs::msg::AgentForce_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pedsim_msgs::msg::AgentForce_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pedsim_msgs::msg::AgentForce_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pedsim_msgs::msg::AgentForce_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pedsim_msgs::msg::AgentForce_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pedsim_msgs::msg::AgentForce_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pedsim_msgs::msg::AgentForce_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pedsim_msgs__msg__AgentForce
    std::shared_ptr<pedsim_msgs::msg::AgentForce_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pedsim_msgs__msg__AgentForce
    std::shared_ptr<pedsim_msgs::msg::AgentForce_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AgentForce_ & other) const
  {
    if (this->desired_force != other.desired_force) {
      return false;
    }
    if (this->obstacle_force != other.obstacle_force) {
      return false;
    }
    if (this->social_force != other.social_force) {
      return false;
    }
    if (this->group_coherence_force != other.group_coherence_force) {
      return false;
    }
    if (this->group_gaze_force != other.group_gaze_force) {
      return false;
    }
    if (this->group_repulsion_force != other.group_repulsion_force) {
      return false;
    }
    if (this->random_force != other.random_force) {
      return false;
    }
    return true;
  }
  bool operator!=(const AgentForce_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AgentForce_

// alias to use template instance with default allocator
using AgentForce =
  pedsim_msgs::msg::AgentForce_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__AGENT_FORCE__STRUCT_HPP_
