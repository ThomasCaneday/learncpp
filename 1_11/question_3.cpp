#include <iostream>

int main() {
  int first_input{};
  int second_input{};

  std::cout << "Enter an integer: ";
  std::cin >> first_input;
  std::cout << "Enter another integer: ";
  std::cin >> second_input;

  std::cout << first_input << " + " << second_input << " is "
            << first_input + second_input << ".\n";
  std::cout << first_input << " - " << second_input << " is "
            << first_input - second_input << ".\n";

  return 0;
}