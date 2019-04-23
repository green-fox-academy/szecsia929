cmake_minimum_required(VERSION 3.13)
project(garden_application)

set(CMAKE_CXX_STANDARD 14)

add_executable(garden_application main.cpp Plant.cpp Plant.h Tree.cpp Tree.h flower.cpp flower.h Garden.cpp Garden.h)