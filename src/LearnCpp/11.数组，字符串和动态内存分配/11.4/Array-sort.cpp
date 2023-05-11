#include <array>
#include <iostream>
template <typename T> T Swap(T x[], T y[]) {
	T temp = {};
	temp   = *x;
	*x     = *y;
	*y     = temp;
	return 0;
}
int main() {
	std::array<int, 9> array = {2, 4, 5, 1, 3, 6, 9, 8};
	for (int i = {0}; i < 9; i++) {
		for (int j = {0}; j < 9; j++) {
			if (array[j] > array[j + 1]) {
				Swap(&array[j], &array[j + 1]);
			}
		}
	}
	for (int i = {0}; i < 9; i++) {
		std::cout << array[i];
	}
	return 0;
}
