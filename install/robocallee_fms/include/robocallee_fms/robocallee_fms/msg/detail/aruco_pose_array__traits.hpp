// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robocallee_fms:msg/ArucoPoseArray.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robocallee_fms/msg/aruco_pose_array.hpp"


#ifndef ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE_ARRAY__TRAITS_HPP_
#define ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robocallee_fms/msg/detail/aruco_pose_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'poses'
#include "robocallee_fms/msg/detail/aruco_pose__traits.hpp"

namespace robocallee_fms
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArucoPoseArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: poses
  {
    if (msg.poses.size() == 0) {
      out << "poses: []";
    } else {
      out << "poses: [";
      size_t pending_items = msg.poses.size();
      for (auto item : msg.poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArucoPoseArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArucoPoseArray & msg, bool use_flow_style = false)
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
  const robocallee_fms::msg::ArucoPoseArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  robocallee_fms::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robocallee_fms::msg::to_yaml() instead")]]
inline std::string to_yaml(const robocallee_fms::msg::ArucoPoseArray & msg)
{
  return robocallee_fms::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robocallee_fms::msg::ArucoPoseArray>()
{
  return "robocallee_fms::msg::ArucoPoseArray";
}

template<>
inline const char * name<robocallee_fms::msg::ArucoPoseArray>()
{
  return "robocallee_fms/msg/ArucoPoseArray";
}

template<>
struct has_fixed_size<robocallee_fms::msg::ArucoPoseArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robocallee_fms::msg::ArucoPoseArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robocallee_fms::msg::ArucoPoseArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOCALLEE_FMS__MSG__DETAIL__ARUCO_POSE_ARRAY__TRAITS_HPP_
