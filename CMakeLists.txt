cmake_minimum_required(VERSION 3.8)
project(Testerinos)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp List.h Iterator.h List.cpp Iterator.cpp Link.h)
add_executable(Testerinos ${SOURCE_FILES})