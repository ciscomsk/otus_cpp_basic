//
// Created by mike on 22.01.23.
//
#include <iostream>
#include <fstream>

int main() {
    const std::string high_scores_filename = "high_scores.txt";

    std::string user_name;
    std::cout << "Enter your name, please: " << std::endl;
    std::cin >> user_name;

    int attempts_count = 0;
    std::cout << "Enter your high score: " << std::endl;
    std::cin >> attempts_count;
    if (std::cin.fail()) {
        std::cout << "Incorrect high score value" << std::endl;
        return  -1;
    }

    std::ofstream out_file{high_scores_filename, std::ios_base::app};
    if (!out_file.is_open()) {
        std::cout << "Failed to pen file for write: " << high_scores_filename << std::endl;
        return -1;
    }
    out_file << user_name << ' ';
    out_file << attempts_count;
    out_file << std::endl;

    std::ifstream in_file{high_scores_filename};
    if (!in_file.is_open()) {
        std::cout << "Failed to open file for read: " << high_scores_filename << std::endl;
        return -1;
    }
    std::cout << "High scores table: " << std::endl;
    std::string username;
    int high_score = 0;
    while (true) {
        in_file >> username;
        in_file >> high_score;
        // ignore the end of line symbol
        in_file.ignore();

        if (in_file.fail()) {
            break;
        }

        std::cout << username << '\t' << high_score << std::endl;
    }


    return 0;
};