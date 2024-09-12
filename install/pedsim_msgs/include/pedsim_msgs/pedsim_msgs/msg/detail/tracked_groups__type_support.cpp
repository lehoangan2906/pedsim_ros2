// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pedsim_msgs:msg/TrackedGroups.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pedsim_msgs/msg/detail/tracked_groups__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pedsim_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TrackedGroups_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pedsim_msgs::msg::TrackedGroups(_init);
}

void TrackedGroups_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pedsim_msgs::msg::TrackedGroups *>(message_memory);
  typed_message->~TrackedGroups();
}

size_t size_function__TrackedGroups__groups(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<pedsim_msgs::msg::TrackedGroup> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TrackedGroups__groups(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<pedsim_msgs::msg::TrackedGroup> *>(untyped_member);
  return &member[index];
}

void * get_function__TrackedGroups__groups(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<pedsim_msgs::msg::TrackedGroup> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrackedGroups__groups(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const pedsim_msgs::msg::TrackedGroup *>(
    get_const_function__TrackedGroups__groups(untyped_member, index));
  auto & value = *reinterpret_cast<pedsim_msgs::msg::TrackedGroup *>(untyped_value);
  value = item;
}

void assign_function__TrackedGroups__groups(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<pedsim_msgs::msg::TrackedGroup *>(
    get_function__TrackedGroups__groups(untyped_member, index));
  const auto & value = *reinterpret_cast<const pedsim_msgs::msg::TrackedGroup *>(untyped_value);
  item = value;
}

void resize_function__TrackedGroups__groups(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<pedsim_msgs::msg::TrackedGroup> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrackedGroups_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pedsim_msgs::msg::TrackedGroups, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "groups",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pedsim_msgs::msg::TrackedGroup>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pedsim_msgs::msg::TrackedGroups, groups),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrackedGroups__groups,  // size() function pointer
    get_const_function__TrackedGroups__groups,  // get_const(index) function pointer
    get_function__TrackedGroups__groups,  // get(index) function pointer
    fetch_function__TrackedGroups__groups,  // fetch(index, &value) function pointer
    assign_function__TrackedGroups__groups,  // assign(index, value) function pointer
    resize_function__TrackedGroups__groups  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrackedGroups_message_members = {
  "pedsim_msgs::msg",  // message namespace
  "TrackedGroups",  // message name
  2,  // number of fields
  sizeof(pedsim_msgs::msg::TrackedGroups),
  TrackedGroups_message_member_array,  // message members
  TrackedGroups_init_function,  // function to initialize message memory (memory has to be allocated)
  TrackedGroups_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrackedGroups_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrackedGroups_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pedsim_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pedsim_msgs::msg::TrackedGroups>()
{
  return &::pedsim_msgs::msg::rosidl_typesupport_introspection_cpp::TrackedGroups_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pedsim_msgs, msg, TrackedGroups)() {
  return &::pedsim_msgs::msg::rosidl_typesupport_introspection_cpp::TrackedGroups_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
