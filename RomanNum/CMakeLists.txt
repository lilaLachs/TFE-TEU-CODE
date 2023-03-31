project(MeinProjekt)
cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 20)

add_executable(aufgabe3)
target_sources(aufgabe3
    PRIVATE
	catch.hpp
        test.cpp)
