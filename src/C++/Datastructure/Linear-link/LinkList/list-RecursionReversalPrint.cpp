#include <stdio.h>
typedef struct Node {
	int Data;
	Node* Next;
} Node;
Node* Head = NULL;

void RecursionReversal(Node* p) {
	if (p->Next == NULL) {
		Head = p;
		return;
	}
	RecursionReversal(p->Next);
	Node* temp = p->Next; 
	temp->Next = p;
	p->Next    = NULL;
}
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
void Print(Node* head) {
	if (head == NULL) {
		return;
	}
	printf("%d->", head->Data);
	if (head->Next == NULL) {
		printf("NULL\n");
	}
	Print(head->Next);
}

int main() {
	Insert(1, 2);
	Insert(2, 4);
	Insert(3, 6);
	Insert(2, 8);
	Print(Head);
	RecursionReversal(Head);
	Print(Head);
	return 0;
}