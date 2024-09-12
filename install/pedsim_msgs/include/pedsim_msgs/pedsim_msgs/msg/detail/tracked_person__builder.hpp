// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pedsim_msgs:msg/TrackedPerson.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__TRACKED_PERSON__BUILDER_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__TRACKED_PERSON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pedsim_msgs/msg/detail/tracked_person__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pedsim_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedPerson_twist
{
public:
  explicit Init_TrackedPerson_twist(::pedsim_msgs::msg::TrackedPerson & msg)
  : msg_(msg)
  {}
  ::pedsim_msgs::msg::TrackedPerson twist(::pedsim_msgs::msg::TrackedPerson::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_msgs::msg::TrackedPerson msg_;
};

class Init_TrackedPerson_pose
{
public:
  explicit Init_TrackedPerson_pose(::pedsim_msgs::msg::TrackedPerson & msg)
  : msg_(msg)
  {}
  Init_TrackedPerson_twist pose(::pedsim_msgs::msg::TrackedPerson::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_TrackedPerson_twist(msg_);
  }

private:
  ::pedsim_msgs::msg::TrackedPerson msg_;
};

class Init_TrackedPerson_age
{
public:
  explicit Init_TrackedPerson_age(::pedsim_msgs::msg::TrackedPerson & msg)
  : msg_(msg)
  {}
  Init_TrackedPerson_pose age(::pedsim_msgs::msg::TrackedPerson::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_TrackedPerson_pose(msg_);
  }

private:
  ::pedsim_msgs::msg::TrackedPerson msg_;
};

class Init_TrackedPerson_detection_id
{
public:
  explicit Init_TrackedPerson_detection_id(::pedsim_msgs::msg::TrackedPerson & msg)
  : msg_(msg)
  {}
  Init_TrackedPerson_age detection_id(::pedsim_msgs::msg::TrackedPerson::_detection_id_type arg)
  {
    msg_.detection_id = std::move(arg);
    return Init_TrackedPerson_age(msg_);
  }

private:
  ::pedsim_msgs::msg::TrackedPerson msg_;
};

class Init_TrackedPerson_is_matched
{
public:
  explicit Init_TrackedPerson_is_matched(::pedsim_msgs::msg::TrackedPerson & msg)
  : msg_(msg)
  {}
  Init_TrackedPerson_detection_id is_matched(::pedsim_msgs::msg::TrackedPerson::_is_matched_type arg)
  {
    msg_.is_matched = std::move(arg);
    return Init_TrackedPerson_detection_id(msg_);
  }

private:
  ::pedsim_msgs::msg::TrackedPerson msg_;
};

class Init_TrackedPerson_is_occluded
{
public:
  explicit Init_TrackedPerson_is_occluded(::pedsim_msgs::msg::TrackedPerson & msg)
  : msg_(msg)
  {}
  Init_TrackedPerson_is_matched is_occluded(::pedsim_msgs::msg::TrackedPerson::_is_occluded_type arg)
  {
    msg_.is_occluded = std::move(arg);
    return Init_TrackedPerson_is_matched(msg_);
  }

private:
  ::pedsim_msgs::msg::TrackedPerson msg_;
};

class Init_TrackedPerson_track_id
{
public:
  Init_TrackedPerson_track_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedPerson_is_occluded track_id(::pedsim_msgs::msg::TrackedPerson::_track_id_type arg)
  {
    msg_.track_id = std::move(arg);
    return Init_TrackedPerson_is_occluded(msg_);
  }

private:
  ::pedsim_msgs::msg::TrackedPerson msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_msgs::msg::TrackedPerson>()
{
  return pedsim_msgs::msg::builder::Init_TrackedPerson_track_id();
}

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__TRACKED_PERSON__BUILDER_HPP_
