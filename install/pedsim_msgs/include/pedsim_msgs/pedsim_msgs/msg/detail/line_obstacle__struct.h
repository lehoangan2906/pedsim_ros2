// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pedsim_msgs:msg/LineObstacle.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__LINE_OBSTACLE__STRUCT_H_
#define PEDSIM_MSGS__MSG__DETAIL__LINE_OBSTACLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'start'
// Member 'end'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/LineObstacle in the package pedsim_msgs.
/**
  * A line obstacle in the simulator.
 */
typedef struct pedsim_msgs__msg__LineObstacle
{
  geometry_msgs__msg__Point start;
  geometry_msgs__msg__Point end;
} pedsim_msgs__msg__LineObstacle;

// Struct for a sequence of pedsim_msgs__msg__LineObstacle.
typedef struct pedsim_msgs__msg__LineObstacle__Sequence
{
  pedsim_msgs__msg__LineObstacle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_msgs__msg__LineObstacle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_MSGS__MSG__DETAIL__LINE_OBSTACLE__STRUCT_H_
