//
// Created by mike on 13.01.23.
//
#include <iostream>

int main(int, char *[]) {
    int i1 = 1042284544;
    float f1 = *(reinterpret_cast<float *>(&i1));
    std::cout << "From " << i1 << " to " << f1 << std::endl;

    float f2 = 0.15625;
    int i2 = *(reinterpret_cast<int *>(&f2));
    std::cout << "From " << f2 << " to " << i2 << std::endl;

    return 0;
}