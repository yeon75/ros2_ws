// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interface_example:msg/ArithmeticArgument.idl
// generated code does not contain a copyright notice
#include "interface_example/msg/detail/arithmetic_argument__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interface_example/msg/detail/arithmetic_argument__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace interface_example
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_example
cdr_serialize(
  const interface_example::msg::ArithmeticArgument & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: argument_a
  cdr << ros_message.argument_a;
  // Member: argument_b
  cdr << ros_message.argument_b;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_example
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interface_example::msg::ArithmeticArgument & ros_message)
{
  // Member: argument_a
  cdr >> ros_message.argument_a;

  // Member: argument_b
  cdr >> ros_message.argument_b;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_example
get_serialized_size(
  const interface_example::msg::ArithmeticArgument & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: argument_a
  {
    size_t item_size = sizeof(ros_message.argument_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: argument_b
  {
    size_t item_size = sizeof(ros_message.argument_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interface_example
max_serialized_size_ArithmeticArgument(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: argument_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: argument_b
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = interface_example::msg::ArithmeticArgument;
    is_plain =
      (
      offsetof(DataType, argument_b) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ArithmeticArgument__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interface_example::msg::ArithmeticArgument *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArithmeticArgument__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interface_example::msg::ArithmeticArgument *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArithmeticArgument__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interface_example::msg::ArithmeticArgument *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArithmeticArgument__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ArithmeticArgument(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ArithmeticArgument__callbacks = {
  "interface_example::msg",
  "ArithmeticArgument",
  _ArithmeticArgument__cdr_serialize,
  _ArithmeticArgument__cdr_deserialize,
  _ArithmeticArgument__get_serialized_size,
  _ArithmeticArgument__max_serialized_size
};

static rosidl_message_type_support_t _ArithmeticArgument__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArithmeticArgument__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace interface_example

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interface_example
const rosidl_message_type_support_t *
get_message_type_support_handle<interface_example::msg::ArithmeticArgument>()
{
  return &interface_example::msg::typesupport_fastrtps_cpp::_ArithmeticArgument__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interface_example, msg, ArithmeticArgument)() {
  return &interface_example::msg::typesupport_fastrtps_cpp::_ArithmeticArgument__handle;
}

#ifdef __cplusplus
}
#endif
