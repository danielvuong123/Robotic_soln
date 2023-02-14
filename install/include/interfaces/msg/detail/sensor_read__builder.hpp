// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg\SensorRead.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__SENSOR_READ__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__SENSOR_READ__BUILDER_HPP_

#include "interfaces/msg/detail/sensor_read__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_SensorRead_reading
{
public:
  Init_SensorRead_reading()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::msg::SensorRead reading(::interfaces::msg::SensorRead::_reading_type arg)
  {
    msg_.reading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::SensorRead msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::SensorRead>()
{
  return interfaces::msg::builder::Init_SensorRead_reading();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__SENSOR_READ__BUILDER_HPP_
