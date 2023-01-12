cmake_minimum_required(VERSION 3.15)

project(l_2_hw CXX)

add_executable(hw_2
        hello_world.cpp
        example.cpp
        example.h
)

set_target_properties(hw_2 PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(hw_2 PRIVATE -Wall -Wextra -Werror -pedantic)
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    target_compile_options(hw_2 PRIVATE /EHsc /W4 /WX)
endif()