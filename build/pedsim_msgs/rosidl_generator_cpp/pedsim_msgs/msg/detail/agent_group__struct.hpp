// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pedsim_msgs:msg/AgentGroup.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__AGENT_GROUP__STRUCT_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__AGENT_GROUP__STRUCT_HPP_

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
// Member 'center_of_mass'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pedsim_msgs__msg__AgentGroup __attribute__((deprecated))
#else
# define DEPRECATED__pedsim_msgs__msg__AgentGroup __declspec(deprecated)
#endif

namespace pedsim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AgentGroup_
{
  using Type = AgentGroup_<ContainerAllocator>;

  explicit AgentGroup_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    center_of_mass(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_id = 0;
      this->age = 0.0;
    }
  }

  explicit AgentGroup_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    center_of_mass(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_id = 0;
      this->age = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _group_id_type =
    uint16_t;
  _group_id_type group_id;
  using _age_type =
    double;
  _age_type age;
  using _members_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _members_type members;
  using _center_of_mass_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _center_of_mass_type center_of_mass;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__group_id(
    const uint16_t & _arg)
  {
    this->group_id = _arg;
    return *this;
  }
  Type & set__age(
    const double & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__members(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->members = _arg;
    return *this;
  }
  Type & set__center_of_mass(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->center_of_mass = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pedsim_msgs::msg::AgentGroup_<ContainerAllocator> *;
  using ConstRawPtr =
    const pedsim_msgs::msg::AgentGroup_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pedsim_msgs::msg::AgentGroup_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pedsim_msgs::msg::AgentGroup_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pedsim_msgs::msg::AgentGroup_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pedsim_msgs::msg::AgentGroup_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pedsim_msgs::msg::AgentGroup_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pedsim_msgs::msg::AgentGroup_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pedsim_msgs::msg::AgentGroup_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pedsim_msgs::msg::AgentGroup_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pedsim_msgs__msg__AgentGroup
    std::shared_ptr<pedsim_msgs::msg::AgentGroup_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pedsim_msgs__msg__AgentGroup
    std::shared_ptr<pedsim_msgs::msg::AgentGroup_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AgentGroup_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->group_id != other.group_id) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->members != other.members) {
      return false;
    }
    if (this->center_of_mass != other.center_of_mass) {
      return false;
    }
    return true;
  }
  bool operator!=(const AgentGroup_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AgentGroup_

// alias to use template instance with default allocator
using AgentGroup =
  pedsim_msgs::msg::AgentGroup_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__AGENT_GROUP__STRUCT_HPP_
