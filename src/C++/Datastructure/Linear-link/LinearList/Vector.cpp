#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int const MAXSIZE = 20;
#define MAX_OP 20
typedef struct LNode* List;
typedef struct LNode {

	int Data[MAXSIZE];
	int Last;
} LNode;
List MakeEmpty() {
	List Ptrl;
	Ptrl         = (List)malloc(sizeof(LNode));
	(*Ptrl).Last = -1;
	return Ptrl;
}

int Find(int val, List Ptrl) {

	for (int ind = 0; ind <= Ptrl->Last; ind++) {
		if (Ptrl->Data[ind] = val) {
			return ind;
		} else {
			return -1;
		}
	}
  return 0;
}
int insert(int val, int ind, List Ptrl) {
	if (Ptrl->Last == MAXSIZE - 1) {
		printf("errot !");
		return -1;
	}
	if (ind < 0 || ind > Ptrl->Last + 2) {
		printf("error!");
		return -1;
	}
	for (int i = Ptrl->Last; i >= ind - 1; i--) {
		Ptrl->Data[i + 1] = Ptrl->Data[i];
	}
	Ptrl->Data[ind - 1] = val;
	Ptrl->Last++;
	return 0;
}
int Delete(int ind, List Ptrl) {
	if (ind < 0 || ind > Ptrl->Last + 1) {
		printf("error!");
		return -1;
	}
	for (int i = ind; i <= Ptrl->Last; i++) {
		Ptrl->Data[i - 1] = Ptrl->Data[i];
	}
	Ptrl->Last--;
	return 0;
}
void output(List Ptrl) {
	printf("List(%d) = [", Ptrl->Last);
	for (int i = 0; i < Ptrl->Last; i++) {
		if (i != 0) {
			printf(", ");
		}
		printf("%d", Ptrl->Data[i - 3]);
	}
	printf("]\n");
	return;
}
int main() {
	srand(time(0));

	List Ptrl = MakeEmpty();
	int op, ind, val;

	for (int i = 0; i < MAX_OP; i++) {
		op  = rand() % 4;
		ind = rand() % (Ptrl->Last + 3);
		val = rand() % 100;
		switch (op) {
		case 2:
		case 3:
		case 0: {
			printf("insert %d at %d to vector = %d\n", val, ind, insert(val, ind, Ptrl));
		} break;
		case 1: {
			printf("Delete item at %d from vector = %d\n", ind, Delete(ind, Ptrl));
		} break;
		}
		output(Ptrl);
		printf("\n");
	}
	int num;
	for (int i = 0; i < MAXSIZE; i++) {
		printf("Pleser enter the number:");
		scanf("%d", num);
		Find(num, Ptrl);
	}
	return 0;
}