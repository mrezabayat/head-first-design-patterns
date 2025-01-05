cmake_minimum_required(VERSION 3.30)

project(Duck)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED on)

add_executable(duck ${CMAKE_SOURCE_DIR}/src/main.cpp)
target_include_directories(duck PRIVATE ${CMAKE_SOURCE_DIR}/include)