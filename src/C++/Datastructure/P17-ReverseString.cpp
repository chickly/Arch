#include <cstdio>
#include <cstring>
#include <iostream>
#include <stack>
#include <string>
using namespace std;
typedef struct Node {
	int Data;
	Node* Next;
} Node;
Node* head;
void ReverseString(char* C, int n) {
	stack<char> S;
	for (int i = 0; i < n; i++) {
		S.push(C[i]);
	}
	for (int i = 0; i < n; i++) {
		C[i] = S.top();
		S.pop();
	}
}
void ReverseList() {
	if (head == NULL) {
		return;
	}
	stack<Node*> S;
	Node* temp = head;
  while(head){
    S.push(temp);
    temp = temp->Next;
  }
  while(!S.empty()){
    temp->Next = S.top();
    S.pop();
    temp = temp->Next;
  }
}
int main() {
	char C[51];
	printf("Please enter the string:");
	cin.getline(C, 51);
	ReverseString(C, strlen(C));
	ReverseList();
	printf("%s", C);
	return 0;
}
