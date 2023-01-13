//
// Created by mike on 13.01.23.
//
#include <iostream>
#include <fstream>
#include <string>

void send(std::ostream &destination) {
    destination << "some bytes" << std::endl;
}

int main(int, char *[]) {
    std::fstream fso;
    // std::fstream::out | std::fstream::in - открыть поток для чтения и записи
    fso.open("ex_file.txt", std::fstream::out | std::fstream::in);  // | std::fstream::out
    fso << "This 12 34 is a simple example of file output" << std::endl;
    fso << "One more line";
    fso.close();

    std::string  single_word, w2;
    int a, b;

    std::fstream fsi;
    fsi.open("ex_file.txt", std::fstream::in);

    fsi >> single_word;
    fsi >> a >> b;
    fsi >> w2;
    fsi.close();

    std::cout << "single word = " << single_word << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "w2 = " << w2 << std::endl;
    std::cout << std::endl;

    // 2. Print file content
    fsi.open("ex_file.txt", std::fstream::in);
    std::string line;
    while (std::getline(fsi, line)) {
        std::cout << "line = " << line << std::endl;
    }
    fsi.close();
    std::cout << std::endl;

    send(std::cout);
    std::ofstream of{"ex_file.txt"};
    send(of);

    return 0;
}