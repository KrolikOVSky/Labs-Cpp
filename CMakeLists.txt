cmake_minimum_required(VERSION 3.17)
project(test1)

set(CMAKE_CXX_STANDARD 11)

add_executable(Lab1_1 src/Lab1/class/Main.cpp src/Lab1/class/Price.h)
add_executable(Lab1_2 src/Lab1/struct/Main.cpp src/Lab1/struct/Price.h)
add_executable(temp_1 src/temp/temp1.cpp src/temp/temp2.cpp src/temp/temp2.h)