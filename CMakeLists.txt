cmake_minimum_required(VERSION 3.17)
project(CppGuide)

add_subdirectory(ptr)
set(CMAKE_CXX_STANDARD 17)

add_executable(CppGuide main.cpp)