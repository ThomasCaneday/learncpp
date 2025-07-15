#include <iostream>

int main() {
  int integer_input{};
  std::cout << "Enter an integer: ";
  std::cin >> integer_input;
  std::cout << "Double " << integer_input << " is: " << integer_input * 2
            << '\n';
  std::cout << "Triple " << integer_input << " is: " << integer_input * 3
            << '\n';
  return 0;
}