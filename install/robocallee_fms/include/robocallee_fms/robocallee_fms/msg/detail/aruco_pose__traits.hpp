// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robocallee_fms:msg/ArucoPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robocallee_fms/msg/aruco_pose.hpp"


#ifndef ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE__TRAITS_HPP_
#define ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robocallee_fms/msg/detail/aruco_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robocallee_fms
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArucoPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArucoPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArucoPose & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robocallee_fms

namespace rosidl_generator_traits
{

[[deprecated("use robocallee_fms::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robocallee_fms::msg::ArucoPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  robocallee_fms::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robocallee_fms::msg::to_yaml() instead")]]
inline std::string to_yaml(const robocallee_fms::msg::ArucoPose & msg)
{
  return robocallee_fms::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robocallee_fms::msg::ArucoPose>()
{
  return "robocallee_fms::msg::ArucoPose";
}

template<>
inline const char * name<robocallee_fms::msg::ArucoPose>()
{
  return "robocallee_fms/msg/ArucoPose";
}

template<>
struct has_fixed_size<robocallee_fms::msg::ArucoPose>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robocallee_fms::msg::ArucoPose>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robocallee_fms::msg::ArucoPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE__TRAITS_HPP_
