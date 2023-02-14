// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg\SensorRead.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__SENSOR_READ__STRUCT_H_
#define INTERFACES__MSG__DETAIL__SENSOR_READ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'reading'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/SensorRead in the package interfaces.
typedef struct interfaces__msg__SensorRead
{
  rosidl_runtime_c__float__Sequence reading;
} interfaces__msg__SensorRead;

// Struct for a sequence of interfaces__msg__SensorRead.
typedef struct interfaces__msg__SensorRead__Sequence
{
  interfaces__msg__SensorRead * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__SensorRead__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__SENSOR_READ__STRUCT_H_
