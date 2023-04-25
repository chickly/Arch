#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
	int Data;
	Node* Next;

} Node;
Node* Head;
void Insert(int ind, int data) {
	Node* temp = new Node();
	temp->Data = data;
	temp->Next = NULL;
	if (ind == 1) {
		temp->Next = Head;
		Head       = temp;
		return;
	}
	Node* temp1 = Head;
	for (int i = 0; i < ind - 2; i++) {
		temp1 = temp1->Next;
	}
	temp->Next  = temp1->Next;
	temp1->Next = temp;
}
void Delete(int ind);
void Print() {
	Node* temp = Head;
	while (temp != NULL) {
		printf("%d\t", temp->Data);
		temp = temp->Next;
	}
  printf("\n");
}
int main() {
	Head = NULL;

	Insert(1, 2);
	Print();
	Insert(2, 3);
	Print();
	Insert(1, 4);
	Print();
	Insert(2, 5);
	Print();

	return 0;
}