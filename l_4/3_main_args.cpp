//
// Created by mike on 17.01.23.
//
#include <iostream>

// argc == argument counter
// char *argv[] - массив указателей на C-строки (кончаются \0)
int main(int argc, char *argv[]) {
    std::cout << "This program prints all passed command line arguments: " << std::endl;
    for (int i = 0; i < argc; ++i) {
        std::cout << i << ": " << argv[i] << "\n";
    }

    return 0;
}