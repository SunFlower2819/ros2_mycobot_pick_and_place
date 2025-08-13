// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robocallee_fms:msg/ArucoPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robocallee_fms/msg/aruco_pose.hpp"


#ifndef ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE__STRUCT_HPP_
#define ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robocallee_fms__msg__ArucoPose __attribute__((deprecated))
#else
# define DEPRECATED__robocallee_fms__msg__ArucoPose __declspec(deprecated)
#endif

namespace robocallee_fms
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArucoPose_
{
  using Type = ArucoPose_<ContainerAllocator>;

  explicit ArucoPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
    }
  }

  explicit ArucoPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _yaw_type =
    double;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robocallee_fms::msg::ArucoPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const robocallee_fms::msg::ArucoPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robocallee_fms::msg::ArucoPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robocallee_fms::msg::ArucoPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robocallee_fms::msg::ArucoPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robocallee_fms::msg::ArucoPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robocallee_fms::msg::ArucoPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robocallee_fms::msg::ArucoPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robocallee_fms::msg::ArucoPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robocallee_fms::msg::ArucoPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robocallee_fms__msg__ArucoPose
    std::shared_ptr<robocallee_fms::msg::ArucoPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robocallee_fms__msg__ArucoPose
    std::shared_ptr<robocallee_fms::msg::ArucoPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArucoPose_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArucoPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArucoPose_

// alias to use template instance with default allocator
using ArucoPose =
  robocallee_fms::msg::ArucoPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robocallee_fms

#endif  // ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE__STRUCT_HPP_
