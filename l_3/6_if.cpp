//
// Created by mike on 12.01.23.
//
#include <iostream>

int main(int, char *[]) {
    bool val1 = true;
    bool val2 = 1; // > 0 == true, 0 == false

    // 1. one-line statement
    if (false) {
        std::cout << "This condition is executed" << std::endl;
    }
    std::cout << "And this condition is executed in any case of if condition" << std::endl;
    std::cout << std::endl;

    // 2. multiline if
    bool condition_value = true;
    if (condition_value) {
        std::cout << "It contains a sequence of commands" << std::endl;
        int a = 364;
        std::cout << "a = " << a << std::endl;
    }
    std::cout << std::endl;

    // 3. if else
    bool condition_value_2 = true;
    if (!condition_value_2) {
        std::cout << "Condition is true --- " << std::endl;
        std::cout << "\t\t\t --- print out one more line" << std::endl;
    } else {
        std::cout << "Condition is false" << std::endl;
        int x = 100;
        int y = 200;
        std::cout << "Prefix increment:  ++x = " << ++x << std::endl;
        std::cout << "Postfix increment: y++ = " << y++ << std::endl;
    }
    std::cout << std::endl;

    // 4.1 if-else if-else
    int x = 51;
    if (x < 6 || (x % 2 == 0)) {
        std::cout << "First condition is selected" << std::endl;
    } else if (x > 1000) {
        std::cout << "Second condition is selected" << std::endl;
    } else if (x > 50 && (x % 17 == 0)) {
        std::cout << "Third condition is selected" << std::endl;
    } else {
        std::cout << "None of condition was selected" << std::endl;
    }
    std::cout << std::endl;

    // 4.2 if-else if-else without brackets
    if (x < 6 || (x % 2 == 0))
        std::cout << "First condition is selected" << std::endl;
    else if (x > 1000)
        std::cout << "Second condition is selected" << std::endl;
    else if (x > 50 && (x % 17 == 0))
        std::cout << "Third condition is selected" << std::endl;
    else
        std::cout << "None of condition was selected" << std::endl;
    std::cout << std::endl;

    // 5. Ternary operator
    // boolean-condition ? value-1 (true) : value-2 (false)
    int z = 10;
    int y = 100;
    int a = (z < y) ? 23 : 10000;
    std::cout << "(10 < 100) ? 23 : 10000 = " << a << std::endl;
    std::cout << std::endl;

    // nested ternary operator
    int bad_style = (z < y)
            ? x < 100 ? 1 : 23
            : x > 100 ? 1000: 100;

    auto val = (z < y) ? 23 : 1000;

//    z < y ? func1() : func2();

    // 6. Nested if
    int w1 = 234;
    if (w1 > 0) {
        if (w1 < 100) {
            std::cout << "w1 is less then 100" << std::endl;
        } else if (w1 > 200) {
            std::cout << "s1 is greater then 200" << std::endl;
        }
    }
    std::cout << std::endl;

    // 7. if with initializer (since C++17) - инициализация + проверка
    int part1 = 1;
    part1 += 10;
    int part2 = 2;
    part2 += 100;
    if (const auto sum = part1 + part2; sum > 0) {
        std::cout << "part1 + part2 = " << sum << std::endl;
    }
    std::cout << std::endl;

    // 8. constexpr if (since C++17) - условие рассчитывается во время компиляции
    if constexpr (const auto sum = 10 + 10; sum > 0) {
    // err - Constexpr if condition is not a constant expression
//    if constexpr (const auto sum = part1 + part2; sum > 0) {
        std::cout << "constexpr sum = " << sum << std::endl;
    }

    return 0;
}