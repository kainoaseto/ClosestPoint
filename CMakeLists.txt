cmake_minimum_required(VERSION 3.6)
project(ClosestPoint)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Algo/ClosestPointsAlgo.cpp Algo/ClosestPointsAlgo.h Algo/DivideAndConquer.cpp Algo/DivideAndConquer.h Algo/BruteForce.cpp Algo/BruteForce.h pch.h)
add_executable(ClosestPoint ${SOURCE_FILES})