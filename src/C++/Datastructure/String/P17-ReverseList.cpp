#include <cstdio>
#include <cstring>
#include <iostream>
#include <stack>
#include <string>
typedef struct Node {
	int Data;
	Node* Next;
} Node;
Node* head;
void Insert(Node* head,int data){
  if(head == NULL)return;
  Node* temp = NULL;
  temp->Data = data;
  temp->Next = head->Next;
  head->Next = temp;
}
void ReverseList() {
	if (head == NULL) {
		return;
	}
	std::stack<Node*> S;
	Node* temp = head;
	while (head) {
		S.push(temp);
		temp = temp->Next;
	}
	while (!S.empty()) {
		temp->Next = S.top();
		S.pop();
		temp = temp->Next;
	}
}
int main() {

	return 0;
}
