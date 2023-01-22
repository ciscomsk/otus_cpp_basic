//
// Created by mike on 22.01.23.
//
#include <iostream>
#include <ctime>

int main() {
    // use current time as seed foe random generator
    std::srand(std::time(nullptr));
    const int random_value = std::rand() % 100;
    std::cout << random_value << std::endl;

    return 0;
}