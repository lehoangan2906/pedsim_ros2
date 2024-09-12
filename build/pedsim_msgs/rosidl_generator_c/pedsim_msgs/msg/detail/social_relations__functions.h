// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from pedsim_msgs:msg/SocialRelations.idl
// generated code does not contain a copyright notice

#ifndef PEDSIM_MSGS__MSG__DETAIL__SOCIAL_RELATIONS__FUNCTIONS_H_
#define PEDSIM_MSGS__MSG__DETAIL__SOCIAL_RELATIONS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "pedsim_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "pedsim_msgs/msg/detail/social_relations__struct.h"

/// Initialize msg/SocialRelations message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * pedsim_msgs__msg__SocialRelations
 * )) before or use
 * pedsim_msgs__msg__SocialRelations__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
bool
pedsim_msgs__msg__SocialRelations__init(pedsim_msgs__msg__SocialRelations * msg);

/// Finalize msg/SocialRelations message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
void
pedsim_msgs__msg__SocialRelations__fini(pedsim_msgs__msg__SocialRelations * msg);

/// Create msg/SocialRelations message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * pedsim_msgs__msg__SocialRelations__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
pedsim_msgs__msg__SocialRelations *
pedsim_msgs__msg__SocialRelations__create();

/// Destroy msg/SocialRelations message.
/**
 * It calls
 * pedsim_msgs__msg__SocialRelations__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
void
pedsim_msgs__msg__SocialRelations__destroy(pedsim_msgs__msg__SocialRelations * msg);

/// Check for msg/SocialRelations message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
bool
pedsim_msgs__msg__SocialRelations__are_equal(const pedsim_msgs__msg__SocialRelations * lhs, const pedsim_msgs__msg__SocialRelations * rhs);

/// Copy a msg/SocialRelations message.
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
pedsim_msgs__msg__SocialRelations__copy(
  const pedsim_msgs__msg__SocialRelations * input,
  pedsim_msgs__msg__SocialRelations * output);

/// Initialize array of msg/SocialRelations messages.
/**
 * It allocates the memory for the number of elements and calls
 * pedsim_msgs__msg__SocialRelations__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
bool
pedsim_msgs__msg__SocialRelations__Sequence__init(pedsim_msgs__msg__SocialRelations__Sequence * array, size_t size);

/// Finalize array of msg/SocialRelations messages.
/**
 * It calls
 * pedsim_msgs__msg__SocialRelations__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
void
pedsim_msgs__msg__SocialRelations__Sequence__fini(pedsim_msgs__msg__SocialRelations__Sequence * array);

/// Create array of msg/SocialRelations messages.
/**
 * It allocates the memory for the array and calls
 * pedsim_msgs__msg__SocialRelations__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
pedsim_msgs__msg__SocialRelations__Sequence *
pedsim_msgs__msg__SocialRelations__Sequence__create(size_t size);

/// Destroy array of msg/SocialRelations messages.
/**
 * It calls
 * pedsim_msgs__msg__SocialRelations__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
void
pedsim_msgs__msg__SocialRelations__Sequence__destroy(pedsim_msgs__msg__SocialRelations__Sequence * array);

/// Check for msg/SocialRelations message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_pedsim_msgs
bool
pedsim_msgs__msg__SocialRelations__Sequence__are_equal(const pedsim_msgs__msg__SocialRelations__Sequence * lhs, const pedsim_msgs__msg__SocialRelations__Sequence * rhs);

/// Copy an array of msg/SocialRelations messages.
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
pedsim_msgs__msg__SocialRelations__Sequence__copy(
  const pedsim_msgs__msg__SocialRelations__Sequence * input,
  pedsim_msgs__msg__SocialRelations__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PEDSIM_MSGS__MSG__DETAIL__SOCIAL_RELATIONS__FUNCTIONS_H_
