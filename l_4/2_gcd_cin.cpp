//
// Created by mike on 17.01.23.
//
#include <iostream>

// 10 % 11 == 10

// Greatest Common Divisor (GCD) function
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    using std::cin;
    using std::cout;

    int a,b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int result = gcd(a, b);
    std::cout << "gcd(" << a << ", " << b << ") = " << result << std::endl;

    return 0;
}