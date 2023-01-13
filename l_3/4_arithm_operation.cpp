//
// Created by mike on 12.01.23.
//
#include <iostream>

int main(int, char *[]) {
    // Integer types
    int a(0);
    int b = -123;
    int d{456};
    std::cout << "a(0) = " << a << ", b = " << b << ", d{456} = " << d << std::endl;

    // Implicit conversion from 'long' to 'int' changes value from 9223372036854775807 to -1
    int d1 = 9223372036854775807L;

    // err - Constant expression evaluates to 9223372036854775807 which cannot be narrowed to type 'int'
//    int d2{9223372036854775807L};

    // err - Type 'double' cannot be narrowed to 'int' in initializer list
//    int d2{123.45};

    std::cout << "int d1 = 9223372036854775807L = " << d1 << std::endl;

    int sum1 = a + b * 2;
    std::cout << sum1 << std::endl;
    sum1 = 2345;

    short x = 15;
    x = x / 4;
    std::cout << "15 / 4 = " << x << std::endl;

    x /= 2;
    std::cout << "3 /= 2 = " << x << std::endl;
    std::cout << std::endl;


    // Float types
    double x1 = 12.1;
    std::cout << "double x1 = 12.1 = " << x1 << std::endl;

    x1 -= 5.2;
    std::cout << "12.1 -= 5.2 = " << x1 << std::endl;


    // auto
    auto f = 4;
    auto g = 3e-5f;
    auto h = 9223372036854775807L;

    return 0;
}

