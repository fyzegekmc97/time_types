cmake_minimum_required(VERSION 3.21)
project(time_types C)

set(CMAKE_C_STANDARD 99)

add_executable(time_types main.c Coordinate_Types.c Coordinate_Types.h Time_types.c Time_types.h)
