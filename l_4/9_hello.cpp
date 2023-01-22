//
// Created by mike on 17.01.23.
//
#include <iostream>
#include <fstream>

void greetings(const std::string &name, std::ostream &out = std::cout) {
    out << "Hello, " << name << std::endl;
}

int main(int argc, char *argv[]) {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    if (argc < 2) {
        greetings(name);
    } else {
        std::ofstream file(argv[1]);
        if (!file.is_open()) {
            std::cerr << "Failed to open: " << argv[1] << std::endl;
            return 1;
        }
        greetings(name, file);
    }

    return 0;
}