//
// Created by mike on 19.01.23.
//
#include <iostream>
#include <fstream>

bool write_to_file_example(std::ofstream &);
bool read_from_file(std::ifstream &);
bool read_write_file_example(std::fstream &);

//class Ifstream {
//    HANDLE m_file;
//    void write(...) {
//        m_file;
//    }
//};

int main() {
    const std::string filename = "test_file.txt";

    std::ofstream o_file(filename);  // == std::ofstream o_file; o_file.open(filename);
    bool success = write_to_file_example(o_file);
    if (success) {
        std::cout << "Write to file succeeded" << std::endl;
    } else {
        std::cout << "Write to file failed" << std::endl;
        return -1;
    }
    // close file fo flush all data
    o_file.close();

    std::ifstream i_file(filename);
    success = read_from_file(i_file);
    if (success) {
        std::cout << "Read to file succeeded" << std::endl;
    } else {
        std::cout << "Read to file failed" << std::endl;
        return -1;
    }

    const std::string filename2 = "test_file.txt";
    // app - append | trunc - стереть содержимое файла
    std::fstream io_file(filename2, std::ios_base::in | std::ios_base::out | std::fstream::app);
    read_write_file_example(io_file);

    return 0;
}

bool write_to_file_example(std::ofstream &file) {
    std::cout << "write_to_file_example:" << std::endl;

    if (!file.is_open()) {
        std::cout << "Error! File was not opened" << std::endl;
        return false;
    }

    file << 42;
    file << 3.1415f;
    file.write("hello!", 6); // == file << "hello!";

    int someVariable = 56;
    file << someVariable;

    // 423.1415hello!56
    return true;
}

bool read_from_file(std::ifstream &file) {
    std::cout << "read_from_file:" << std::endl;

    if (!file.is_open()) {
        std::cout << "Error! File was not opened" << std::endl;
        return false;
    }

    float f_value = 0;
    std::string str_value;
    int i_value = 0;

    file >> f_value;    // 423.1415
    file >> str_value;  // hello!56
    file >> i_value;    // 0

    // Can't read to constants => need variables
    std::cout << "f_value" << f_value << std::endl;
    std::cout << "str_value" << str_value << std::endl;
    std::cout << "i_value" << i_value << std::endl;

    return true;
}

bool read_write_file_example(std::fstream &file) {
    std::cout << "read_write_file_example:" << std::endl;

    if (!file.is_open()) {
        std::cout << "Error! File was not opened" << std::endl;
        return false;
    }

    file << 42 << ' ';
    file << "hello1" << ' ';
    file << 3.1415 << std::endl;
    file << "some other string" << std::endl;

    file.flush();
    file.seekg(0);
    file.seekp(0);

    int i_value = 0;
    file >> i_value;
    std::string str_value;
    file >> str_value;
    float f_value = 0.f;
    file >> f_value;

    std::string other_str_value;
    file >> other_str_value;

    file.ignore();  // игнорировать 1 символ в потоке
    std::getline(file, other_str_value);  // чтение до разделителя

    // ДОПИСАТЬ

    return true;
}