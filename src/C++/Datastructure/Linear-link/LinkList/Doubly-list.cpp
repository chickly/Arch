#include <stdio.h>
#include <cstdlib>
typedef struct Node {
	int Data;
	Node* Next;
	Node* prev;
} Node;

Node* Head;
Node* GetnewNode(int data) {
	Node* newNode = new Node();
	(*newNode).Data = data;
	(*newNode).Next = NULL;
	(*newNode).prev = NULL;
	return newNode;
}
void InsertAtHead(int data) {
	Node* newNode = GetnewNode(data);
	if (Head == NULL) {
		Head = newNode;
		return;
	}
	Head->prev    = newNode;
	newNode->Next = Head;
	Head          = newNode;
}
void Print() {
	Node* temp = Head;
	printf("forward:");
	while (temp != NULL) {
		printf("%d->",temp->Data);
		temp = temp->Next;
	}
	printf("NULL\n");
}
void ReversePrint() {
	Node* temp = Head;
	if (temp == NULL) {
		return;
	}
	while (temp->Next != NULL) {
		temp = temp->Next;
	}
	printf("Revers :");
	while (temp != NULL) {
		printf("%d->", temp->Data);
		temp = temp->prev;
	}
	printf("NULL\n");
}
int main() {
  Head = NULL;
	InsertAtHead(5);
	InsertAtHead(3);
	InsertAtHead(6);
	InsertAtHead(9);
	Print();
	ReversePrint();
	return 0;
}