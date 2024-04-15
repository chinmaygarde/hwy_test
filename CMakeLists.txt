cmake_minimum_required(VERSION 3.22)

set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(highway)

add_subdirectory(third_party/highway EXCLUDE_FROM_ALL)

add_executable(playground
  unittests.cc
)

target_link_libraries(playground
  gtest_main
  hwy
)
