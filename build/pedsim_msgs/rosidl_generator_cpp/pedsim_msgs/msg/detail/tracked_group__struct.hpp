// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pedsim_msgs:msg/TrackedGroup.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUP__STRUCT_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'age'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"
// Member 'center_of_gravity'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pedsim_msgs__msg__TrackedGroup __attribute__((deprecated))
#else
# define DEPRECATED__pedsim_msgs__msg__TrackedGroup __declspec(deprecated)
#endif

namespace pedsim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedGroup_
{
  using Type = TrackedGroup_<ContainerAllocator>;

  explicit TrackedGroup_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : age(_init),
    center_of_gravity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_id = 0ull;
    }
  }

  explicit TrackedGroup_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : age(_alloc, _init),
    center_of_gravity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_id = 0ull;
    }
  }

  // field types and members
  using _group_id_type =
    uint64_t;
  _group_id_type group_id;
  using _age_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _age_type age;
  using _center_of_gravity_type =
    geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>;
  _center_of_gravity_type center_of_gravity;
  using _track_ids_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _track_ids_type track_ids;

  // setters for named parameter idiom
  Type & set__group_id(
    const uint64_t & _arg)
  {
    this->group_id = _arg;
    return *this;
  }
  Type & set__age(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__center_of_gravity(
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> & _arg)
  {
    this->center_of_gravity = _arg;
    return *this;
  }
  Type & set__track_ids(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->track_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pedsim_msgs::msg::TrackedGroup_<ContainerAllocator> *;
  using ConstRawPtr =
    const pedsim_msgs::msg::TrackedGroup_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pedsim_msgs::msg::TrackedGroup_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pedsim_msgs::msg::TrackedGroup_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pedsim_msgs::msg::TrackedGroup_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pedsim_msgs::msg::TrackedGroup_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pedsim_msgs::msg::TrackedGroup_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pedsim_msgs::msg::TrackedGroup_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pedsim_msgs::msg::TrackedGroup_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pedsim_msgs::msg::TrackedGroup_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pedsim_msgs__msg__TrackedGroup
    std::shared_ptr<pedsim_msgs::msg::TrackedGroup_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pedsim_msgs__msg__TrackedGroup
    std::shared_ptr<pedsim_msgs::msg::TrackedGroup_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedGroup_ & other) const
  {
    if (this->group_id != other.group_id) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->center_of_gravity != other.center_of_gravity) {
      return false;
    }
    if (this->track_ids != other.track_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedGroup_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedGroup_

// alias to use template instance with default allocator
using TrackedGroup =
  pedsim_msgs::msg::TrackedGroup_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUP__STRUCT_HPP_
