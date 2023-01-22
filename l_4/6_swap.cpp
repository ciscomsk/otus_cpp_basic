//
// Created by mike on 17.01.23.
//
#include <iostream>

//void swap(int &a, int &b) {
//    int t = a;
//    a = b;
//    b = t;
//}

// function overload
//void swap(float &a, float &b) {
//    float t = a;
//    a = b;
//    b = t;
//}

//template<typename T>
//void swap(T &a, T &b) {
//    auto t = a;
//    a = b;
//    b = t;
//}

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Возврат нескольких значений из функции - выходные (out) параметры
void func(int &result1, int &result2) {
    result1 = 1;
    result2 = 2;
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        std::cerr << "Usage: " << argv[0] << " a b\n";
        return 1;
    }

//    int a = std::atoi(argv[1]);
//    int b = std::atoi(argv[2]);
//    swap(a, b);
//    std::cout << a << " " << b << std::endl;

//    int64_t a = std::atoi(argv[1]);
//    int64_t b = std::atoi(argv[2]);
//    swap(a, b);
//    std::cout << a << " " << b << std::endl;

    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);
    swap(&a, &b);
    std::cout << a << " " << b << std::endl;

    return 0;
}