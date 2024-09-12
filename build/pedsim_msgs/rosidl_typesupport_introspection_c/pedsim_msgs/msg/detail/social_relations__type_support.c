// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pedsim_msgs:msg/SocialRelations.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pedsim_msgs/msg/detail/social_relations__rosidl_typesupport_introspection_c.h"
#include "pedsim_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pedsim_msgs/msg/detail/social_relations__functions.h"
#include "pedsim_msgs/msg/detail/social_relations__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `elements`
#include "pedsim_msgs/msg/social_relation.h"
// Member `elements`
#include "pedsim_msgs/msg/detail/social_relation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__SocialRelations_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pedsim_msgs__msg__SocialRelations__init(message_memory);
}

void pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__SocialRelations_fini_function(void * message_memory)
{
  pedsim_msgs__msg__SocialRelations__fini(message_memory);
}

size_t pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__size_function__SocialRelations__elements(
  const void * untyped_member)
{
  const pedsim_msgs__msg__SocialRelation__Sequence * member =
    (const pedsim_msgs__msg__SocialRelation__Sequence *)(untyped_member);
  return member->size;
}

const void * pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__get_const_function__SocialRelations__elements(
  const void * untyped_member, size_t index)
{
  const pedsim_msgs__msg__SocialRelation__Sequence * member =
    (const pedsim_msgs__msg__SocialRelation__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__get_function__SocialRelations__elements(
  void * untyped_member, size_t index)
{
  pedsim_msgs__msg__SocialRelation__Sequence * member =
    (pedsim_msgs__msg__SocialRelation__Sequence *)(untyped_member);
  return &member->data[index];
}

void pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__fetch_function__SocialRelations__elements(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const pedsim_msgs__msg__SocialRelation * item =
    ((const pedsim_msgs__msg__SocialRelation *)
    pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__get_const_function__SocialRelations__elements(untyped_member, index));
  pedsim_msgs__msg__SocialRelation * value =
    (pedsim_msgs__msg__SocialRelation *)(untyped_value);
  *value = *item;
}

void pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__assign_function__SocialRelations__elements(
  void * untyped_member, size_t index, const void * untyped_value)
{
  pedsim_msgs__msg__SocialRelation * item =
    ((pedsim_msgs__msg__SocialRelation *)
    pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__get_function__SocialRelations__elements(untyped_member, index));
  const pedsim_msgs__msg__SocialRelation * value =
    (const pedsim_msgs__msg__SocialRelation *)(untyped_value);
  *item = *value;
}

bool pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__resize_function__SocialRelations__elements(
  void * untyped_member, size_t size)
{
  pedsim_msgs__msg__SocialRelation__Sequence * member =
    (pedsim_msgs__msg__SocialRelation__Sequence *)(untyped_member);
  pedsim_msgs__msg__SocialRelation__Sequence__fini(member);
  return pedsim_msgs__msg__SocialRelation__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__SocialRelations_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pedsim_msgs__msg__SocialRelations, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elements",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pedsim_msgs__msg__SocialRelations, elements),  // bytes offset in struct
    NULL,  // default value
    pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__size_function__SocialRelations__elements,  // size() function pointer
    pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__get_const_function__SocialRelations__elements,  // get_const(index) function pointer
    pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__get_function__SocialRelations__elements,  // get(index) function pointer
    pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__fetch_function__SocialRelations__elements,  // fetch(index, &value) function pointer
    pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__assign_function__SocialRelations__elements,  // assign(index, value) function pointer
    pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__resize_function__SocialRelations__elements  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__SocialRelations_message_members = {
  "pedsim_msgs__msg",  // message namespace
  "SocialRelations",  // message name
  2,  // number of fields
  sizeof(pedsim_msgs__msg__SocialRelations),
  pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__SocialRelations_message_member_array,  // message members
  pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__SocialRelations_init_function,  // function to initialize message memory (memory has to be allocated)
  pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__SocialRelations_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__SocialRelations_message_type_support_handle = {
  0,
  &pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__SocialRelations_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pedsim_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pedsim_msgs, msg, SocialRelations)() {
  pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__SocialRelations_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__SocialRelations_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pedsim_msgs, msg, SocialRelation)();
  if (!pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__SocialRelations_message_type_support_handle.typesupport_identifier) {
    pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__SocialRelations_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pedsim_msgs__msg__SocialRelations__rosidl_typesupport_introspection_c__SocialRelations_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
