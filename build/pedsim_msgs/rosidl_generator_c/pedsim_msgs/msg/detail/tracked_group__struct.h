// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pedsim_msgs:msg/TrackedGroup.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUP__STRUCT_H_
#define PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'age'
#include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'center_of_gravity'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"
// Member 'track_ids'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/TrackedGroup in the package pedsim_msgs.
/**
  * Message defining a tracked group
 */
typedef struct pedsim_msgs__msg__TrackedGroup
{
  /// unique identifier of the target, consistent over time
  uint64_t group_id;
  /// age of the group
  builtin_interfaces__msg__Duration age;
  /// mean and covariance of the group (calculated from its person tracks)
  geometry_msgs__msg__PoseWithCovariance center_of_gravity;
  /// IDs of the tracked persons in this group. See srl_tracking_msgs/TrackedPersons
  rosidl_runtime_c__uint64__Sequence track_ids;
} pedsim_msgs__msg__TrackedGroup;

// Struct for a sequence of pedsim_msgs__msg__TrackedGroup.
typedef struct pedsim_msgs__msg__TrackedGroup__Sequence
{
  pedsim_msgs__msg__TrackedGroup * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_msgs__msg__TrackedGroup__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_MSGS__MSG__DETAIL__TRACKED_GROUP__STRUCT_H_
