// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pedsim_msgs:msg/SocialActivity.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITY__STRUCT_H_
#define PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_SHOPPING'.
/**
  * Constants for social activity type (just examples at the moment)
 */
static const char * const pedsim_msgs__msg__SocialActivity__TYPE_SHOPPING = "shopping";

/// Constant 'TYPE_STANDING'.
static const char * const pedsim_msgs__msg__SocialActivity__TYPE_STANDING = "standing";

/// Constant 'TYPE_INDIVIDUAL_MOVING'.
static const char * const pedsim_msgs__msg__SocialActivity__TYPE_INDIVIDUAL_MOVING = "individual_moving";

/// Constant 'TYPE_WAITING_IN_QUEUE'.
static const char * const pedsim_msgs__msg__SocialActivity__TYPE_WAITING_IN_QUEUE = "waiting_in_queue";

/// Constant 'TYPE_LOOKING_AT_INFORMATION_SCREEN'.
static const char * const pedsim_msgs__msg__SocialActivity__TYPE_LOOKING_AT_INFORMATION_SCREEN = "looking_at_information_screen";

/// Constant 'TYPE_LOOKING_AT_KIOSK'.
static const char * const pedsim_msgs__msg__SocialActivity__TYPE_LOOKING_AT_KIOSK = "looking_at_kiosk";

/// Constant 'TYPE_GROUP_ASSEMBLING'.
static const char * const pedsim_msgs__msg__SocialActivity__TYPE_GROUP_ASSEMBLING = "group_assembling";

/// Constant 'TYPE_GROUP_MOVING'.
static const char * const pedsim_msgs__msg__SocialActivity__TYPE_GROUP_MOVING = "group_moving";

/// Constant 'TYPE_FLOW_WITH_ROBOT'.
static const char * const pedsim_msgs__msg__SocialActivity__TYPE_FLOW_WITH_ROBOT = "flow";

/// Constant 'TYPE_ANTIFLOW_AGAINST_ROBOT'.
static const char * const pedsim_msgs__msg__SocialActivity__TYPE_ANTIFLOW_AGAINST_ROBOT = "antiflow";

/// Constant 'TYPE_WAITING_FOR_OTHERS'.
static const char * const pedsim_msgs__msg__SocialActivity__TYPE_WAITING_FOR_OTHERS = "waiting_for_others";

// Include directives for member types
// Member 'type'
#include "rosidl_runtime_c/string.h"
// Member 'track_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SocialActivity in the package pedsim_msgs.
typedef struct pedsim_msgs__msg__SocialActivity
{
  /// see constants below
  rosidl_runtime_c__String type;
  /// detection confidence
  float confidence;
  /// IDs of all person tracks involved in the activity, might be one or multiple
  rosidl_runtime_c__uint64__Sequence track_ids;
} pedsim_msgs__msg__SocialActivity;

// Struct for a sequence of pedsim_msgs__msg__SocialActivity.
typedef struct pedsim_msgs__msg__SocialActivity__Sequence
{
  pedsim_msgs__msg__SocialActivity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_msgs__msg__SocialActivity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITY__STRUCT_H_
