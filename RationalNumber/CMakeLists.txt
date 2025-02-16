cmake_minimum_required(VERSION 3.30)
project(rational)

set(CMAKE_CXX_STANDARD 20)

add_executable(rational main.cpp
        gcd.h
        rational.h)
