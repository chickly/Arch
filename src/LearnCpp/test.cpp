#include <iostream>

void print() // this print lives in the global namespace
{
	std::cout << " there\n";
}

namespace foo {
void print() // this print lives in the foo namespace
{
	std::cout << "Hello";
}

void printHelloThere() {
	print();   // calls print() in foo namespace
	::print(); // calls print() in global namespace
}
} // namespace foo

int main() {
	foo::printHelloThere();

	return 0;
}