// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:srv\ReadSensor2.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__READ_SENSOR2__STRUCT_H_
#define INTERFACES__SRV__DETAIL__READ_SENSOR2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ReadSensor2 in the package interfaces.
typedef struct interfaces__srv__ReadSensor2_Request
{
  int64_t numsamples;
} interfaces__srv__ReadSensor2_Request;

// Struct for a sequence of interfaces__srv__ReadSensor2_Request.
typedef struct interfaces__srv__ReadSensor2_Request__Sequence
{
  interfaces__srv__ReadSensor2_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__ReadSensor2_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/ReadSensor2 in the package interfaces.
typedef struct interfaces__srv__ReadSensor2_Response
{
  rosidl_runtime_c__float__Sequence response;
} interfaces__srv__ReadSensor2_Response;

// Struct for a sequence of interfaces__srv__ReadSensor2_Response.
typedef struct interfaces__srv__ReadSensor2_Response__Sequence
{
  interfaces__srv__ReadSensor2_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__srv__ReadSensor2_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__SRV__DETAIL__READ_SENSOR2__STRUCT_H_
