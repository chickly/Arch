#include <stdio.h>
void PrintfHelloWorld() {
	printf("Hello World\n");

}

int* Add(int* a, int* b) { // Called funtion
	int c = (*a) + (*b);
	return &c;
}
int main() { //Ca11ing function
	int a = 2, b = 4;
	printf("Address of a in main = %d\n", &a);
	int* ptr = Add(&a, &b); // a and b are integers local to Main
  PrintfHelloWorld();
	printf("Sum = %d\n", *ptr);
}