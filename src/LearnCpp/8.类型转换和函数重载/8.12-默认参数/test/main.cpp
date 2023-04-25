#include "foo.h"
#include <iostream>

void print(int x, int y) { 
	std::cout << "x= " << x <<std::endl;
	std::cout << "y= " << y << std::endl;
}

int main() {
	int x = 6;
	print(x);
	print(x, x);
	return 0;
}