#include <algorithm>
#include <array>
#include <cstddef>
#include <iostream>
#include <iterator>
#include <string>
void print(int p[], int n) {
	if (n == 0) {
		printf("%d", *(p + n));
	} else {
		print(p, n - 1);
	}
}
int main() {
	std::array arr{1, 2, 4, 6, 8, 2, 4, 9, 0};
	int n = std::size(arr);
	print(arr, 8);
	return 0;
}