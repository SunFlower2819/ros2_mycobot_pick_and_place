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

class Init_RobotArmRequest_Request_shelf_num
{
public:
  explicit Init_RobotArmRequest_Request_shelf_num(::custom_messeage::srv::RobotArmRequest_Request & msg)
  : msg_(msg)
  {}
  ::custom_messeage::srv::RobotArmRequest_Request shelf_num(::custom_messeage::srv::RobotArmRequest_Request::_shelf_num_type arg)
  {
    msg_.shelf_num = std::move(arg);
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
  Init_RobotArmRequest_Request_shelf_num action(::custom_messeage::srv::RobotArmRequest_Request::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_RobotArmRequest_Request_shelf_num(msg_);
  }

private:
  ::custom_messeage::srv::RobotArmRequest_Request msg_;
};

class Init_RobotArmRequest_Request_amr_id
{
public:
  Init_RobotArmRequest_Request_amr_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotArmRequest_Request_action amr_id(::custom_messeage::srv::RobotArmRequest_Request::_amr_id_type arg)
  {
    msg_.amr_id = std::move(arg);
    return Init_RobotArmRequest_Request_action(msg_);
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
  return custom_messeage::srv::builder::Init_RobotArmRequest_Request_amr_id();
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
  explicit Init_RobotArmRequest_Response_success(::custom_messeage::srv::RobotArmRequest_Response & msg)
  : msg_(msg)
  {}
  ::custom_messeage::srv::RobotArmRequest_Response success(::custom_messeage::srv::RobotArmRequest_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_messeage::srv::RobotArmRequest_Response msg_;
};

class Init_RobotArmRequest_Response_color
{
public:
  explicit Init_RobotArmRequest_Response_color(::custom_messeage::srv::RobotArmRequest_Response & msg)
  : msg_(msg)
  {}
  Init_RobotArmRequest_Response_success color(::custom_messeage::srv::RobotArmRequest_Response::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_RobotArmRequest_Response_success(msg_);
  }

private:
  ::custom_messeage::srv::RobotArmRequest_Response msg_;
};

class Init_RobotArmRequest_Response_size
{
public:
  explicit Init_RobotArmRequest_Response_size(::custom_messeage::srv::RobotArmRequest_Response & msg)
  : msg_(msg)
  {}
  Init_RobotArmRequest_Response_color size(::custom_messeage::srv::RobotArmRequest_Response::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_RobotArmRequest_Response_color(msg_);
  }

private:
  ::custom_messeage::srv::RobotArmRequest_Response msg_;
};

class Init_RobotArmRequest_Response_model
{
public:
  explicit Init_RobotArmRequest_Response_model(::custom_messeage::srv::RobotArmRequest_Response & msg)
  : msg_(msg)
  {}
  Init_RobotArmRequest_Response_size model(::custom_messeage::srv::RobotArmRequest_Response::_model_type arg)
  {
    msg_.model = std::move(arg);
    return Init_RobotArmRequest_Response_size(msg_);
  }

private:
  ::custom_messeage::srv::RobotArmRequest_Response msg_;
};

class Init_RobotArmRequest_Response_action
{
public:
  explicit Init_RobotArmRequest_Response_action(::custom_messeage::srv::RobotArmRequest_Response & msg)
  : msg_(msg)
  {}
  Init_RobotArmRequest_Response_model action(::custom_messeage::srv::RobotArmRequest_Response::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_RobotArmRequest_Response_model(msg_);
  }

private:
  ::custom_messeage::srv::RobotArmRequest_Response msg_;
};

class Init_RobotArmRequest_Response_amr_id
{
public:
  explicit Init_RobotArmRequest_Response_amr_id(::custom_messeage::srv::RobotArmRequest_Response & msg)
  : msg_(msg)
  {}
  Init_RobotArmRequest_Response_action amr_id(::custom_messeage::srv::RobotArmRequest_Response::_amr_id_type arg)
  {
    msg_.amr_id = std::move(arg);
    return Init_RobotArmRequest_Response_action(msg_);
  }

private:
  ::custom_messeage::srv::RobotArmRequest_Response msg_;
};

class Init_RobotArmRequest_Response_robot_id
{
public:
  Init_RobotArmRequest_Response_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotArmRequest_Response_amr_id robot_id(::custom_messeage::srv::RobotArmRequest_Response::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RobotArmRequest_Response_amr_id(msg_);
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
  return custom_messeage::srv::builder::Init_RobotArmRequest_Response_robot_id();
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
