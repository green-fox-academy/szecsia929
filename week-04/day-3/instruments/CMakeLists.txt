cmake_minimum_required(VERSION 3.13)
project(instruments)

set(CMAKE_CXX_STANDARD 14)

add_executable(instruments main.cpp instrument.cpp instrument.h stringedinstrument.cpp stringedinstrument.h electricguitar.cpp electricguitar.h bassguitar.cpp bassguitar.h violin.cpp violin.h)