//
// Created by mike on 19.01.23.
//
#include <iostream>

void func(int *a) {
    if (a == nullptr) {
        return;
    }
    // ...
}

int main() {
    printf("%d %s", 10 + 20, "ddd");
    std::cout << std::endl << std::endl;

    int q = 4;
    int *ptrQ = &q;
    std::cout << "ptrQ = " << ptrQ << std::endl;
    std::cout << "*ptrQ = " << *ptrQ << std::endl;
    std::cout << std::endl;

    *ptrQ = 6;
    std::cout << "*ptrQ = " << *ptrQ << std::endl;
    std::cout << std::endl;

    int w = 10;
    ptrQ = &w;
    std::cout << "w = " << w << std::endl;
    std::cout << "ptrQ = " << ptrQ << std::endl;
    *ptrQ = 16;
    std::cout << "w = " << w << std::endl;
    std::cout << std::endl;

    int *ptrEmpty = nullptr;
    // Ссылка  всегда на что-то указывает, указатель может быть пустым (nullptr)
//    *ptrEmpty = 123;  // err

    int &ptrRef = q;
    ptrRef = 5;
    ++ptrRef;
    int q2 = ptrRef;

    return 0;
}
