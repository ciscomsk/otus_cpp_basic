//
// Created by mike on 17.01.23.
//
#include <iostream>

void swap_naive(int a, int b) {
    int t = a;
    a = b;
    b = t;
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << "a b\n";
        return 1;
    }

    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);
    swap_naive(a, b);
    std::cout << a << " " << b << std::endl;

    return 0;
}