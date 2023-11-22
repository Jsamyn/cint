# CMake Version
cmake_minimum_required(VERSION 3.25)

set(target cint_tests)

# Enables CTest 
enable_testing()

# Fetch GoogleTest repo/lib and include in project
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.14.0
)

FetchContent_MakeAvailable(googletest)

# Find test files 
file(GLOB_RECURSE sources 
  LIST_DIRECTORIES false
  *.cpp
)

message(test = ${sources})

set(tests ${sources})

# Build test project
add_executable(${target} ${tests})

target_link_libraries(${target}
  GTest::gtest_main
  cint 
)

# Search for Tests
include(GoogleTest)
gtest_discover_tests(${target})