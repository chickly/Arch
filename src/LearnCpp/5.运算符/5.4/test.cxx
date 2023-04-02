#include <iostream>

int add(int x,int y){
  return x+y;
}
int main(){
  int x{5};
  int value{add(x,++x)};
  int value1{add(x, x++)};
  std::cout<<value<<" "<<value1;

  return 0;
}