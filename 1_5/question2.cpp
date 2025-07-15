// Ask the user to enter three values.
// The program should then print these values.
#include <iostream>

int main() {
    int x{};
    int y{};
    int z{};

    std::cout << "Enter three numbers (each separated by a space): ";
    std::cin >> x >> y >> z;
    std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";

    return 0;
}