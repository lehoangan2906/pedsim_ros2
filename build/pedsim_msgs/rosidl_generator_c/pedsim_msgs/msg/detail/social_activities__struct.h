// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pedsim_msgs:msg/SocialActivities.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITIES__STRUCT_H_
#define PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITIES__STRUCT_H_

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
// Member 'elements'
#include "pedsim_msgs/msg/detail/social_activity__struct.h"

/// Struct defined in msg/SocialActivities in the package pedsim_msgs.
typedef struct pedsim_msgs__msg__SocialActivities
{
  std_msgs__msg__Header header;
  /// All social activities that have been detected in the current time step,
  /// within sensor range of the robot.
  pedsim_msgs__msg__SocialActivity__Sequence elements;
} pedsim_msgs__msg__SocialActivities;

// Struct for a sequence of pedsim_msgs__msg__SocialActivities.
typedef struct pedsim_msgs__msg__SocialActivities__Sequence
{
  pedsim_msgs__msg__SocialActivities * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_msgs__msg__SocialActivities__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITIES__STRUCT_H_
