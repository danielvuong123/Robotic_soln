// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces:srv\ReadSensor2.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__READ_SENSOR2__TRAITS_HPP_
#define INTERFACES__SRV__DETAIL__READ_SENSOR2__TRAITS_HPP_

#include "interfaces/srv/detail/read_sensor2__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::ReadSensor2_Request>()
{
  return "interfaces::srv::ReadSensor2_Request";
}

template<>
inline const char * name<interfaces::srv::ReadSensor2_Request>()
{
  return "interfaces/srv/ReadSensor2_Request";
}

template<>
struct has_fixed_size<interfaces::srv::ReadSensor2_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces::srv::ReadSensor2_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces::srv::ReadSensor2_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::ReadSensor2_Response>()
{
  return "interfaces::srv::ReadSensor2_Response";
}

template<>
inline const char * name<interfaces::srv::ReadSensor2_Response>()
{
  return "interfaces/srv/ReadSensor2_Response";
}

template<>
struct has_fixed_size<interfaces::srv::ReadSensor2_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interfaces::srv::ReadSensor2_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interfaces::srv::ReadSensor2_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces::srv::ReadSensor2>()
{
  return "interfaces::srv::ReadSensor2";
}

template<>
inline const char * name<interfaces::srv::ReadSensor2>()
{
  return "interfaces/srv/ReadSensor2";
}

template<>
struct has_fixed_size<interfaces::srv::ReadSensor2>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces::srv::ReadSensor2_Request>::value &&
    has_fixed_size<interfaces::srv::ReadSensor2_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces::srv::ReadSensor2>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces::srv::ReadSensor2_Request>::value &&
    has_bounded_size<interfaces::srv::ReadSensor2_Response>::value
  >
{
};

template<>
struct is_service<interfaces::srv::ReadSensor2>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces::srv::ReadSensor2_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces::srv::ReadSensor2_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES__SRV__DETAIL__READ_SENSOR2__TRAITS_HPP_
