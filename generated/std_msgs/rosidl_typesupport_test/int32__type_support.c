// generated from rosidl_typesupport_test/resource/msg__type_support.c.em
// generated code does not contain a copyright notice


// providing offsetof()
#include <stddef.h>
#include <stdio.h>
#include <cbor.h>

#include <std_msgs/msg/int32__test_type_support.h>
#include "std_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rosidl_typesupport_test/field_types.h"
#include "rosidl_typesupport_test/identifier.h"
#include "rosidl_typesupport_test/message_introspection.h"

#include "std_msgs/msg/int32__struct.h"

#if __cplusplus
extern "C"
{
#endif


static rosidl_typesupport_test__MessageMember std_msgs__msg__rosidl_typesupport_test__Int32_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_test__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(std_msgs__msg__Int32, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

size_t std_msgs__msg__rosidl_typesupport_test__Int32_serialize(const void* ros_message, char* buffer, size_t buffer_size) {
    const std_msgs__msg__Int32* msg = ros_message;
    size_t ret = 0;
    cbor_stream_t stream;
    cbor_init(&stream, (unsigned char*)buffer, buffer_size);
    cbor_clear(&stream);
    ret += cbor_serialize_int(&stream, msg->data);
    return ret;
}

size_t std_msgs__msg__rosidl_typesupport_test__Int32_deserialize(void* ros_message, const char* buffer, size_t buffer_size) {
    std_msgs__msg__Int32* msg = ros_message;
    size_t ret = 0;
    cbor_stream_t stream;
    cbor_init(&stream, (unsigned char*)buffer, buffer_size);
    stream.pos = buffer_size;
    ret += cbor_deserialize_int(&stream, ret, &msg->data);
    return ret;
}

static const rosidl_typesupport_test__MessageMembers std_msgs__msg__rosidl_typesupport_test__Int32_message_members = {
  "std_msgs",  // package name
  "Int32",  // message name
  1,  // number of fields
  std_msgs__msg__rosidl_typesupport_test__Int32_message_member_array,
  std_msgs__msg__rosidl_typesupport_test__Int32_serialize,
  std_msgs__msg__rosidl_typesupport_test__Int32_deserialize
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t std_msgs__msg__rosidl_typesupport_test__Int32_message_type_support_handle = {
  0,
  &std_msgs__msg__rosidl_typesupport_test__Int32_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_GENERATOR_C_EXPORT_std_msgs
const rosidl_message_type_support_t *
ROSIDL_GET_TYPE_SUPPORT_FUNCTION(std_msgs, msg, Int32)() {
  if (!std_msgs__msg__rosidl_typesupport_test__Int32_message_type_support_handle.typesupport_identifier) {
    std_msgs__msg__rosidl_typesupport_test__Int32_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_test__identifier;
  }
  return &std_msgs__msg__rosidl_typesupport_test__Int32_message_type_support_handle;
}

#if __cplusplus
}
#endif
