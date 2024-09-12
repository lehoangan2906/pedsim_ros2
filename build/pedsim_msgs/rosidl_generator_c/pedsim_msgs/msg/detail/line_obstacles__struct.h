// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pedsim_msgs:msg/LineObstacles.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__LINE_OBSTACLES__STRUCT_H_
#define PEDSIM_MSGS__MSG__DETAIL__LINE_OBSTACLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'obstacles'
#include "pedsim_msgs/msg/detail/line_obstacle__struct.h"

/// Struct defined in msg/LineObstacles in the package pedsim_msgs.
/**
  * A collection of line obstacles.
  * No need to header since these are detemined at sim initiation time.
 */
typedef struct pedsim_msgs__msg__LineObstacles
{
  std_msgs__msg__Header header;
  pedsim_msgs__msg__LineObstacle__Sequence obstacles;
} pedsim_msgs__msg__LineObstacles;

// Struct for a sequence of pedsim_msgs__msg__LineObstacles.
typedef struct pedsim_msgs__msg__LineObstacles__Sequence
{
  pedsim_msgs__msg__LineObstacles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_msgs__msg__LineObstacles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_MSGS__MSG__DETAIL__LINE_OBSTACLES__STRUCT_H_
