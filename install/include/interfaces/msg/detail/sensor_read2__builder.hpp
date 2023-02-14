// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg\SensorRead2.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__SENSOR_READ2__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__SENSOR_READ2__BUILDER_HPP_

#include "interfaces/msg/detail/sensor_read2__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_SensorRead2_reading
{
public:
  Init_SensorRead2_reading()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::msg::SensorRead2 reading(::interfaces::msg::SensorRead2::_reading_type arg)
  {
    msg_.reading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::SensorRead2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::SensorRead2>()
{
  return interfaces::msg::builder::Init_SensorRead2_reading();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__SENSOR_READ2__BUILDER_HPP_
