#include <iostream>

inline int min(int x, int y) // hint to the compiler that it should do inline expansion of this function
{
	return (x < y) ? x : y;
}

int main() {
	std::cout << min(5, 6) << '\n';
	std::cout << min(3, 2) << '\n';
	return 0;
}