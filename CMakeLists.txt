cmake_minimum_required(VERSION 3.8)
project(Testerinos)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Node.h List.h Iterator.h Node.cpp List.cpp Iterator.cpp)
add_executable(Testerinos ${SOURCE_FILES})