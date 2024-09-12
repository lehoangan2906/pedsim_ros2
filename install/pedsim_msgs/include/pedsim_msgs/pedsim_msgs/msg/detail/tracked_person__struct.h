// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pedsim_msgs:msg/TrackedPerson.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__TRACKED_PERSON__STRUCT_H_
#define PEDSIM_MSGS__MSG__DETAIL__TRACKED_PERSON__STRUCT_H_

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
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"
// Member 'twist'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.h"

/// Struct defined in msg/TrackedPerson in the package pedsim_msgs.
/**
  * Message defining a tracked person
 */
typedef struct pedsim_msgs__msg__TrackedPerson
{
  /// unique identifier of the target, consistent over time
  uint64_t track_id;
  /// if the track is currently not observable in a physical way
  bool is_occluded;
  /// if the track is currently matched by a detection
  bool is_matched;
  /// id of the corresponding detection in the current cycle (undefined if occluded)
  uint64_t detection_id;
  /// age of the track
  builtin_interfaces__msg__Duration age;
  /// The following fields are extracted from the Kalman state x and its covariance C
  /// pose of the track (z value and orientation might not be set, check if corresponding variance on diagonal is > 99999)
  geometry_msgs__msg__PoseWithCovariance pose;
  /// velocity of the track (z value and rotational velocities might not be set, check if corresponding variance on diagonal is > 99999)
  geometry_msgs__msg__TwistWithCovariance twist;
} pedsim_msgs__msg__TrackedPerson;

// Struct for a sequence of pedsim_msgs__msg__TrackedPerson.
typedef struct pedsim_msgs__msg__TrackedPerson__Sequence
{
  pedsim_msgs__msg__TrackedPerson * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_msgs__msg__TrackedPerson__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_MSGS__MSG__DETAIL__TRACKED_PERSON__STRUCT_H_
