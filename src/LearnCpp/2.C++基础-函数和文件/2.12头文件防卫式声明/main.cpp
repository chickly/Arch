#include "square.h"  // square.h 在此处被包含一次
#include <type_traits>

#include <iostream>

int main() {
  std::cout << "a square has " << getSquareSides() << " sides\n";
  std::cout << "a square of length 5 has perimeter length " << getSquarePerimeter(5) << '\n';

  return 0;
}