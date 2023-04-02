#include <iostream>

int getValue() {
  std::cout << "Enter an integer: ";

  int x{};
  std::cin >> x;
  return x;
}

int main() {
  std::cout << getValue() + (getValue() * getValue());  // a + (b * c)
  return 0;
}