// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from interface_example:msg/ArithmeticArgument.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "interface_example/msg/detail/arithmetic_argument__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace interface_example
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ArithmeticArgument_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) interface_example::msg::ArithmeticArgument(_init);
}

void ArithmeticArgument_fini_function(void * message_memory)
{
  auto typed_message = static_cast<interface_example::msg::ArithmeticArgument *>(message_memory);
  typed_message->~ArithmeticArgument();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArithmeticArgument_message_member_array[2] = {
  {
    "argument_a",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_example::msg::ArithmeticArgument, argument_a),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "argument_b",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interface_example::msg::ArithmeticArgument, argument_b),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArithmeticArgument_message_members = {
  "interface_example::msg",  // message namespace
  "ArithmeticArgument",  // message name
  2,  // number of fields
  sizeof(interface_example::msg::ArithmeticArgument),
  ArithmeticArgument_message_member_array,  // message members
  ArithmeticArgument_init_function,  // function to initialize message memory (memory has to be allocated)
  ArithmeticArgument_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArithmeticArgument_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArithmeticArgument_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace interface_example


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_example::msg::ArithmeticArgument>()
{
  return &::interface_example::msg::rosidl_typesupport_introspection_cpp::ArithmeticArgument_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, interface_example, msg, ArithmeticArgument)() {
  return &::interface_example::msg::rosidl_typesupport_introspection_cpp::ArithmeticArgument_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
