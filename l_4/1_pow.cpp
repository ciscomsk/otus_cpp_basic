//
// Created by mike on 17.01.23.
//
#include <iostream>
#include <cmath>
#include <limits>

double pow(double base, unsigned int exp) {
    double result = 1;
    for (unsigned int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

// compare if two double are close enough and can be interpreted as equal
bool is_close(double a, double b) {
    if (std::isinf(a) && std::isinf(b)) {
        return true;
    }
    if (std::isnan(a) && std::isnan(b)) {
        return true;
    }
    return std::fabs(a - b) < std::numeric_limits<double>::epsilon() *
        std::max(1.0, std::max(std::abs(a), std::abs(b)));
}

// Test compares results of pow function provided by programmer with std::pow
bool test_pow(double base, unsigned int exp) {
    const double expected = std::pow(base, exp);
    const double actual = ::pow(base, exp);

    if (is_close(expected, actual)) {
        std::cout << "OK\n";
        return true;
    }

    std::cout << "FAIL\n";
    std::cout << "Expected: " << expected << ", actual: " << actual << '\n';
    return false;
}

int main() {
    bool all_success = true;

    all_success &= test_pow(2.0, 3);
    all_success &= test_pow(1.0, 1);
    all_success &= test_pow(5.0, 0);
    all_success &= test_pow(-5.0, 2);
    all_success &= test_pow(-5.0, 3);
    all_success &= test_pow(0.0, 2);
    all_success &= test_pow(1.1e+5, 10);
    all_success &= test_pow(1e-5, 10);
    all_success &= test_pow(INFINITY, 2);
    all_success &= test_pow(NAN, 2);

    return all_success;
}