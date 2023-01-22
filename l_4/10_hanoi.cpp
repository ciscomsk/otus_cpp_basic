//
// Created by mike on 17.01.23.
//
#include <iostream>

void hanoi(int n, char from, char to, char tmp) {
    if (n == 0) {
        return;
    }
    hanoi(n - 1, from, tmp, to);
    std::cout << from << " - > " << to << std::endl;
    hanoi(n - 1, tmp, to, from);
}

int main(int agrc, char *argv[]) {
    int n = 5;
    if (agrc == 2) {  // optionally pass number of disks as command line argument
        n = std::atoi(argv[1]);
    }
    hanoi(n, 'A', 'B', 'C');

    return 0;
}