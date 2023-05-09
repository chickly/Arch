#include <iostream>
#include "pair.h"
void foo();
int main(){
  Pair<double> p2{8.3,33};
  std::cout <<Max(p2) <<"is larger\n";
  foo();
  return 0;
}