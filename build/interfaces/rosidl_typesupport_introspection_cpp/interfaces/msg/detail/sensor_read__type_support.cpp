// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interfaces:msg\SensorRead.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces/msg/detail/sensor_read__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SensorRead_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interfaces::msg::SensorRead(_init);
}

void SensorRead_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interfaces::msg::SensorRead *>(message_memory);
  typed_message->~SensorRead();
}

size_t size_function__SensorRead__reading(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorRead__reading(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorRead__reading(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__SensorRead__reading(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SensorRead_message_member_array[1] = {
  {
    "reading",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interfaces::msg::SensorRead, reading),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorRead__reading,  // size() function pointer
    get_const_function__SensorRead__reading,  // get_const(index) function pointer
    get_function__SensorRead__reading,  // get(index) function pointer
    resize_function__SensorRead__reading  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SensorRead_message_members = {
  "interfaces::msg",  // message namespace
  "SensorRead",  // message name
  1,  // number of fields
  sizeof(interfaces::msg::SensorRead),
  SensorRead_message_member_array,  // message members
  SensorRead_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorRead_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SensorRead_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SensorRead_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces::msg::SensorRead>()
{
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::SensorRead_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interfaces, msg, SensorRead)() {
  return &::interfaces::msg::rosidl_typesupport_introspection_cpp::SensorRead_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
