// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocallee_fms:msg/ArucoPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robocallee_fms/msg/aruco_pose.hpp"


#ifndef ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE__BUILDER_HPP_
#define ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robocallee_fms/msg/detail/aruco_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robocallee_fms
{

namespace msg
{

namespace builder
{

class Init_ArucoPose_yaw
{
public:
  explicit Init_ArucoPose_yaw(::robocallee_fms::msg::ArucoPose & msg)
  : msg_(msg)
  {}
  ::robocallee_fms::msg::ArucoPose yaw(::robocallee_fms::msg::ArucoPose::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocallee_fms::msg::ArucoPose msg_;
};

class Init_ArucoPose_y
{
public:
  explicit Init_ArucoPose_y(::robocallee_fms::msg::ArucoPose & msg)
  : msg_(msg)
  {}
  Init_ArucoPose_yaw y(::robocallee_fms::msg::ArucoPose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ArucoPose_yaw(msg_);
  }

private:
  ::robocallee_fms::msg::ArucoPose msg_;
};

class Init_ArucoPose_x
{
public:
  explicit Init_ArucoPose_x(::robocallee_fms::msg::ArucoPose & msg)
  : msg_(msg)
  {}
  Init_ArucoPose_y x(::robocallee_fms::msg::ArucoPose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ArucoPose_y(msg_);
  }

private:
  ::robocallee_fms::msg::ArucoPose msg_;
};

class Init_ArucoPose_id
{
public:
  Init_ArucoPose_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArucoPose_x id(::robocallee_fms::msg::ArucoPose::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ArucoPose_x(msg_);
  }

private:
  ::robocallee_fms::msg::ArucoPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocallee_fms::msg::ArucoPose>()
{
  return robocallee_fms::msg::builder::Init_ArucoPose_id();
}

}  // namespace robocallee_fms

#endif  // ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE__BUILDER_HPP_
