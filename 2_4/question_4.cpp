#include <iostream>

int doubleNumber(int x) {
    return 2 * x;   
}

int main() {
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    std::cout << doubleNumber(input) << '\n';

    return 0;
}