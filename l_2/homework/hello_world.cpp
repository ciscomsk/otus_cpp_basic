//
// Created by mike on 11.01.23.
//
#include <iostream>
#include "example.h"

void todo_move_me_out() {
    std::cout << "This function should be located in the separated source file\n";
}

int main() {
    std::cout << "Hello, World!\n";

    example_function();
    todo_move_me_out();

    return 0;
}