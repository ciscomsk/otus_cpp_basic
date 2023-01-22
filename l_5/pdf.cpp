//
// Created by mike on 19.01.23.
//
#include <fstream>

int main() {
    std::fstream file("filename.txt");
    file << "Hello, World" << std::endl;

    return 0;
}
// на 11 строке fstream будет закрыт автоматически