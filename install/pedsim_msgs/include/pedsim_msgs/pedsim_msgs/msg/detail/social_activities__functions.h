// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pedsim_msgs:msg/SocialActivities.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITIES__FUNCTIONS_H_
#define PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITIES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pedsim_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pedsim_msgs/msg/detail/social_activities__struct.h"

/// Initialize msg/SocialActivities message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pedsim_msgs__msg__SocialActivities
 * )) before or use
 * pedsim_msgs__msg__SocialActivities__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
bool
pedsim_msgs__msg__SocialActivities__init(pedsim_msgs__msg__SocialActivities * msg);

/// Finalize msg/SocialActivities message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
void
pedsim_msgs__msg__SocialActivities__fini(pedsim_msgs__msg__SocialActivities * msg);

/// Create msg/SocialActivities message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pedsim_msgs__msg__SocialActivities__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
pedsim_msgs__msg__SocialActivities *
pedsim_msgs__msg__SocialActivities__create();

/// Destroy msg/SocialActivities message.
/**
 * It calls
 * pedsim_msgs__msg__SocialActivities__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
void
pedsim_msgs__msg__SocialActivities__destroy(pedsim_msgs__msg__SocialActivities * msg);

/// Check for msg/SocialActivities message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
bool
pedsim_msgs__msg__SocialActivities__are_equal(const pedsim_msgs__msg__SocialActivities * lhs, const pedsim_msgs__msg__SocialActivities * rhs);

/// Copy a msg/SocialActivities message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
bool
pedsim_msgs__msg__SocialActivities__copy(
  const pedsim_msgs__msg__SocialActivities * input,
  pedsim_msgs__msg__SocialActivities * output);

/// Initialize array of msg/SocialActivities messages.
/**
 * It allocates the memory for the number of elements and calls
 * pedsim_msgs__msg__SocialActivities__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
bool
pedsim_msgs__msg__SocialActivities__Sequence__init(pedsim_msgs__msg__SocialActivities__Sequence * array, size_t size);

/// Finalize array of msg/SocialActivities messages.
/**
 * It calls
 * pedsim_msgs__msg__SocialActivities__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
void
pedsim_msgs__msg__SocialActivities__Sequence__fini(pedsim_msgs__msg__SocialActivities__Sequence * array);

/// Create array of msg/SocialActivities messages.
/**
 * It allocates the memory for the array and calls
 * pedsim_msgs__msg__SocialActivities__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
pedsim_msgs__msg__SocialActivities__Sequence *
pedsim_msgs__msg__SocialActivities__Sequence__create(size_t size);

/// Destroy array of msg/SocialActivities messages.
/**
 * It calls
 * pedsim_msgs__msg__SocialActivities__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
void
pedsim_msgs__msg__SocialActivities__Sequence__destroy(pedsim_msgs__msg__SocialActivities__Sequence * array);

/// Check for msg/SocialActivities message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
bool
pedsim_msgs__msg__SocialActivities__Sequence__are_equal(const pedsim_msgs__msg__SocialActivities__Sequence * lhs, const pedsim_msgs__msg__SocialActivities__Sequence * rhs);

/// Copy an array of msg/SocialActivities messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
bool
pedsim_msgs__msg__SocialActivities__Sequence__copy(
  const pedsim_msgs__msg__SocialActivities__Sequence * input,
  pedsim_msgs__msg__SocialActivities__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITIES__FUNCTIONS_H_
