cmake_minimum_required(VERSION 3.14)
project(pirates)

set(CMAKE_CXX_STANDARD 14)

add_executable(pirates main.cpp pirate.cpp pirate.h ship.cpp ship.h)