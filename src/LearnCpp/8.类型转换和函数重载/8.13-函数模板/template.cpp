#include <iostream>

template <typename T> int someFcn(T x, double y) {
	return 5;
}

int main() {
	someFcn(1, 3.4);     // matches someFcn(int, double)
	someFcn(1, 3.4f);    // matches someFcn(int, double) -- the float is promoted to a double
	someFcn(1.2, 3.4);   // matches someFcn(double, double)
	someFcn(1.2f, 3.4);  // matches someFcn(float, double)
	someFcn(1.2f, 3.4f); // matches someFcn(float, double) -- the float is promoted to a double

	return 0;
}