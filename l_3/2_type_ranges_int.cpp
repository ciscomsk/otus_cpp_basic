//
// Created by mike on 12.01.23.
//
#include <iostream>
#include <iomanip>
#include <limits>

int main(int, char *[]) {
    const unsigned int text_width = 18;
    const unsigned int digit_width = 20;

    int16_t i16;
    uint16_t ui16;
    int32_t i32;

    // short
    std::cout << std::endl << std::setw(text_width) << "short";
    std::cout << std::setw(text_width) << "size = " << sizeof(short) << " byte(s)";
    std::cout << std::setw(text_width) << "min value = ";
    std::cout << std::setw(digit_width) << std::numeric_limits<short>::min();
    std::cout << std::setw(text_width) << "max value = ";
    std::cout << std::setw(digit_width) << std::numeric_limits<short>::max();

    // unsigned short
    std::cout << std::endl << std::setw(text_width) << "unsigned short";
    std::cout << std::setw(text_width) << "size = " << sizeof(unsigned short) << " byte(s)";
    std::cout << std::setw(text_width) << "min value = ";
    std::cout << std::setw(digit_width) << std::numeric_limits<unsigned short>::min();
    std::cout << std::setw(text_width) << "max value = ";
    std::cout << std::setw(digit_width) << std::numeric_limits<unsigned short>::max();
    std::cout << std::endl;


    // int
    std::cout << std::endl << std::setw(text_width) << "int";
    std::cout << std::setw(text_width) << "size = " << sizeof(int) << " byte(s)";
    std::cout << std::setw(text_width) << "min value = ";
    std::cout << std::setw(digit_width) << std::numeric_limits<int>::min();
    std::cout << std::setw(text_width) << "max value = ";
    std::cout << std::setw(digit_width) << std::numeric_limits<int>::max();

    // unsigned int
    std::cout << std::endl << std::setw(text_width) << "unsigned int";
    std::cout << std::setw(text_width) << "size = " << sizeof(unsigned int) << " byte(s)";
    std::cout << std::setw(text_width) << "min value = ";
    std::cout << std::setw(digit_width) << std::numeric_limits<unsigned int>::min();
    std::cout << std::setw(text_width) << "max value = ";
    std::cout << std::setw(digit_width) << std::numeric_limits<unsigned int>::max();
    std::cout << std::endl;


    // long
    std::cout << std::endl << std::setw(text_width) << "long";
    std::cout << std::setw(text_width) << "size = " << sizeof(long) << " byte(s)";
    std::cout << std::setw(text_width) << "min value = ";
    std::cout << std::setw(digit_width) << std::numeric_limits<long>::min();
    std::cout << std::setw(text_width) << "max value = ";
    std::cout << std::setw(digit_width) << std::numeric_limits<long>::max();

    // unsigned long
    std::cout << std::endl << std::setw(text_width) << "unsigned long";
    std::cout << std::setw(text_width) << "size = " << sizeof(unsigned long) << " byte(s)";
    std::cout << std::setw(text_width) << "min value = ";
    std::cout << std::setw(digit_width) << std::numeric_limits<unsigned long>::min();
    std::cout << std::setw(text_width) << "max value = ";
    std::cout << std::setw(digit_width) << std::numeric_limits<unsigned long>::max();
    std::cout << std::endl;


    // long long
    std::cout << std::endl << std::setw(text_width) << "long long";
    std::cout << std::setw(text_width) << "size = " << sizeof(long long) << " byte(s)";
    std::cout << std::setw(text_width) << "min value = ";
    std::cout << std::setw(digit_width) << std::numeric_limits<long long>::min();
    std::cout << std::setw(text_width) << "max value = ";
    std::cout << std::setw(digit_width) << std::numeric_limits<long long>::max();

    // unsigned long long
    std::cout << std::endl << std::setw(text_width) << "unsigned long long";
    std::cout << std::setw(text_width) << "size = " << sizeof(unsigned long long) << " byte(s)";
    std::cout << std::setw(text_width) << "min value = ";
    std::cout << std::setw(digit_width) << std::numeric_limits<unsigned long long>::min();
    std::cout << std::setw(text_width) << "max value = ";
    std::cout << std::setw(digit_width) << std::numeric_limits<unsigned long long>::max();
    std::cout << std::endl;

    // unsigned size_t
    size_t ex = 1;
    std::cout << std::endl << std::setw(text_width) << "std::size_t";
    std::cout << std::setw(text_width) << "size = " << sizeof(std::size_t) << " byte(s)";
    std::cout << std::setw(text_width) << "min value = ";
    std::cout << std::setw(digit_width) << std::numeric_limits<std::size_t>::min();
    std::cout << std::setw(text_width) << "max value = ";
    std::cout << std::setw(digit_width) << std::numeric_limits<std::size_t>::max();

    return 0;
}