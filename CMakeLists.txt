# CMake Version 
cmake_minimum_required(VERSION 3.25)

set(target cint)

# Set C++ Version Requirements for Google Test
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(${target} LANGUAGES C CXX VERSION 0.0.1)

# Add Configuration file so VERSION is accessible throughout project
configure_file(cint_version.h.in cint_version.h @ONLY)

# Gather C source files
file(GLOB_RECURSE sources
  ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c
)

set(src ${sources})

# Add include directory
include_directories(includes)

# Build project
add_library(${target} ${src})

# Include generated configuration file
target_include_directories(${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR})

#Include CTest
include(CTest)

# Add Unit Testing
add_subdirectory(test)