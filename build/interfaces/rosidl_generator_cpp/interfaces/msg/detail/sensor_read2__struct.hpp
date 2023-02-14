// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:msg\SensorRead2.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__SENSOR_READ2__STRUCT_HPP_
#define INTERFACES__MSG__DETAIL__SENSOR_READ2__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__msg__SensorRead2 __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__msg__SensorRead2 __declspec(deprecated)
#endif

namespace interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorRead2_
{
  using Type = SensorRead2_<ContainerAllocator>;

  explicit SensorRead2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SensorRead2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _reading_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _reading_type reading;

  // setters for named parameter idiom
  Type & set__reading(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->reading = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::msg::SensorRead2_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::msg::SensorRead2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::msg::SensorRead2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::msg::SensorRead2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::SensorRead2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::SensorRead2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::msg::SensorRead2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::msg::SensorRead2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::msg::SensorRead2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::msg::SensorRead2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__msg__SensorRead2
    std::shared_ptr<interfaces::msg::SensorRead2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__msg__SensorRead2
    std::shared_ptr<interfaces::msg::SensorRead2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorRead2_ & other) const
  {
    if (this->reading != other.reading) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorRead2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorRead2_

// alias to use template instance with default allocator
using SensorRead2 =
  interfaces::msg::SensorRead2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__SENSOR_READ2__STRUCT_HPP_
