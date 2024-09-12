// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pedsim_msgs:msg/LineObstacle.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__LINE_OBSTACLE__BUILDER_HPP_
#define PEDSIM_MSGS__MSG__DETAIL__LINE_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pedsim_msgs/msg/detail/line_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pedsim_msgs
{

namespace msg
{

namespace builder
{

class Init_LineObstacle_end
{
public:
  explicit Init_LineObstacle_end(::pedsim_msgs::msg::LineObstacle & msg)
  : msg_(msg)
  {}
  ::pedsim_msgs::msg::LineObstacle end(::pedsim_msgs::msg::LineObstacle::_end_type arg)
  {
    msg_.end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pedsim_msgs::msg::LineObstacle msg_;
};

class Init_LineObstacle_start
{
public:
  Init_LineObstacle_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LineObstacle_end start(::pedsim_msgs::msg::LineObstacle::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_LineObstacle_end(msg_);
  }

private:
  ::pedsim_msgs::msg::LineObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pedsim_msgs::msg::LineObstacle>()
{
  return pedsim_msgs::msg::builder::Init_LineObstacle_start();
}

}  // namespace pedsim_msgs

#endif  // PEDSIM_MSGS__MSG__DETAIL__LINE_OBSTACLE__BUILDER_HPP_
