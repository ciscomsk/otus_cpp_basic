//
// Created by mike on 17.01.23.
//
#include <iostream>
#include <cmath>

double module(double x) {
    return std::fabs(x);
}

double module(double x, double y) {
    return std::sqrt(x * x + y * y);
}

double module(double x, double y, double z) {
    return std::sqrt(x * x + y * y + z * z);
}

int main(int argc, char *argv[]) {
    switch (argc) {
        case 2: {
            double x = std::atof(argv[1]);
            std::cout << module(x) << std::endl;
            break;
        }
        case 3: {
            double x = std::atof(argv[1]);
            double y = std::atof(argv[2]);
            std::cout << module(x, y) << std::endl;
            break;
        }
        case 4: {
            double x = std::atof(argv[1]);
            double y = std::atof(argv[2]);
            double z = std::atof(argv[3]);
            std::cout << module(x, y, z) << std::endl;
            break;
        }
        default: {
            std::cerr << "Usage: " << argv[0] << " x [y] [z]" << std::endl;
            return 1;
        }
    }

    return 0;
}