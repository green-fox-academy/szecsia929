cmake_minimum_required(VERSION 3.13)
project(blog)

set(CMAKE_CXX_STANDARD 14)

add_executable(blog main.cpp BlogPost.h BlogPost.cpp Blog.cpp Blog.h)