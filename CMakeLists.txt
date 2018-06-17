cmake_minimum_required(VERSION 3.6)   # CMake version check
project(IdChain)               # Create project "IdChain"
set(CMAKE_CXX_STANDARD 11)            # Enable c++11 standard

set(SOURCE_FILES block.h)            # Add main.cpp file of project root directory as source file
set(SOURCE_FILES BlockChain.h)
set(SOURCE_FILES sha256.h)
set(SOURCE_FILES sha256.cpp)
add_executable(IdChain ${SOURCE_FILES})       # Add executable target with source files listed in SOURCE_FILES variable