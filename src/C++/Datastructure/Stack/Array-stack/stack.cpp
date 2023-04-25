#include <stdio.h>
#define MAX_DATA 10
int stack[MAX_DATA];
int top = -1;
void Push(int data) {
	if (top ==MAX_DATA - 1) {
		printf("error:stack overflow\n");
		return;
	}
	stack[++top] = data;
	return;
}
void Pop() {
	if (top == -1) {
		printf("error: No element to pop\n");
		return;
	}
	top--;
	return;
}
int Top() {
	return stack[top];
}
void Print() {
	printf("Stack:");
	for (int i = 0; i <= top; i++) {
		printf("%d ", stack[i]);
	}
  printf("\n");
}
int main() {
  Push(5);
  Print();
  Push(6);
  Print();
  Push(7);
  Print();
  Push(8);
  Print();
  Pop();
  Print();
  Push(9);
  Print();

  
  return 0;
}