cmake_minimum_required(VERSION 3.17)
project(PrimeNumberFinder)

set(CMAKE_CXX_STANDARD 14)

add_executable(PrimeNumberFinder main.cpp Number.h Number.cpp Lists/SkipList.h Lists/SkipList.cpp)