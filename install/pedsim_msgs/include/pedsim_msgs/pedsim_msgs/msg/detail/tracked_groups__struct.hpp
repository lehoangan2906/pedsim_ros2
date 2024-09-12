// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pedsim_msgs:msg/TrackedGroups.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUPS__STRUCT_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUPS__STRUCT_HPP_

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
// Member 'groups'
#include "pedsim_msgs/msg/detail/tracked_group__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pedsim_msgs__msg__TrackedGroups __attribute__((deprecated))
#else
# define DEPRECATED__pedsim_msgs__msg__TrackedGroups __declspec(deprecated)
#endif

namespace pedsim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedGroups_
{
  using Type = TrackedGroups_<ContainerAllocator>;

  explicit TrackedGroups_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TrackedGroups_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _groups_type =
    std::vector<pedsim_msgs::msg::TrackedGroup_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pedsim_msgs::msg::TrackedGroup_<ContainerAllocator>>>;
  _groups_type groups;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__groups(
    const std::vector<pedsim_msgs::msg::TrackedGroup_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<pedsim_msgs::msg::TrackedGroup_<ContainerAllocator>>> & _arg)
  {
    this->groups = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pedsim_msgs::msg::TrackedGroups_<ContainerAllocator> *;
  using ConstRawPtr =
    const pedsim_msgs::msg::TrackedGroups_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pedsim_msgs::msg::TrackedGroups_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pedsim_msgs::msg::TrackedGroups_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pedsim_msgs::msg::TrackedGroups_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pedsim_msgs::msg::TrackedGroups_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pedsim_msgs::msg::TrackedGroups_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pedsim_msgs::msg::TrackedGroups_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pedsim_msgs::msg::TrackedGroups_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pedsim_msgs::msg::TrackedGroups_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pedsim_msgs__msg__TrackedGroups
    std::shared_ptr<pedsim_msgs::msg::TrackedGroups_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pedsim_msgs__msg__TrackedGroups
    std::shared_ptr<pedsim_msgs::msg::TrackedGroups_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedGroups_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->groups != other.groups) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedGroups_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedGroups_

// alias to use template instance with default allocator
using TrackedGroups =
  pedsim_msgs::msg::TrackedGroups_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUPS__STRUCT_HPP_
