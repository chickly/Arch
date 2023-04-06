#include <iostream>

int main() {
  int a  = 6;
  int* p = &a;
  *p     = 9;

  int** p0  = &p;
  int*** p1 = &p0;
  printf("%d\n", *p);
  printf("%d\n", *p0);
  printf("%d\n", **p0);
  printf("%d\n", **p1);
  printf("%d\n", ***p1);
  ***p1 = 10;  printf("a = %d\n", a);
  **p0 = *p + 2;
  printf("a = %d\n", a);

  return 0;
}