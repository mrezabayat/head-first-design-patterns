cmake_minimum_required(VERSION 3.30)

Project(WeatherStation)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED on)

add_executable(weather_station ${CMAKE_SOURCE_DIR}/src/main.cpp)
target_include_directories(weather_station PRIVATE ${CMAKE_SOURCE_DIR}/include)
