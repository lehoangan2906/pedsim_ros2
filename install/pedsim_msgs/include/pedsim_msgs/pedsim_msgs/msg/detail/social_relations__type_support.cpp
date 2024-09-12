// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pedsim_msgs:msg/SocialRelations.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pedsim_msgs/msg/detail/social_relations__struct.hpp"
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

void SocialRelations_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pedsim_msgs::msg::SocialRelations(_init);
}

void SocialRelations_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pedsim_msgs::msg::SocialRelations *>(message_memory);
  typed_message->~SocialRelations();
}

size_t size_function__SocialRelations__elements(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<pedsim_msgs::msg::SocialRelation> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SocialRelations__elements(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<pedsim_msgs::msg::SocialRelation> *>(untyped_member);
  return &member[index];
}

void * get_function__SocialRelations__elements(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<pedsim_msgs::msg::SocialRelation> *>(untyped_member);
  return &member[index];
}

void fetch_function__SocialRelations__elements(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const pedsim_msgs::msg::SocialRelation *>(
    get_const_function__SocialRelations__elements(untyped_member, index));
  auto & value = *reinterpret_cast<pedsim_msgs::msg::SocialRelation *>(untyped_value);
  value = item;
}

void assign_function__SocialRelations__elements(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<pedsim_msgs::msg::SocialRelation *>(
    get_function__SocialRelations__elements(untyped_member, index));
  const auto & value = *reinterpret_cast<const pedsim_msgs::msg::SocialRelation *>(untyped_value);
  item = value;
}

void resize_function__SocialRelations__elements(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<pedsim_msgs::msg::SocialRelation> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SocialRelations_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pedsim_msgs::msg::SocialRelations, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "elements",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<pedsim_msgs::msg::SocialRelation>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pedsim_msgs::msg::SocialRelations, elements),  // bytes offset in struct
    nullptr,  // default value
    size_function__SocialRelations__elements,  // size() function pointer
    get_const_function__SocialRelations__elements,  // get_const(index) function pointer
    get_function__SocialRelations__elements,  // get(index) function pointer
    fetch_function__SocialRelations__elements,  // fetch(index, &value) function pointer
    assign_function__SocialRelations__elements,  // assign(index, value) function pointer
    resize_function__SocialRelations__elements  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SocialRelations_message_members = {
  "pedsim_msgs::msg",  // message namespace
  "SocialRelations",  // message name
  2,  // number of fields
  sizeof(pedsim_msgs::msg::SocialRelations),
  SocialRelations_message_member_array,  // message members
  SocialRelations_init_function,  // function to initialize message memory (memory has to be allocated)
  SocialRelations_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SocialRelations_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SocialRelations_message_members,
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
get_message_type_support_handle<pedsim_msgs::msg::SocialRelations>()
{
  return &::pedsim_msgs::msg::rosidl_typesupport_introspection_cpp::SocialRelations_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pedsim_msgs, msg, SocialRelations)() {
  return &::pedsim_msgs::msg::rosidl_typesupport_introspection_cpp::SocialRelations_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
