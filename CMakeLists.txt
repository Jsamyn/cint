# CMake Version 
cmake_minimum_required(VERSION 3.25)

set(target cint)

project(${target} LANGUAGES C CXX VERSION 0.0.1)

# Set C++ Version Requirements for Google Test
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add Configuration file so VERSION is accessible throughout project
configure_file(cint_version.h.in cint_version.h @ONLY)

# Gather C source files
file(GLOB_RECURSE sources
  ${CMAKE_CURRENT_SOURCE_DIR}/src/*.c
)

file(GLOB_RECURSE headers 
  ${CMAKE_CURRENT_SOURCE_DIR}/includes/*.h
)

set(src ${sources})
set(hdr ${headers})

# Add include directory
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/includes)

# Build project
add_library(${target} STATIC ${src} ${hdr})

# Help Windows generate symbols for library
set_target_properties(${target} PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS YES)

# Include generated configuration file
target_include_directories(${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR})

#Include CTest
include(CTest)

# Add Unit Testing
add_subdirectory(test)