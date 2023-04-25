#include <iostream>
#include <ostream>
template <typename T> // this is the template parameter declaration
T Max(T x,T y){
  return (x>y)? x:y;
}
int main(){
  std::cout<<Max<int>(1,2)<< std::endl;

  return 0;
}