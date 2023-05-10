#include <stdio.h>
#include <unistd.h>

int main() {
	static int X, X1;
	static int Y, Y1;
	while (1) {
		X1 = !X && Y;
		Y1 = !X && !Y;

		printf("X = %d;", X);
		printf("Y = %d;", Y);

		X = X1;
		Y = Y1;

		putchar('\n'), sleep(1);
	}
}