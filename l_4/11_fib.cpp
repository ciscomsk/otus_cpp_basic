//
// Created by mike on 17.01.23.
//
#include <iostream>

// Реализация через рекурсию крайне неэффективна
unsigned long fib(unsigned long n) {
    if (n < 2) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main(int argc, char *argv[]) {
    unsigned long n = 100;

    if (argc == 2) {
        long tmp = std::atol(argv[1]);
        if (tmp < 0) {
            std::cerr << "Only non-negative number allowed" << std::endl;
            return 1;
        }
        n = tmp;
    }

    for (unsigned long i = 0; i < n; ++i) {
        std::cout << fib(i) << std::endl;
    }

    return 0;
}