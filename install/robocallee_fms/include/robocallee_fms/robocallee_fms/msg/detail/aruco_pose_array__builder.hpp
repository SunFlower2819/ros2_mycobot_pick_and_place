// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robocallee_fms:msg/ArucoPoseArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robocallee_fms/msg/aruco_pose_array.hpp"


#ifndef ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE_ARRAY__BUILDER_HPP_
#define ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robocallee_fms/msg/detail/aruco_pose_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robocallee_fms
{

namespace msg
{

namespace builder
{

class Init_ArucoPoseArray_count
{
public:
  explicit Init_ArucoPoseArray_count(::robocallee_fms::msg::ArucoPoseArray & msg)
  : msg_(msg)
  {}
  ::robocallee_fms::msg::ArucoPoseArray count(::robocallee_fms::msg::ArucoPoseArray::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robocallee_fms::msg::ArucoPoseArray msg_;
};

class Init_ArucoPoseArray_poses
{
public:
  explicit Init_ArucoPoseArray_poses(::robocallee_fms::msg::ArucoPoseArray & msg)
  : msg_(msg)
  {}
  Init_ArucoPoseArray_count poses(::robocallee_fms::msg::ArucoPoseArray::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_ArucoPoseArray_count(msg_);
  }

private:
  ::robocallee_fms::msg::ArucoPoseArray msg_;
};

class Init_ArucoPoseArray_header
{
public:
  Init_ArucoPoseArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArucoPoseArray_poses header(::robocallee_fms::msg::ArucoPoseArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ArucoPoseArray_poses(msg_);
  }

private:
  ::robocallee_fms::msg::ArucoPoseArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robocallee_fms::msg::ArucoPoseArray>()
{
  return robocallee_fms::msg::builder::Init_ArucoPoseArray_header();
}

}  // namespace robocallee_fms

#endif  // ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE_ARRAY__BUILDER_HPP_
