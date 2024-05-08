#include <iostream>

int readNumber() {
    int tmp;
    std::cout << "Enter a number: ";
    std::cin >> tmp;
    return tmp;
}

void writeAnswer(int n) {
    std::cout << n << "\n";
}
