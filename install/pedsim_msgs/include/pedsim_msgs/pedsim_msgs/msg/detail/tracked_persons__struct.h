// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pedsim_msgs:msg/TrackedPersons.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__TRACKED_PERSONS__STRUCT_H_
#define PEDSIM_MSGS__MSG__DETAIL__TRACKED_PERSONS__STRUCT_H_

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
// Member 'tracks'
#include "pedsim_msgs/msg/detail/tracked_person__struct.h"

/// Struct defined in msg/TrackedPersons in the package pedsim_msgs.
/**
  * Message with all currently tracked persons 
 */
typedef struct pedsim_msgs__msg__TrackedPersons
{
  /// Header containing timestamp etc. of this message
  std_msgs__msg__Header header;
  /// All persons that are currently being tracked
  pedsim_msgs__msg__TrackedPerson__Sequence tracks;
} pedsim_msgs__msg__TrackedPersons;

// Struct for a sequence of pedsim_msgs__msg__TrackedPersons.
typedef struct pedsim_msgs__msg__TrackedPersons__Sequence
{
  pedsim_msgs__msg__TrackedPersons * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pedsim_msgs__msg__TrackedPersons__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_MSGS__MSG__DETAIL__TRACKED_PERSONS__STRUCT_H_
