// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pedsim_msgs:msg/SocialRelation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pedsim_msgs/msg/detail/social_relation__rosidl_typesupport_introspection_c.h"
#include "pedsim_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pedsim_msgs/msg/detail/social_relation__functions.h"
#include "pedsim_msgs/msg/detail/social_relation__struct.h"


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pedsim_msgs__msg__SocialRelation__rosidl_typesupport_introspection_c__SocialRelation_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pedsim_msgs__msg__SocialRelation__init(message_memory);
}

void pedsim_msgs__msg__SocialRelation__rosidl_typesupport_introspection_c__SocialRelation_fini_function(void * message_memory)
{
  pedsim_msgs__msg__SocialRelation__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember pedsim_msgs__msg__SocialRelation__rosidl_typesupport_introspection_c__SocialRelation_message_member_array[4] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pedsim_msgs__msg__SocialRelation, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "strength",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pedsim_msgs__msg__SocialRelation, strength),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "track1_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pedsim_msgs__msg__SocialRelation, track1_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "track2_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pedsim_msgs__msg__SocialRelation, track2_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pedsim_msgs__msg__SocialRelation__rosidl_typesupport_introspection_c__SocialRelation_message_members = {
  "pedsim_msgs__msg",  // message namespace
  "SocialRelation",  // message name
  4,  // number of fields
  sizeof(pedsim_msgs__msg__SocialRelation),
  pedsim_msgs__msg__SocialRelation__rosidl_typesupport_introspection_c__SocialRelation_message_member_array,  // message members
  pedsim_msgs__msg__SocialRelation__rosidl_typesupport_introspection_c__SocialRelation_init_function,  // function to initialize message memory (memory has to be allocated)
  pedsim_msgs__msg__SocialRelation__rosidl_typesupport_introspection_c__SocialRelation_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pedsim_msgs__msg__SocialRelation__rosidl_typesupport_introspection_c__SocialRelation_message_type_support_handle = {
  0,
  &pedsim_msgs__msg__SocialRelation__rosidl_typesupport_introspection_c__SocialRelation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pedsim_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pedsim_msgs, msg, SocialRelation)() {
  if (!pedsim_msgs__msg__SocialRelation__rosidl_typesupport_introspection_c__SocialRelation_message_type_support_handle.typesupport_identifier) {
    pedsim_msgs__msg__SocialRelation__rosidl_typesupport_introspection_c__SocialRelation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pedsim_msgs__msg__SocialRelation__rosidl_typesupport_introspection_c__SocialRelation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
