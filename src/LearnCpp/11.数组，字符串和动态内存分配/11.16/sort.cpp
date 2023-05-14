#include <algorithm>
#include <array>
#include <iostream>
#include <string>
int main() {
	std::array arr{1, 2, 7, 3, 9, 0, 6, 7};
	std::sort(arr.begin(), arr.end());
	for (auto element : arr) {
		std::cout << element << " ";
	}
	std::cout << "\n";
	std::sort(arr.rbegin(), arr.rend());
	for (auto element : arr) {
		std::cout << element << " ";
	}

	return 0;
}