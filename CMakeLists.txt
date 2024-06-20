cmake_minimum_required(VERSION 3.10)

project(MyFinalProject)

include_directories(include)
add_executable(MyFinalProject main.cpp)

target_link_libraries(MyFinalProject mylibrary)

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
