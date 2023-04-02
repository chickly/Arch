#include <iostream>

int main() {
  auto a = 19;
  auto b = &a;
  std::cout << a << "\n" << &a << "\n" << b << "\n" << *b << "\n" << &b << std::endl;
  std::cout << (b + 1) << "\n" << *(b + 1);
  // a = 19 b = &b *b = a &b = b的地址

  return 0;
}