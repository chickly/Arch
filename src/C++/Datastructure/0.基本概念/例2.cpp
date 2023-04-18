
#include <stdio.h>
void PrintN( int num){
	for (int i = 1; i <= num; i++) {
		printf("%d\n", i);
	}
}
int main() {
  int num = 0;
	printf("Enter a positive integer: ");
  scanf("%d",num);
  PrintN(num);
  return 0;
  
}