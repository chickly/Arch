#include <iostream>

int main() {
    int array[5]{9, 7, 5, 3, 1};
    std::cout << array << '\n';  // 类型为 int[5], 打印 009DF9D4
    std::cout << &array << '\n'; // 类型为 int(*)[5], 打印 009DF9D4

    std::cout << '\n';

    int *ptr{array};
    std::cout << *ptr << '\n';   // 类型为 int*, 打印 009DF9D4
    std::cout << *&ptr << '\n';  // 类型为 int**, 打印 009DF9C8
    std::cout << **&ptr << '\n'; // 类型为 int**, 打印 009DF9C8

    return 0;
}
