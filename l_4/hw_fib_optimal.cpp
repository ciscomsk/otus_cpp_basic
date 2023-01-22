//
// Created by mike on 19.01.23.
//
#include <iostream>

// https://younglinux.info/algorithm/fibonacci
unsigned long fib(unsigned int f1, unsigned int f2, unsigned int n) {
    if (n <= 2) {
        std::cerr << "n must be greater than 2" << std::endl;
        return 1;
    }

    unsigned int i = 0;
    unsigned long fsum = 0;

    while (i < n - 2) {
        fsum = f1 + f2;
        f1 = f2;
        f2 = fsum;
        i += 1;
    }

    return fsum;
}

int main() {
    // Incorrect arg
    std::cout << "fib(0, 1, 0) = " << fib(0, 1, 0) << std::endl;
    std::cout << "fib(0, 1, 1) = " << fib(0, 1, 1) << std::endl;
    std::cout << "fib(0, 1, 2) = " << fib(0, 1, 2) << std::endl;
    std::cout << std::endl;

    std::cout << "fib(0, 1, 3) = " << fib(0, 1, 3) << std::endl;
    std::cout << "fib(0, 1, 5) = " << fib(0, 1, 5) << std::endl;
    std::cout << "fib(0, 1, 100) = " << fib(0, 1, 100) << std::endl;

    return 0;
}