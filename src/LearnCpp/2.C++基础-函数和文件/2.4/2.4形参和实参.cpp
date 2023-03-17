#include <iostream>
using std::cin;
using std::cout;
int getValueFromUser() {
  cout << "Enter an integer:";
  int input{};
  cin >> input;
  return input;
}

void printDouble(int value)  // 函数现在有一个整型的形参
{
  std::cout << value << " doubled is: " << value * 2 << '\n';
}

int main() {
  printDouble(getValueFromUser());

  return 0;
}