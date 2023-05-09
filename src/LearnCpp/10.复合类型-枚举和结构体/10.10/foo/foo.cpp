#include "pair.h"
#include <iostream>

void foo() {
	Pair<int> p1{1, 2};
	std::cout << Max(p1) << "is large\n";
	return;
}