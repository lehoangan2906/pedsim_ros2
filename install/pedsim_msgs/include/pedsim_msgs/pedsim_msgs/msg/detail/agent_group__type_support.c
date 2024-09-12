// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pedsim_msgs:msg/AgentGroup.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pedsim_msgs/msg/detail/agent_group__rosidl_typesupport_introspection_c.h"
#include "pedsim_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pedsim_msgs/msg/detail/agent_group__functions.h"
#include "pedsim_msgs/msg/detail/agent_group__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `members`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `center_of_mass`
#include "geometry_msgs/msg/pose.h"
// Member `center_of_mass`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__AgentGroup_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pedsim_msgs__msg__AgentGroup__init(message_memory);
}

void pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__AgentGroup_fini_function(void * message_memory)
{
  pedsim_msgs__msg__AgentGroup__fini(message_memory);
}

size_t pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__size_function__AgentGroup__members(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__get_const_function__AgentGroup__members(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__get_function__AgentGroup__members(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__fetch_function__AgentGroup__members(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__get_const_function__AgentGroup__members(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__assign_function__AgentGroup__members(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__get_function__AgentGroup__members(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__resize_function__AgentGroup__members(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__AgentGroup_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pedsim_msgs__msg__AgentGroup, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "group_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pedsim_msgs__msg__AgentGroup, group_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "age",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pedsim_msgs__msg__AgentGroup, age),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "members",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pedsim_msgs__msg__AgentGroup, members),  // bytes offset in struct
    NULL,  // default value
    pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__size_function__AgentGroup__members,  // size() function pointer
    pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__get_const_function__AgentGroup__members,  // get_const(index) function pointer
    pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__get_function__AgentGroup__members,  // get(index) function pointer
    pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__fetch_function__AgentGroup__members,  // fetch(index, &value) function pointer
    pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__assign_function__AgentGroup__members,  // assign(index, value) function pointer
    pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__resize_function__AgentGroup__members  // resize(index) function pointer
  },
  {
    "center_of_mass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pedsim_msgs__msg__AgentGroup, center_of_mass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__AgentGroup_message_members = {
  "pedsim_msgs__msg",  // message namespace
  "AgentGroup",  // message name
  5,  // number of fields
  sizeof(pedsim_msgs__msg__AgentGroup),
  pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__AgentGroup_message_member_array,  // message members
  pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__AgentGroup_init_function,  // function to initialize message memory (memory has to be allocated)
  pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__AgentGroup_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__AgentGroup_message_type_support_handle = {
  0,
  &pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__AgentGroup_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pedsim_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pedsim_msgs, msg, AgentGroup)() {
  pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__AgentGroup_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__AgentGroup_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__AgentGroup_message_type_support_handle.typesupport_identifier) {
    pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__AgentGroup_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pedsim_msgs__msg__AgentGroup__rosidl_typesupport_introspection_c__AgentGroup_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
