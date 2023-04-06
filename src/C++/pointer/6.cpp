#include <iostream>
int SumofElements(int* A, int size)//"int *A == int A[]"
{
  int sum = 0;
  printf("SOE - Size of A = %d,Size of A[0] = %d\n",sizeof(A),sizeof(A[0]));
  for (int i = 0; i < size; i++) {
    sum += A[i];
  }
  return sum;
}
int main() {
  int A[]  = {1, 2, 3, 4, 5};
  int size = (sizeof(A) / sizeof(A[0]));
  printf("Sum of elements = %d\n", SumofElements(A, size));
  printf("SOE - Size of A = %d,Size of A[0] = %d\n",sizeof(A),sizeof(A[0]));
  return 0;
}