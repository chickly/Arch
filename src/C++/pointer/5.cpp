#include <iostream>
void Increment(int *p){
  *p= *p+1;
  printf("Address of variable a in increment = %d\n",&p);
}
int main() {
  int a = 1;
  Increment(&a);
  printf("Address of variable a in main = %d\n",&a);
  printf("a = %d",a);
  return 0;
}