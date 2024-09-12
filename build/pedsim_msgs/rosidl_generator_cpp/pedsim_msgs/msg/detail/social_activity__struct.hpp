// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pedsim_msgs:msg/SocialActivity.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITY__STRUCT_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pedsim_msgs__msg__SocialActivity __attribute__((deprecated))
#else
# define DEPRECATED__pedsim_msgs__msg__SocialActivity __declspec(deprecated)
#endif

namespace pedsim_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SocialActivity_
{
  using Type = SocialActivity_<ContainerAllocator>;

  explicit SocialActivity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->confidence = 0.0f;
    }
  }

  explicit SocialActivity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _track_ids_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _track_ids_type track_ids;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__track_ids(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->track_ids = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE_SHOPPING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE_STANDING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE_INDIVIDUAL_MOVING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE_WAITING_IN_QUEUE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE_LOOKING_AT_INFORMATION_SCREEN;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE_LOOKING_AT_KIOSK;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE_GROUP_ASSEMBLING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE_GROUP_MOVING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE_FLOW_WITH_ROBOT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE_ANTIFLOW_AGAINST_ROBOT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TYPE_WAITING_FOR_OTHERS;

  // pointer types
  using RawPtr =
    pedsim_msgs::msg::SocialActivity_<ContainerAllocator> *;
  using ConstRawPtr =
    const pedsim_msgs::msg::SocialActivity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pedsim_msgs::msg::SocialActivity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pedsim_msgs::msg::SocialActivity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pedsim_msgs::msg::SocialActivity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pedsim_msgs::msg::SocialActivity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pedsim_msgs::msg::SocialActivity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pedsim_msgs::msg::SocialActivity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pedsim_msgs::msg::SocialActivity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pedsim_msgs::msg::SocialActivity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pedsim_msgs__msg__SocialActivity
    std::shared_ptr<pedsim_msgs::msg::SocialActivity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pedsim_msgs__msg__SocialActivity
    std::shared_ptr<pedsim_msgs::msg::SocialActivity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SocialActivity_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->track_ids != other.track_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const SocialActivity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SocialActivity_

// alias to use template instance with default allocator
using SocialActivity =
  pedsim_msgs::msg::SocialActivity_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
SocialActivity_<ContainerAllocator>::TYPE_SHOPPING = "shopping";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
SocialActivity_<ContainerAllocator>::TYPE_STANDING = "standing";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
SocialActivity_<ContainerAllocator>::TYPE_INDIVIDUAL_MOVING = "individual_moving";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
SocialActivity_<ContainerAllocator>::TYPE_WAITING_IN_QUEUE = "waiting_in_queue";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
SocialActivity_<ContainerAllocator>::TYPE_LOOKING_AT_INFORMATION_SCREEN = "looking_at_information_screen";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
SocialActivity_<ContainerAllocator>::TYPE_LOOKING_AT_KIOSK = "looking_at_kiosk";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
SocialActivity_<ContainerAllocator>::TYPE_GROUP_ASSEMBLING = "group_assembling";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
SocialActivity_<ContainerAllocator>::TYPE_GROUP_MOVING = "group_moving";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
SocialActivity_<ContainerAllocator>::TYPE_FLOW_WITH_ROBOT = "flow";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
SocialActivity_<ContainerAllocator>::TYPE_ANTIFLOW_AGAINST_ROBOT = "antiflow";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
SocialActivity_<ContainerAllocator>::TYPE_WAITING_FOR_OTHERS = "waiting_for_others";

}  // namespace msg

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITY__STRUCT_HPP_
