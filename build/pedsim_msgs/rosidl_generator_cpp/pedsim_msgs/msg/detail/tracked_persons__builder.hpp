// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pedsim_msgs:msg/TrackedPersons.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__TRACKED_PERSONS__BUILDER_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__TRACKED_PERSONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pedsim_msgs/msg/detail/tracked_persons__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pedsim_msgs
{

namespace msg
{

namespace builder
{

class Init_TrackedPersons_tracks
{
public:
  explicit Init_TrackedPersons_tracks(::pedsim_msgs::msg::TrackedPersons & msg)
  : msg_(msg)
  {}
  ::pedsim_msgs::msg::TrackedPersons tracks(::pedsim_msgs::msg::TrackedPersons::_tracks_type arg)
  {
    msg_.tracks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_msgs::msg::TrackedPersons msg_;
};

class Init_TrackedPersons_header
{
public:
  Init_TrackedPersons_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrackedPersons_tracks header(::pedsim_msgs::msg::TrackedPersons::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrackedPersons_tracks(msg_);
  }

private:
  ::pedsim_msgs::msg::TrackedPersons msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_msgs::msg::TrackedPersons>()
{
  return pedsim_msgs::msg::builder::Init_TrackedPersons_header();
}

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__TRACKED_PERSONS__BUILDER_HPP_
