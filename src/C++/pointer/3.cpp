#include <iostream>

int main() {
  int a = 10;
  int *p;
  p = &a;
  printf("size of integer int %lu bytes\n", sizeof(int));
  printf("Address = %d, Value = %d\n", p, *p);
  // Void pointer -Genric pointer
  void *p0;
  p0 = p;
  printf("Address = %d, \n", p0);
  return 0;
}