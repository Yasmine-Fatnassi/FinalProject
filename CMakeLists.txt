cmake_minimum_required(VERSION 3.10)

project(MyFinalProject)

include_directories(include)
add_executable(MyFinalProject main.cpp)

target_link_libraries(MyFinalProject mylibrary)

add_subdirectory(src)
