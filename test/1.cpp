#include <cassert>  // for assert
#include <cstdint>  // for std::int64_t
#include <iostream>

// note: exp must be non-negative
std::int64_t powint(int base, int exp) {


  std::int64_t result{1};
  while (exp) {
    if (exp & 1) {
      result *= base;
    }
    exp  >>= 1;
    base *= base;
  }

  return result;
}

int main() {
  std::cout << powint(2, 16);  // 7 to the 12th power

  return 0;
}