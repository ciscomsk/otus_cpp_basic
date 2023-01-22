//
// Created by mike on 20.01.23.
//
#include <iostream>
#include <ctime>
#include <iomanip>

std::string getCurrentDateTime() {
    std::time_t t = std::time(nullptr);
    std::tm local = *std::localtime(&t);

    std::ostringstream oss;
    oss << std::put_time(&local, "%d-%m-%Y %H-%M-%S");
    return oss.str();
}
