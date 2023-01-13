//
// Created by mike on 13.01.23.
//
#include <iostream>
#include <bitset>

int main(int, char *[]) {
    // 1. Arithmetic progression sum
    const int n_size = 10;
    int sum = 0;

    // int i = 0    - 1st part: initialization - выполняется 1 раз
    // i < n_size   - 2nd part: end condition - выполняется на каждой итерации
    // ++i          - 3rd part: executor for each iteration - выполняется на каждой итерации
    for (int i = 0; i < n_size; ++i) {

        std::cout << i << " ";
        sum += 1;
    }
    std::cout << "\nsum = " << sum << std::endl;
    std::cout << std::endl;

    // 2.
    int i = 0;
    for(;;) {
        if (++i > 100) {
            break;
        }
    }
    std::cout << "i = " << i << std::endl;
    std::cout << std::endl;

    // 3. Overflow
    int j = 0;
    for (std::size_t k = 100; k >= 0; k += 3) {
        std::bitset<32> buffer(k);
        std::cout << k << " ";
        std::cout << buffer << std::endl;

        if (++j > 104) {
            break;
        }
    }
    std::cout << std::endl;

    // 4. Continue
    for (int i = 0; i < 10; ++i) {
        if (i % 2) {
            std::cout << "Start next iteration for i = " << i << std::endl;
            continue;
        }
        std::cout << "Full loop iteration for i = " << i << std::endl;
    }

    return 0;
}