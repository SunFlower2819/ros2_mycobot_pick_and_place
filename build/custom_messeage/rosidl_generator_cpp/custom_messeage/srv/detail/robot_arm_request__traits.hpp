// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_messeage:srv/RobotArmRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_messeage/srv/robot_arm_request.hpp"


#ifndef CUSTOM_MESSEAGE__SRV__DETAIL__ROBOT_ARM_REQUEST__TRAITS_HPP_
#define CUSTOM_MESSEAGE__SRV__DETAIL__ROBOT_ARM_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_messeage/srv/detail/robot_arm_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_messeage
{

namespace srv
{

inline void to_flow_style_yaml(
  const RobotArmRequest_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: shelf_num
  {
    out << "shelf_num: ";
    rosidl_generator_traits::value_to_yaml(msg.shelf_num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotArmRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: shelf_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shelf_num: ";
    rosidl_generator_traits::value_to_yaml(msg.shelf_num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotArmRequest_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_messeage

namespace rosidl_generator_traits
{

[[deprecated("use custom_messeage::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_messeage::srv::RobotArmRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_messeage::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_messeage::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_messeage::srv::RobotArmRequest_Request & msg)
{
  return custom_messeage::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_messeage::srv::RobotArmRequest_Request>()
{
  return "custom_messeage::srv::RobotArmRequest_Request";
}

template<>
inline const char * name<custom_messeage::srv::RobotArmRequest_Request>()
{
  return "custom_messeage/srv/RobotArmRequest_Request";
}

template<>
struct has_fixed_size<custom_messeage::srv::RobotArmRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_messeage::srv::RobotArmRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_messeage::srv::RobotArmRequest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace custom_messeage
{

namespace srv
{

inline void to_flow_style_yaml(
  const RobotArmRequest_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: shelf_num
  {
    out << "shelf_num: ";
    rosidl_generator_traits::value_to_yaml(msg.shelf_num, out);
    out << ", ";
  }

  // member: model
  {
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotArmRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: shelf_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shelf_num: ";
    rosidl_generator_traits::value_to_yaml(msg.shelf_num, out);
    out << "\n";
  }

  // member: model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << "\n";
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
    out << "\n";
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotArmRequest_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_messeage

namespace rosidl_generator_traits
{

[[deprecated("use custom_messeage::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_messeage::srv::RobotArmRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_messeage::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_messeage::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_messeage::srv::RobotArmRequest_Response & msg)
{
  return custom_messeage::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_messeage::srv::RobotArmRequest_Response>()
{
  return "custom_messeage::srv::RobotArmRequest_Response";
}

template<>
inline const char * name<custom_messeage::srv::RobotArmRequest_Response>()
{
  return "custom_messeage/srv/RobotArmRequest_Response";
}

template<>
struct has_fixed_size<custom_messeage::srv::RobotArmRequest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_messeage::srv::RobotArmRequest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_messeage::srv::RobotArmRequest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace custom_messeage
{

namespace srv
{

inline void to_flow_style_yaml(
  const RobotArmRequest_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotArmRequest_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotArmRequest_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace custom_messeage

namespace rosidl_generator_traits
{

[[deprecated("use custom_messeage::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_messeage::srv::RobotArmRequest_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_messeage::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_messeage::srv::to_yaml() instead")]]
inline std::string to_yaml(const custom_messeage::srv::RobotArmRequest_Event & msg)
{
  return custom_messeage::srv::to_yaml(msg);
}

template<>
inline const char * data_type<custom_messeage::srv::RobotArmRequest_Event>()
{
  return "custom_messeage::srv::RobotArmRequest_Event";
}

template<>
inline const char * name<custom_messeage::srv::RobotArmRequest_Event>()
{
  return "custom_messeage/srv/RobotArmRequest_Event";
}

template<>
struct has_fixed_size<custom_messeage::srv::RobotArmRequest_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_messeage::srv::RobotArmRequest_Event>
  : std::integral_constant<bool, has_bounded_size<custom_messeage::srv::RobotArmRequest_Request>::value && has_bounded_size<custom_messeage::srv::RobotArmRequest_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<custom_messeage::srv::RobotArmRequest_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_messeage::srv::RobotArmRequest>()
{
  return "custom_messeage::srv::RobotArmRequest";
}

template<>
inline const char * name<custom_messeage::srv::RobotArmRequest>()
{
  return "custom_messeage/srv/RobotArmRequest";
}

template<>
struct has_fixed_size<custom_messeage::srv::RobotArmRequest>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_messeage::srv::RobotArmRequest_Request>::value &&
    has_fixed_size<custom_messeage::srv::RobotArmRequest_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_messeage::srv::RobotArmRequest>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_messeage::srv::RobotArmRequest_Request>::value &&
    has_bounded_size<custom_messeage::srv::RobotArmRequest_Response>::value
  >
{
};

template<>
struct is_service<custom_messeage::srv::RobotArmRequest>
  : std::true_type
{
};

template<>
struct is_service_request<custom_messeage::srv::RobotArmRequest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_messeage::srv::RobotArmRequest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MESSEAGE__SRV__DETAIL__ROBOT_ARM_REQUEST__TRAITS_HPP_
