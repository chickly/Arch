#include <stdio.h>
int total;
int Square(int x){
  return x*x;
}
int SquareofSum(int x,int y){
  int z = Square(x+y);
  return z;
}
int main(){
  int a = 4,b = 8;
  total = SquareofSum(a,b);
  printf("output = %d",total);
  return 0;
}