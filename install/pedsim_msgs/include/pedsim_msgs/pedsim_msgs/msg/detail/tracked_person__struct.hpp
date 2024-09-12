// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pedsim_msgs:msg/TrackedPerson.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__TRACKED_PERSON__STRUCT_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__TRACKED_PERSON__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pedsim_msgs__msg__TrackedPerson __attribute__((deprecated))
#else
# define DEPRECATED__pedsim_msgs__msg__TrackedPerson __declspec(deprecated)
#endif

namespace pedsim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrackedPerson_
{
  using Type = TrackedPerson_<ContainerAllocator>;

  explicit TrackedPerson_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : age(_init),
    pose(_init),
    twist(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->track_id = 0ull;
      this->is_occluded = false;
      this->is_matched = false;
      this->detection_id = 0ull;
    }
  }

  explicit TrackedPerson_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : age(_alloc, _init),
    pose(_alloc, _init),
    twist(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->track_id = 0ull;
      this->is_occluded = false;
      this->is_matched = false;
      this->detection_id = 0ull;
    }
  }

  // field types and members
  using _track_id_type =
    uint64_t;
  _track_id_type track_id;
  using _is_occluded_type =
    bool;
  _is_occluded_type is_occluded;
  using _is_matched_type =
    bool;
  _is_matched_type is_matched;
  using _detection_id_type =
    uint64_t;
  _detection_id_type detection_id;
  using _age_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _age_type age;
  using _pose_type =
    geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>;
  _pose_type pose;
  using _twist_type =
    geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>;
  _twist_type twist;

  // setters for named parameter idiom
  Type & set__track_id(
    const uint64_t & _arg)
  {
    this->track_id = _arg;
    return *this;
  }
  Type & set__is_occluded(
    const bool & _arg)
  {
    this->is_occluded = _arg;
    return *this;
  }
  Type & set__is_matched(
    const bool & _arg)
  {
    this->is_matched = _arg;
    return *this;
  }
  Type & set__detection_id(
    const uint64_t & _arg)
  {
    this->detection_id = _arg;
    return *this;
  }
  Type & set__age(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->age = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__twist(
    const geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> & _arg)
  {
    this->twist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pedsim_msgs::msg::TrackedPerson_<ContainerAllocator> *;
  using ConstRawPtr =
    const pedsim_msgs::msg::TrackedPerson_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pedsim_msgs::msg::TrackedPerson_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pedsim_msgs::msg::TrackedPerson_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pedsim_msgs::msg::TrackedPerson_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pedsim_msgs::msg::TrackedPerson_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pedsim_msgs::msg::TrackedPerson_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pedsim_msgs::msg::TrackedPerson_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pedsim_msgs::msg::TrackedPerson_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pedsim_msgs::msg::TrackedPerson_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pedsim_msgs__msg__TrackedPerson
    std::shared_ptr<pedsim_msgs::msg::TrackedPerson_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pedsim_msgs__msg__TrackedPerson
    std::shared_ptr<pedsim_msgs::msg::TrackedPerson_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrackedPerson_ & other) const
  {
    if (this->track_id != other.track_id) {
      return false;
    }
    if (this->is_occluded != other.is_occluded) {
      return false;
    }
    if (this->is_matched != other.is_matched) {
      return false;
    }
    if (this->detection_id != other.detection_id) {
      return false;
    }
    if (this->age != other.age) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->twist != other.twist) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrackedPerson_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrackedPerson_

// alias to use template instance with default allocator
using TrackedPerson =
  pedsim_msgs::msg::TrackedPerson_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__TRACKED_PERSON__STRUCT_HPP_
