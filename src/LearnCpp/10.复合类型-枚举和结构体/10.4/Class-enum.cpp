#include <iostream>
struct Something {
	int x;    // no default initialization value (bad)
	int y{};  // value-initialized by default
	int z{2}; // explicit default value
};

int main() {
	Something s2{5, 6, 7}; // use explicit initializers for s2.x, s2.y, and s2.z (no default values are used)
  std::cout<< s2.z;
	return 0;
}