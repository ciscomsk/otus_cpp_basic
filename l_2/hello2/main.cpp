//
// Created by mike on 11.01.23.
//
#include <iostream>
// "" - сначала искать заголовочный файл в текущей директории
#include "hello.h"

int add2 (int num) {
    return num + 2;
}

int main() {
//int main(int argc, char *argv[]) {

    std::cout << "add2(40) = " << add2(40) << '\n';
    hello();

    return 0;
}
