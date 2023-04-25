#include <stdio.h>
#include <stdlib.h>
#include <cstddef>
#include <new>
typedef struct Node {
	int data;
	Node* link;
} Stack;
Stack* top = NULL;
void Push(int data) {
	Stack* temp = new Stack();
	temp->data  = data;
	temp->link  = top;
	top         = temp;
}
void Pop() {
	Stack* temp;
	if (top == nullptr) {
		return;
	}
	temp = top;
	top  = top->link;
	free(temp);
}
void Print() {
	Stack* p = top;
	printf("Stack:");
	while (p) {
		printf("%d ", p->data);
		p = p->link;
	}
	printf("\n");
}
int main() {
	Push(5);
	Push(8);
	Push(6);
	Push(1);
	Print();
	Pop();
	Print();
	return 0;
}