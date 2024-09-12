// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pedsim_msgs:msg/SocialRelation.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__SOCIAL_RELATION__STRUCT_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__SOCIAL_RELATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pedsim_msgs__msg__SocialRelation __attribute__((deprecated))
#else
# define DEPRECATED__pedsim_msgs__msg__SocialRelation __declspec(deprecated)
#endif

namespace pedsim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SocialRelation_
{
  using Type = SocialRelation_<ContainerAllocator>;

  explicit SocialRelation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->strength = 0.0f;
      this->track1_id = 0ul;
      this->track2_id = 0ul;
    }
  }

  explicit SocialRelation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->strength = 0.0f;
      this->track1_id = 0ul;
      this->track2_id = 0ul;
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _strength_type =
    float;
  _strength_type strength;
  using _track1_id_type =
    uint32_t;
  _track1_id_type track1_id;
  using _track2_id_type =
    uint32_t;
  _track2_id_type track2_id;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__strength(
    const float & _arg)
  {
    this->strength = _arg;
    return *this;
  }
  Type & set__track1_id(
    const uint32_t & _arg)
  {
    this->track1_id = _arg;
    return *this;
  }
  Type & set__track2_id(
    const uint32_t & _arg)
  {
    this->track2_id = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE_SPATIAL;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE_ROMANTIC;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE_PARENT_CHILD;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE_FRIENDSHIP;

  // pointer types
  using RawPtr =
    pedsim_msgs::msg::SocialRelation_<ContainerAllocator> *;
  using ConstRawPtr =
    const pedsim_msgs::msg::SocialRelation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pedsim_msgs::msg::SocialRelation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pedsim_msgs::msg::SocialRelation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pedsim_msgs::msg::SocialRelation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pedsim_msgs::msg::SocialRelation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pedsim_msgs::msg::SocialRelation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pedsim_msgs::msg::SocialRelation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pedsim_msgs::msg::SocialRelation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pedsim_msgs::msg::SocialRelation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pedsim_msgs__msg__SocialRelation
    std::shared_ptr<pedsim_msgs::msg::SocialRelation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pedsim_msgs__msg__SocialRelation
    std::shared_ptr<pedsim_msgs::msg::SocialRelation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SocialRelation_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->strength != other.strength) {
      return false;
    }
    if (this->track1_id != other.track1_id) {
      return false;
    }
    if (this->track2_id != other.track2_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SocialRelation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SocialRelation_

// alias to use template instance with default allocator
using SocialRelation =
  pedsim_msgs::msg::SocialRelation_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
SocialRelation_<ContainerAllocator>::TYPE_SPATIAL = "spatial";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
SocialRelation_<ContainerAllocator>::TYPE_ROMANTIC = "romantic";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
SocialRelation_<ContainerAllocator>::TYPE_PARENT_CHILD = "parent_child";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
SocialRelation_<ContainerAllocator>::TYPE_FRIENDSHIP = "friendship";

}  // namespace msg

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__SOCIAL_RELATION__STRUCT_HPP_
