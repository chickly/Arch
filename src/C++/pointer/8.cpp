#include <stdio.h>
#include <iostream>

int main(){
  int a[2][3] = {{1,2,3},{4,5,6}};

  int (*p)[3] = a;
  std::cout << *p[0]+1;

  return 0;
}