#include <iostream>

int main() {
  int a = 1025;
  int* p;
  p = &a;
  printf("size of integer int %lu bytes\n", sizeof(int));
  printf("Address = %d, Value = %d\n", p, *p);
  printf("Address = %d, Value = %d\n", p + 1, *(p + 1));

  char* p0;
  p0 = (char*)p;
  printf("size of integer int %d bytes\n", sizeof(char));
  printf("Address = %d, Value = %d\n", p0, *p0);
  printf("Address = %d, Value = %d\n", p0 + 1, *(p0 + 1));
  // 1025 = 00000000 00000000 00000100 00000001
  // 截取高位余下1bit
  return 0;
}