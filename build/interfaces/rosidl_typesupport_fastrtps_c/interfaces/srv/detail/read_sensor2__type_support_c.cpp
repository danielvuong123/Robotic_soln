// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from interfaces:srv\ReadSensor2.idl
// generated code does not contain a copyright notice
#include "interfaces/srv/detail/read_sensor2__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/srv/detail/read_sensor2__struct.h"
#include "interfaces/srv/detail/read_sensor2__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ReadSensor2_Request__ros_msg_type = interfaces__srv__ReadSensor2_Request;

static bool _ReadSensor2_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ReadSensor2_Request__ros_msg_type * ros_message = static_cast<const _ReadSensor2_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: numsamples
  {
    cdr << ros_message->numsamples;
  }

  return true;
}

static bool _ReadSensor2_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ReadSensor2_Request__ros_msg_type * ros_message = static_cast<_ReadSensor2_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: numsamples
  {
    cdr >> ros_message->numsamples;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__srv__ReadSensor2_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ReadSensor2_Request__ros_msg_type * ros_message = static_cast<const _ReadSensor2_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name numsamples
  {
    size_t item_size = sizeof(ros_message->numsamples);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ReadSensor2_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__srv__ReadSensor2_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__srv__ReadSensor2_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: numsamples
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ReadSensor2_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__srv__ReadSensor2_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ReadSensor2_Request = {
  "interfaces::srv",
  "ReadSensor2_Request",
  _ReadSensor2_Request__cdr_serialize,
  _ReadSensor2_Request__cdr_deserialize,
  _ReadSensor2_Request__get_serialized_size,
  _ReadSensor2_Request__max_serialized_size
};

static rosidl_message_type_support_t _ReadSensor2_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ReadSensor2_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, ReadSensor2_Request)() {
  return &_ReadSensor2_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "interfaces/srv/detail/read_sensor2__struct.h"
// already included above
// #include "interfaces/srv/detail/read_sensor2__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // response
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // response

// forward declare type support functions


using _ReadSensor2_Response__ros_msg_type = interfaces__srv__ReadSensor2_Response;

static bool _ReadSensor2_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ReadSensor2_Response__ros_msg_type * ros_message = static_cast<const _ReadSensor2_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _ReadSensor2_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ReadSensor2_Response__ros_msg_type * ros_message = static_cast<_ReadSensor2_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->response);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->response, size)) {
      return "failed to create array for field 'response'";
    }
    auto array_ptr = ros_message->response.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t get_serialized_size_interfaces__srv__ReadSensor2_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ReadSensor2_Response__ros_msg_type * ros_message = static_cast<const _ReadSensor2_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ReadSensor2_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_interfaces__srv__ReadSensor2_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_interfaces
size_t max_serialized_size_interfaces__srv__ReadSensor2_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: response
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ReadSensor2_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_interfaces__srv__ReadSensor2_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ReadSensor2_Response = {
  "interfaces::srv",
  "ReadSensor2_Response",
  _ReadSensor2_Response__cdr_serialize,
  _ReadSensor2_Response__cdr_deserialize,
  _ReadSensor2_Response__get_serialized_size,
  _ReadSensor2_Response__max_serialized_size
};

static rosidl_message_type_support_t _ReadSensor2_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ReadSensor2_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, ReadSensor2_Response)() {
  return &_ReadSensor2_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "interfaces/srv/read_sensor2.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ReadSensor2__callbacks = {
  "interfaces::srv",
  "ReadSensor2",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, ReadSensor2_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, ReadSensor2_Response)(),
};

static rosidl_service_type_support_t ReadSensor2__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ReadSensor2__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, srv, ReadSensor2)() {
  return &ReadSensor2__handle;
}

#if defined(__cplusplus)
}
#endif
