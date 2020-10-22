cmake_minimum_required(VERSION 3.17)
project(test1)

set(CMAKE_CXX_STANDARD 11)

add_executable(Lab1_1 src/Lab1/class/Main.cpp src/Lab1/class/Price.cpp)
add_executable(Lab1_2 src/Lab1/struct/Main.cpp src/Lab1/struct/Price.cpp)
add_executable(Lab2 src/Lab2/Main.cpp src/Lab2/Product.cpp src/Lab2/Thing.cpp)