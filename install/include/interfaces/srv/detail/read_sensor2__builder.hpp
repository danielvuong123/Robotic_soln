// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv\ReadSensor2.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__READ_SENSOR2__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__READ_SENSOR2__BUILDER_HPP_

#include "interfaces/srv/detail/read_sensor2__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ReadSensor2_Request_numsamples
{
public:
  Init_ReadSensor2_Request_numsamples()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::ReadSensor2_Request numsamples(::interfaces::srv::ReadSensor2_Request::_numsamples_type arg)
  {
    msg_.numsamples = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ReadSensor2_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ReadSensor2_Request>()
{
  return interfaces::srv::builder::Init_ReadSensor2_Request_numsamples();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_ReadSensor2_Response_response
{
public:
  Init_ReadSensor2_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::ReadSensor2_Response response(::interfaces::srv::ReadSensor2_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::ReadSensor2_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::ReadSensor2_Response>()
{
  return interfaces::srv::builder::Init_ReadSensor2_Response_response();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__READ_SENSOR2__BUILDER_HPP_
