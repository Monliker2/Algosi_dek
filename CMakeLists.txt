cmake_minimum_required(VERSION 3.28)
project(Algosi_Deque)

set(CMAKE_CXX_STANDARD 17)

add_executable(Algosi_Deque main.cpp
        Deque.h
        Deque.cpp
        Deque_with_sort.cpp)
