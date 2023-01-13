cmake_minimum_required(VERSION 3.15)

project(l_3_syntax)

add_executable(1_1_cin_cout 1_1_cin_cout.cpp)
add_executable(1_2_cin_cout_using 1_2_cin_cout_using.cpp)
add_executable(1_3_cin_cout_namespace 1_3_cin_cout_namespace.cpp)
add_executable(2_type_ranges_int 2_type_ranges_int.cpp)
add_executable(3_type_ranges_float 3_type_ranges_float.cpp)
add_executable(4_arithm_operation 4_arithm_operation.cpp)
add_executable(5_bool_logic 5_bool_logic.cpp)
add_executable(6_if 6_if.cpp)
add_executable(7_switch 7_switch.cpp)
add_executable(8_while_do_loop 8_while_do_loop.cpp)
add_executable(9_for_loop 9_for_loop.cpp)
add_executable(10_file_io 10_file_io.cpp)
add_executable(xx_cats_int_float xx_cats_int_float.cpp)

set_target_properties(
        1_1_cin_cout
        1_2_cin_cout_using
        1_3_cin_cout_namespace
        2_type_ranges_int
        3_type_ranges_float
        4_arithm_operation
        5_bool_logic
        6_if
        7_switch
        8_while_do_loop
        9_for_loop
        10_file_io
        xx_cats_int_float
PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)
