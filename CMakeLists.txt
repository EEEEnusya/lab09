cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(bubble_sort)

add_executable(pigi ./pigi/pigi.cpp)

include_directories(./bibipin)
add_subdirectory(./jerk bubblesort)

target_link_libraries(pigi jerk)