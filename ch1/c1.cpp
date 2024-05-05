#include <iostream>

int main() {
    std::cout << "Enter an integer: ";

    int n1 {};
    int n2 {};

    std::cin >> n1;

    std::cout << "Enter another integer: ";
    std::cin >> n2;

    std::cout << n1 << " + " << n2 << " is " << n1 + n2 << ".\n";
    std::cout << n1 << " - " << n2 << " is " << n1 - n2 << ".\n";

    return 0;
}