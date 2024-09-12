// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pedsim_msgs:msg/SocialRelation.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__SOCIAL_RELATION__STRUCT_H_
#define PEDSIM_MSGS__MSG__DETAIL__SOCIAL_RELATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_SPATIAL'.
/**
  * Constants for type (just examples at the moment)
 */
static const char * const pedsim_msgs__msg__SocialRelation__TYPE_SPATIAL = "spatial";

/// Constant 'TYPE_ROMANTIC'.
static const char * const pedsim_msgs__msg__SocialRelation__TYPE_ROMANTIC = "romantic";

/// Constant 'TYPE_PARENT_CHILD'.
static const char * const pedsim_msgs__msg__SocialRelation__TYPE_PARENT_CHILD = "parent_child";

/// Constant 'TYPE_FRIENDSHIP'.
static const char * const pedsim_msgs__msg__SocialRelation__TYPE_FRIENDSHIP = "friendship";

// Include directives for member types
// Member 'type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SocialRelation in the package pedsim_msgs.
typedef struct pedsim_msgs__msg__SocialRelation
{
  /// e.g. mother-son relationship, romantic relationship, etc.
  rosidl_runtime_c__String type;
  /// relationship strength between 0.0 and 1.0
  float strength;
  uint32_t track1_id;
  uint32_t track2_id;
} pedsim_msgs__msg__SocialRelation;

// Struct for a sequence of pedsim_msgs__msg__SocialRelation.
typedef struct pedsim_msgs__msg__SocialRelation__Sequence
{
  pedsim_msgs__msg__SocialRelation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_msgs__msg__SocialRelation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_MSGS__MSG__DETAIL__SOCIAL_RELATION__STRUCT_H_
