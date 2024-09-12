// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pedsim_msgs:msg/SocialActivity.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITY__FUNCTIONS_H_
#define PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pedsim_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pedsim_msgs/msg/detail/social_activity__struct.h"

/// Initialize msg/SocialActivity message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pedsim_msgs__msg__SocialActivity
 * )) before or use
 * pedsim_msgs__msg__SocialActivity__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
bool
pedsim_msgs__msg__SocialActivity__init(pedsim_msgs__msg__SocialActivity * msg);

/// Finalize msg/SocialActivity message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
void
pedsim_msgs__msg__SocialActivity__fini(pedsim_msgs__msg__SocialActivity * msg);

/// Create msg/SocialActivity message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pedsim_msgs__msg__SocialActivity__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
pedsim_msgs__msg__SocialActivity *
pedsim_msgs__msg__SocialActivity__create();

/// Destroy msg/SocialActivity message.
/**
 * It calls
 * pedsim_msgs__msg__SocialActivity__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
void
pedsim_msgs__msg__SocialActivity__destroy(pedsim_msgs__msg__SocialActivity * msg);

/// Check for msg/SocialActivity message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
bool
pedsim_msgs__msg__SocialActivity__are_equal(const pedsim_msgs__msg__SocialActivity * lhs, const pedsim_msgs__msg__SocialActivity * rhs);

/// Copy a msg/SocialActivity message.
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
pedsim_msgs__msg__SocialActivity__copy(
  const pedsim_msgs__msg__SocialActivity * input,
  pedsim_msgs__msg__SocialActivity * output);

/// Initialize array of msg/SocialActivity messages.
/**
 * It allocates the memory for the number of elements and calls
 * pedsim_msgs__msg__SocialActivity__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
bool
pedsim_msgs__msg__SocialActivity__Sequence__init(pedsim_msgs__msg__SocialActivity__Sequence * array, size_t size);

/// Finalize array of msg/SocialActivity messages.
/**
 * It calls
 * pedsim_msgs__msg__SocialActivity__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
void
pedsim_msgs__msg__SocialActivity__Sequence__fini(pedsim_msgs__msg__SocialActivity__Sequence * array);

/// Create array of msg/SocialActivity messages.
/**
 * It allocates the memory for the array and calls
 * pedsim_msgs__msg__SocialActivity__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
pedsim_msgs__msg__SocialActivity__Sequence *
pedsim_msgs__msg__SocialActivity__Sequence__create(size_t size);

/// Destroy array of msg/SocialActivity messages.
/**
 * It calls
 * pedsim_msgs__msg__SocialActivity__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
void
pedsim_msgs__msg__SocialActivity__Sequence__destroy(pedsim_msgs__msg__SocialActivity__Sequence * array);

/// Check for msg/SocialActivity message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
bool
pedsim_msgs__msg__SocialActivity__Sequence__are_equal(const pedsim_msgs__msg__SocialActivity__Sequence * lhs, const pedsim_msgs__msg__SocialActivity__Sequence * rhs);

/// Copy an array of msg/SocialActivity messages.
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
pedsim_msgs__msg__SocialActivity__Sequence__copy(
  const pedsim_msgs__msg__SocialActivity__Sequence * input,
  pedsim_msgs__msg__SocialActivity__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_MSGS__MSG__DETAIL__SOCIAL_ACTIVITY__FUNCTIONS_H_
