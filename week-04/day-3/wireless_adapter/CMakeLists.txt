cmake_minimum_required(VERSION 3.13)
project(wireless_adapter)

set(CMAKE_CXX_STANDARD 14)

add_executable(wireless_adapter main.cpp device.cpp device.h usbdevice.cpp usbdevice.h networkdevice.cpp networkdevice.h wirelessadapter.cpp wirelessadapter.h)