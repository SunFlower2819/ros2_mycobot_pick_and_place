// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_messeage:srv/RobotArmRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_messeage/srv/robot_arm_request.hpp"


#ifndef CUSTOM_MESSEAGE__SRV__DETAIL__ROBOT_ARM_REQUEST__BUILDER_HPP_
#define CUSTOM_MESSEAGE__SRV__DETAIL__ROBOT_ARM_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_messeage/srv/detail/robot_arm_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_messeage
{

namespace srv
{

namespace builder
{

class Init_RobotArmRequest_Request_shoe_info
{
public:
  explicit Init_RobotArmRequest_Request_shoe_info(::custom_messeage::srv::RobotArmRequest_Request & msg)
  : msg_(msg)
  {}
  ::custom_messeage::srv::RobotArmRequest_Request shoe_info(::custom_messeage::srv::RobotArmRequest_Request::_shoe_info_type arg)
  {
    msg_.shoe_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messeage::srv::RobotArmRequest_Request msg_;
};

class Init_RobotArmRequest_Request_action
{
public:
  explicit Init_RobotArmRequest_Request_action(::custom_messeage::srv::RobotArmRequest_Request & msg)
  : msg_(msg)
  {}
  Init_RobotArmRequest_Request_shoe_info action(::custom_messeage::srv::RobotArmRequest_Request::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_RobotArmRequest_Request_shoe_info(msg_);
  }

private:
  ::custom_messeage::srv::RobotArmRequest_Request msg_;
};

class Init_RobotArmRequest_Request_pinky_num
{
public:
  explicit Init_RobotArmRequest_Request_pinky_num(::custom_messeage::srv::RobotArmRequest_Request & msg)
  : msg_(msg)
  {}
  Init_RobotArmRequest_Request_action pinky_num(::custom_messeage::srv::RobotArmRequest_Request::_pinky_num_type arg)
  {
    msg_.pinky_num = std::move(arg);
    return Init_RobotArmRequest_Request_action(msg_);
  }

private:
  ::custom_messeage::srv::RobotArmRequest_Request msg_;
};

class Init_RobotArmRequest_Request_shelf_num
{
public:
  Init_RobotArmRequest_Request_shelf_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotArmRequest_Request_pinky_num shelf_num(::custom_messeage::srv::RobotArmRequest_Request::_shelf_num_type arg)
  {
    msg_.shelf_num = std::move(arg);
    return Init_RobotArmRequest_Request_pinky_num(msg_);
  }

private:
  ::custom_messeage::srv::RobotArmRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messeage::srv::RobotArmRequest_Request>()
{
  return custom_messeage::srv::builder::Init_RobotArmRequest_Request_shelf_num();
}

}  // namespace custom_messeage


namespace custom_messeage
{

namespace srv
{

namespace builder
{

class Init_RobotArmRequest_Response_success
{
public:
  Init_RobotArmRequest_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_messeage::srv::RobotArmRequest_Response success(::custom_messeage::srv::RobotArmRequest_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messeage::srv::RobotArmRequest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messeage::srv::RobotArmRequest_Response>()
{
  return custom_messeage::srv::builder::Init_RobotArmRequest_Response_success();
}

}  // namespace custom_messeage


namespace custom_messeage
{

namespace srv
{

namespace builder
{

class Init_RobotArmRequest_Event_response
{
public:
  explicit Init_RobotArmRequest_Event_response(::custom_messeage::srv::RobotArmRequest_Event & msg)
  : msg_(msg)
  {}
  ::custom_messeage::srv::RobotArmRequest_Event response(::custom_messeage::srv::RobotArmRequest_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messeage::srv::RobotArmRequest_Event msg_;
};

class Init_RobotArmRequest_Event_request
{
public:
  explicit Init_RobotArmRequest_Event_request(::custom_messeage::srv::RobotArmRequest_Event & msg)
  : msg_(msg)
  {}
  Init_RobotArmRequest_Event_response request(::custom_messeage::srv::RobotArmRequest_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_RobotArmRequest_Event_response(msg_);
  }

private:
  ::custom_messeage::srv::RobotArmRequest_Event msg_;
};

class Init_RobotArmRequest_Event_info
{
public:
  Init_RobotArmRequest_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotArmRequest_Event_request info(::custom_messeage::srv::RobotArmRequest_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_RobotArmRequest_Event_request(msg_);
  }

private:
  ::custom_messeage::srv::RobotArmRequest_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_messeage::srv::RobotArmRequest_Event>()
{
  return custom_messeage::srv::builder::Init_RobotArmRequest_Event_info();
}

}  // namespace custom_messeage

#endif  // CUSTOM_MESSEAGE__SRV__DETAIL__ROBOT_ARM_REQUEST__BUILDER_HPP_
