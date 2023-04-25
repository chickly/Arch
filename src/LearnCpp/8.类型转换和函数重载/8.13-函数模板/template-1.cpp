#include <iostream>
template <typename T> T max(T x, T y) {
	return (x > y) ? x : y;
}
template <> int max<int>(int x, int y) {
	return (x > y) ? x : y;
}

template <> double max<double>(double x, double y) {
	return (x > y) ? x : y;
}
int main() {
	std::cout << max<int>(1, 2) << '\n'; // instantiates and calls function max<int>(int, int)
	std::cout << max<int>(4, 3) << '\n'; // calls already instantiated function max<int>(int, int)
	std::cout << max<double>(1, 2) << '\n';

	return 0;

}