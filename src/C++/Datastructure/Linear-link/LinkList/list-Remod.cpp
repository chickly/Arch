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
void Delete(int ind) {
	Node* temp = Head;
	if (ind == 1) {
		Head = temp->Next;
		free(temp);
		return;
	}
	for (int i = 0; i < ind - 2; i++) {
		temp = temp->Next; //循环到要删除链表位置的 ind-1 处
	}
	Node* temp1 = temp->Next;  //创建临时变量temp1保存要删除的链表节点信息 temp1 = ind
	temp->Next  = temp1->Next; //将ind+1的赋给ind-1
	free(temp1);
}
void Print() {
	Node* temp = Head;
	while (temp != NULL) {
		printf("%d\t", temp->Data);
		temp = temp->Next;
	}
	printf("\n");
}

void Remod(int ind, int data) {
	Node* temp = Head;
	if (ind == 1) {
		Head->Data = data;
		return;
	}
	for (int i = 0; i < ind - 2; i++) {
		temp = temp->Next;
	}
	Node* temp1 = temp->Next;
	temp1->Data = data;
}
int main() {
	Head = nullptr;

	Insert(1, 2);
	Print();
	Insert(2, 3);
	Print();
	Insert(1, 4);
	Print();
	Insert(2, 5);
	Print();
	Delete(2);
	Print();
	Delete(1);
	Print();
	Remod(1, 6);
	Print();
	return 0;
}