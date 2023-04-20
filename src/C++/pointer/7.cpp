#include<stdio.h>
void print(char *c){
  
  while(*c !='\0'){
    printf("%c",*c);
  c++;
  }
  
}
int main(){
  char c[20] = "hello";
  print(c);
  return 0;
}

