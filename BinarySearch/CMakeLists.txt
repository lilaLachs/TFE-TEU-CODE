cmake_minimum_required(VERSION 3.24)
project(Binary_Search)

set(CMAKE_CXX_STANDARD 17)

add_executable(Binary_Search test.cpp catch.hpp Binary_Search.h Binary_Search.cpp)
