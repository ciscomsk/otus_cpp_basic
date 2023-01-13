//
// Created by mike on 12.01.23.
//
#include <iostream>
#include <string>

int main() {
    int value1, value2;  // будут на стеке
    std::string name;

    // cout == Console OUTput
    std::cout << "Input your name: " << std::endl;
    // cin == Console INput
    std::cin >> name;

    std::cout << "Input your name (without endl): ";
    std::cin >> name;

    std::cout << "Input value 1 and value2: " << std::endl;
    std::cin >> value1 >>value2;

    std::cout << "Hi (without endl), " << name << std::endl;
    std::cout << "Hi, " << name << std::endl;
    std::cout << "Sum of two values is: " << value1 + value2 << std::endl;

    return 0;
}
