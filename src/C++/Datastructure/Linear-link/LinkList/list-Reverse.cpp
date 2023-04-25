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
void Print() {
	Node* temp = Head;
	printf("");
	while (temp != NULL) {
		printf("%d -> ", temp->Data);
		temp = temp->Next;
	}

	printf("NULL\n");
}
Node* Reverse() {
	Node* current = nullptr;
	Node* prev    = nullptr;
	Node* next    = nullptr;
	current       = Head;
	prev          = nullptr;
	while (current ) {
		next          = current->Next; // 将下一个节点信息存储到next节点上
		current->Next = prev;          //修改指向下一个节点的指向 current->next 改为 prev<-current
		prev          = current;       //prev移动到原来current指向的节点(也就是移动到下一个节点)
		current       = next;          //current移动到next指向的节点(也就是移动到下一个节点)
	}
	Head = prev; //循环结束说明翻转完成，prev就是头指针。更新头指针
	return Head; //返回头指针
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
	Insert(1, 4);
	Print();
	Insert(2, 5);
	Print();
	Reverse();
	Print();
	return 0;
}