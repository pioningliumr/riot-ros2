# RIOT-ROS2

This project enables ROS2 to run on microcontrollers using the RIOT Operating System.

# Architecture

ROS2 is composed of sevral layers. Some have been modified to be able to run on microcontroller.
Here is a summary of the main difference between the ROS2 stack and the RIOT-ROS2 stack :

| Layers | ROS2 | RIOT-ROS2 |
|-|-|-|
| RCLC (ROS Client Library for C) | API only | implemented, following the API |
| RCLCPP (ROS Client Library for C++) | implemented | only supported on `native` board |
| RCLPY (ROS Client Library for Python) | implemented | not supported |
| RCL (ROS Client Library) | implemented | `timer.c` modified |
| RMW (ROS MiddleWare) | Based on DDS | 2 implementations : `ndn-riot` and `emcute` |
| rosidl | DDS, introspection | only introspection |

# Usage

## Clone the project

```sh
git clone https://github.com/astralien3000/riot-ros2.git --recursive
cd riot-ros2
```

Despite there is a Makefile at the root of the repository, you cannot call `make`.

## Linux example : NDN

First, setup the tap interface :

```sh
./RIOT/dist/tools/tapsetup/tapsetup
```

On a first terminal : 

```sh
(cd examples/talker_c && make PORT=tap0 all term)
```

On a second terminal : 

```sh
(cd examples/listener_c && make PORT=tap1 all term)
```