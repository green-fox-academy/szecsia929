cmake_minimum_required(VERSION 3.13)
project(animals_in_zoo)

set(CMAKE_CXX_STANDARD 14)

add_executable(animals_in_zoo main.cpp animal.cpp animal.h layegg.h miniature.h reptile.cpp reptile.h bird.cpp bird.h mammal.cpp mammal.h)