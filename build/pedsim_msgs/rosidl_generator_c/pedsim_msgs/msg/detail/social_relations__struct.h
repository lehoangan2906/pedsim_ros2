// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pedsim_msgs:msg/SocialRelations.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__SOCIAL_RELATIONS__STRUCT_H_
#define PEDSIM_MSGS__MSG__DETAIL__SOCIAL_RELATIONS__STRUCT_H_

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
#include "pedsim_msgs/msg/detail/social_relation__struct.h"

/// Struct defined in msg/SocialRelations in the package pedsim_msgs.
typedef struct pedsim_msgs__msg__SocialRelations
{
  std_msgs__msg__Header header;
  /// All social relations of all tracks in the current time step.
  /// There might be multiple social relations per pair of tracks.
  pedsim_msgs__msg__SocialRelation__Sequence elements;
} pedsim_msgs__msg__SocialRelations;

// Struct for a sequence of pedsim_msgs__msg__SocialRelations.
typedef struct pedsim_msgs__msg__SocialRelations__Sequence
{
  pedsim_msgs__msg__SocialRelations * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_msgs__msg__SocialRelations__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_MSGS__MSG__DETAIL__SOCIAL_RELATIONS__STRUCT_H_
