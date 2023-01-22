//
// Created by mike on 17.01.23.
//
#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        std::cerr << "Usage : " << argv[0] << " a b\n";
        return 1;
    }

    // atoi == ASCII to int
    // atoi - не выбрасывает ошибку в случае некорректного ввода (возвращает 0)
    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);
    int result = gcd(a, b);

    std::cout << "gcd(" << a << ", " << b << ") = " << result << std::endl;
    return 0;
}
