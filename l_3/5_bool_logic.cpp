//
// Created by mike on 12.01.23.
//
#include <iostream>
#include <bitset>

int main() {
    bool b = true;
    std::cout << "Size of bool type = " << sizeof(bool) << std::endl;

    bool b2 = b && false;
    bool b3 = b || false;
    bool b4 = !false;
    std::cout << "true && false = " << b2 << ", true || false = " << b3 << ", !false = " << b4 << std::endl;
    std::cout << std::endl;

    unsigned int x = 2;         // == 0010
    unsigned int y = 3;         // == 0011

    // Побитовые операции
    unsigned int r1 = x & y;    // == 0010
    unsigned int r2 = x | y;    // == 0011
    unsigned int r3 = x ^ y;    // == 0001  исключающее или

    std::cout << "2 & 3 = " << r1 << " == " <<  std::bitset<4>{r1} << std::endl;
    std::cout << "2 | 3 = " << r2 << " == " <<  std::bitset<4>{r2} << std::endl;
    std::cout << "2 ^ 3 = " << r3 << " == " <<  std::bitset<4>{r3} << std::endl;

    return 0;
}