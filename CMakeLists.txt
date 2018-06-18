cmake_minimum_required(VERSION 3.6)   # CMake version check
project(IdChain)               # Create project "IdChain"
set(CMAKE_CXX_STANDARD 11)            # Enable c++11 standard

# Add main.cpp file of project root directory as source file
# set(SOURCE_FILES Block.cpp)
set(SOURCE_FILES main.cpp sha256.cpp Block.cpp BlockChain.cpp)

add_executable(IdChain ${SOURCE_FILES})       # Add executable target with source files listed in SOURCE_FILES variable