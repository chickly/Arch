#include <stdio.h>
typedef struct Node {
	int Data;
	Node* Next;
} Node;

void Insert(Node* head, int data) {
	Node* temp = nullptr;
  temp->Data = data;
	temp->Next = head->Next;
	head->Next = temp;
}
void Print(Node* head) {
  if(head==NULL)return;
	Print(head->Next);
	if (head->Next != NULL) {
		printf("->");
	}
	printf("%d", head->Data);
}
int main() {
  Node* head = new Node();
  Insert(head,5);
  Insert(head, 5);
  Insert(head, 5);
  
  return 0;
}