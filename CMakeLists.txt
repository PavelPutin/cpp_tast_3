cmake_minimum_required(VERSION 3.27)
project(cpp_tast_3)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_tast_3 main.cpp
        Pueque_lib/Pueque.h)

add_subdirectory(Pueque_lib)
add_subdirectory(Google_tests)

include_directories(Pueque_lib Google_tests)

target_link_libraries(cpp_tast_3 Pueque_lib gtest gtest_main)
