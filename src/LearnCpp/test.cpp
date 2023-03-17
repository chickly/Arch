#include <iostream>  // 导入 `std::cout` 的定义。

using namespace std;  // 使得 std::cout 能够以 "cout" 方式使用

int cout()  // 在全局命名空间中定义我们的cout函数
{
  return 5;
}

int main() {
  cout << "Hello, world!";  // 编译报错，这里使用的cout是我们定义的，还是std定义的？

  return 0;
}