#include <stdio.h>
#include <stdlib.h>
typedef struct LNode* List;
struct LNode {
	int Data;
	List Next;
};
LNode Lenght;
List Ptrl;
int Length(List Ptrl) {
	List p = Ptrl;
	int i  = 0;
	while (p) {
		p = p->Next;
		i++;
	}
	return i;
}
List Find_Ind(int ind, List Ptrl) {
	List p = Ptrl;
	int i  = 1;
	while (p != NULL && i < ind) {
		p = p->Next;
		i++;
	}
	if (i == ind) {
		return p;
	} else {
		return NULL;
	}
}
List Find_num(int val, List Ptrl) {
	List p = Ptrl;
	while (p != NULL && p->Data != val) {
		p = p->Next;
	}
	return p;
}
List Insert(int val,int ind,List Ptrl){
  List p,node;
  if(ind ==1){
    node = (List)malloc(sizeof(List));
    node->Data = val;
    node->Next = Ptrl;
    return node;
  }
  p = Find_Ind(ind-1,Ptrl);
  if(p==NULL){
    printf("ind error!");
    return NULL;
  }
  else{
    node=(List)malloc(sizeof(List));
    node->Data = val;
    node->Next = p->Next;
    p->Next = node;
    return Ptrl;
  }
}
List Delete(int ind,List Ptrl){
  List p,node;
  if(ind==1){
    node = Ptrl;
    if(Ptrl!=NULL) Ptrl = Ptrl->Next;
    else return NULL;
    free(s);
    return Ptrl;
  }

}
int main() {

	return 0;
}