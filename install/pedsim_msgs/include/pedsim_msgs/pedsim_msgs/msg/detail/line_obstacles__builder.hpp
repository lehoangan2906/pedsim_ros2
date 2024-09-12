// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pedsim_msgs:msg/LineObstacles.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__LINE_OBSTACLES__BUILDER_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__LINE_OBSTACLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pedsim_msgs/msg/detail/line_obstacles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pedsim_msgs
{

namespace msg
{

namespace builder
{

class Init_LineObstacles_obstacles
{
public:
  explicit Init_LineObstacles_obstacles(::pedsim_msgs::msg::LineObstacles & msg)
  : msg_(msg)
  {}
  ::pedsim_msgs::msg::LineObstacles obstacles(::pedsim_msgs::msg::LineObstacles::_obstacles_type arg)
  {
    msg_.obstacles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_msgs::msg::LineObstacles msg_;
};

class Init_LineObstacles_header
{
public:
  Init_LineObstacles_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LineObstacles_obstacles header(::pedsim_msgs::msg::LineObstacles::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LineObstacles_obstacles(msg_);
  }

private:
  ::pedsim_msgs::msg::LineObstacles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_msgs::msg::LineObstacles>()
{
  return pedsim_msgs::msg::builder::Init_LineObstacles_header();
}

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__LINE_OBSTACLES__BUILDER_HPP_
