/*编写一个程序：
询问用户要输入多少个名称。
动态分配数组。std::string
要求用户输入每个名称。
对名称进行排序的调用
std::sort) 打印已排序的名称列表。*/
#include <algorithm>
#include <iostream>
#include <string>

int main() {
    int lenght{};
    std::cout << "How many names would you like to enter:";
    std::cin >> lenght;
    std::string *names{new std::string[lenght]};
    for (int i{1}; i <= lenght; i++) {
        std::cout << "Enter names #" << i << ": ";
        std::cin >> names[i - 1];
    }
    std::sort(names, names + lenght);
    std::cout << "Here is your sorted list:"
              << "\n";
    for (int i{0}; i < lenght; i++) {
        std::cout << "Name #" << i + 1 << names[i] << "\n";
    }
    delete[] names;
    return 0;
}
