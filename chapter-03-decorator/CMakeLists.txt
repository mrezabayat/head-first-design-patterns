cmake_minimum_required(VERSION 3.30)

project(chapter-03-decorator)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(StarBuzz ${CMAKE_SOURCE_DIR}/src/main.cpp)
include_directories(${CMAKE_SOURCE_DIR}/include)