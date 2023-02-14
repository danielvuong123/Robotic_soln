// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces:srv\ReadSensor2.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__READ_SENSOR2__STRUCT_HPP_
#define INTERFACES__SRV__DETAIL__READ_SENSOR2__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__ReadSensor2_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__ReadSensor2_Request __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReadSensor2_Request_
{
  using Type = ReadSensor2_Request_<ContainerAllocator>;

  explicit ReadSensor2_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->numsamples = 0ll;
    }
  }

  explicit ReadSensor2_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->numsamples = 0ll;
    }
  }

  // field types and members
  using _numsamples_type =
    int64_t;
  _numsamples_type numsamples;

  // setters for named parameter idiom
  Type & set__numsamples(
    const int64_t & _arg)
  {
    this->numsamples = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::ReadSensor2_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::ReadSensor2_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::ReadSensor2_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::ReadSensor2_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ReadSensor2_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ReadSensor2_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ReadSensor2_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ReadSensor2_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::ReadSensor2_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::ReadSensor2_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__ReadSensor2_Request
    std::shared_ptr<interfaces::srv::ReadSensor2_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__ReadSensor2_Request
    std::shared_ptr<interfaces::srv::ReadSensor2_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadSensor2_Request_ & other) const
  {
    if (this->numsamples != other.numsamples) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReadSensor2_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadSensor2_Request_

// alias to use template instance with default allocator
using ReadSensor2_Request =
  interfaces::srv::ReadSensor2_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces


#ifndef _WIN32
# define DEPRECATED__interfaces__srv__ReadSensor2_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces__srv__ReadSensor2_Response __declspec(deprecated)
#endif

namespace interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReadSensor2_Response_
{
  using Type = ReadSensor2_Response_<ContainerAllocator>;

  explicit ReadSensor2_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ReadSensor2_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _response_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces::srv::ReadSensor2_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces::srv::ReadSensor2_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces::srv::ReadSensor2_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces::srv::ReadSensor2_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ReadSensor2_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ReadSensor2_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces::srv::ReadSensor2_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces::srv::ReadSensor2_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces::srv::ReadSensor2_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces::srv::ReadSensor2_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces__srv__ReadSensor2_Response
    std::shared_ptr<interfaces::srv::ReadSensor2_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces__srv__ReadSensor2_Response
    std::shared_ptr<interfaces::srv::ReadSensor2_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadSensor2_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReadSensor2_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadSensor2_Response_

// alias to use template instance with default allocator
using ReadSensor2_Response =
  interfaces::srv::ReadSensor2_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces

namespace interfaces
{

namespace srv
{

struct ReadSensor2
{
  using Request = interfaces::srv::ReadSensor2_Request;
  using Response = interfaces::srv::ReadSensor2_Response;
};

}  // namespace srv

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__READ_SENSOR2__STRUCT_HPP_
