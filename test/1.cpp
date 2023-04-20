#include <iostream>

int main() {
	int x{5};
	int y{7};

	if (!(x > y)) { // oops: operator precedence issue
		std::cout << x << " > " << y << '\n';
	} else {
		std::cout << x << " < " << y << '\n';
	}
	return 0;
}
