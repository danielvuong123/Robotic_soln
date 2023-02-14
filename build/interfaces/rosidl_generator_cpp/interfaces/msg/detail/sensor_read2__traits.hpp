// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:msg\SensorRead2.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__SENSOR_READ2__TRAITS_HPP_
#define INTERFACES__MSG__DETAIL__SENSOR_READ2__TRAITS_HPP_

#include "interfaces/msg/detail/sensor_read2__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::msg::SensorRead2>()
{
  return "interfaces::msg::SensorRead2";
}

template<>
inline const char * name<interfaces::msg::SensorRead2>()
{
  return "interfaces/msg/SensorRead2";
}

template<>
struct has_fixed_size<interfaces::msg::SensorRead2>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::msg::SensorRead2>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::msg::SensorRead2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__MSG__DETAIL__SENSOR_READ2__TRAITS_HPP_
