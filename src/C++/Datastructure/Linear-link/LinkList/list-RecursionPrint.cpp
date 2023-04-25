#include <stdio.h>
#include <stdlib.h>
typedef struct Node {

	int Data;
	Node* Next;
} Node;
auto Insert(Node* head, int data) {
	Node* temp = new Node();
	temp->Data = data;
	temp->Next = NULL;
	if (head == NULL) {
		head = temp;
	}

	else {
		Node* temp1 = head;
		while (temp1->Next != NULL) {
			temp1 = temp1->Next;
		}
		temp1->Next = temp; //尾插法
	}
	return head;
}
void RecursionPrint(Node* head) {
	if (head == NULL) {
		return;
	}
	printf("%d->", head->Data);
	if (head->Next ==NULL) printf("NULL");
	RecursionPrint(head->Next);
}

int main() {
	Node* head = nullptr;

	head = Insert(head, 2);
	head = Insert(head, 3);
	head = Insert(head, 4);
	head = Insert(head, 5);
	RecursionPrint(head);
	return 0;
}