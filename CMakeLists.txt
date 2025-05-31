cmake_minimum_required(VERSION 3.31)
project(LearnCpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(LearnCpp main.cpp
        Chap1Ex/io.cpp
        Chap1Ex/io.h
        Chap4Ex/ex2.cpp
        Chap4Ex/Ex.h
        Chap7/Ex.cpp
        Chap7/constant.h
        Chap8/calculate_height_tower.cpp
        Chap8/calc.h
        Chap8/prime.cpp
        Chap8/prime.h
        Chap8/hifi_game.h
        Chap8/hifi_game.cpp
)
