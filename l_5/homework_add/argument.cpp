//
// Created by mike on 22.01.23.
//
#include <iostream>

// argc - count of arguments
// OS always pass one system argument - path + name of the executable
// if the application was executed without parameters at all => argc == 1
int main(int argc, char** argv) {
    if (argc > 0) {
        std::cout << "Program always has 1 argument: " << std::endl;
        std::cout << "argv[0] = " << argv[0] << std::endl;
    }

    if (argc >= 2) {
        std::cout << "Program has 2 arguments: " << std::endl;
        std::cout << "argv[1] = " << argv[1] << std::endl;

        std::string arg1_value{ argv[1] };
        if (arg1_value == "-parameter") {
            std::cout << "-parameter argument was detected" << std::endl;

            int parameter_value = 0;
            if (argc < 3) {
                std::cout << "Wrong usage! The argument 'parameter' requires some value" << std::endl;
                return -1;
            }
            parameter_value = std::stoi(argv[2]);
            std::cout << "The '-parameter' value = " << parameter_value << std::endl;
        }
    }

    return 0;
}