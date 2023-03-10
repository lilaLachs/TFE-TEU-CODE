cmake_minimum_required(VERSION 3.24)
project(Doctest)

set(CMAKE_CXX_STANDARD 20)

add_executable(Main main.cpp header.hpp funktion.cpp )
add_executable( Test doctest.hpp header.hpp funktion.cpp test.cpp)
