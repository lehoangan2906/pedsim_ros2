// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pedsim_msgs:msg/LineObstacle.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__LINE_OBSTACLE__STRUCT_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__LINE_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'start'
// Member 'end'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pedsim_msgs__msg__LineObstacle __attribute__((deprecated))
#else
# define DEPRECATED__pedsim_msgs__msg__LineObstacle __declspec(deprecated)
#endif

namespace pedsim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LineObstacle_
{
  using Type = LineObstacle_<ContainerAllocator>;

  explicit LineObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_init),
    end(_init)
  {
    (void)_init;
  }

  explicit LineObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_alloc, _init),
    end(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _start_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _start_type start;
  using _end_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _end_type end;

  // setters for named parameter idiom
  Type & set__start(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__end(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->end = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pedsim_msgs::msg::LineObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const pedsim_msgs::msg::LineObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pedsim_msgs::msg::LineObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pedsim_msgs::msg::LineObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pedsim_msgs::msg::LineObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pedsim_msgs::msg::LineObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pedsim_msgs::msg::LineObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pedsim_msgs::msg::LineObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pedsim_msgs::msg::LineObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pedsim_msgs::msg::LineObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pedsim_msgs__msg__LineObstacle
    std::shared_ptr<pedsim_msgs::msg::LineObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pedsim_msgs__msg__LineObstacle
    std::shared_ptr<pedsim_msgs::msg::LineObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LineObstacle_ & other) const
  {
    if (this->start != other.start) {
      return false;
    }
    if (this->end != other.end) {
      return false;
    }
    return true;
  }
  bool operator!=(const LineObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LineObstacle_

// alias to use template instance with default allocator
using LineObstacle =
  pedsim_msgs::msg::LineObstacle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__LINE_OBSTACLE__STRUCT_HPP_
