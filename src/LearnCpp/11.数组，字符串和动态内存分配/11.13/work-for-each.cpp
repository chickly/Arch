/*声明一个具有以下名称的固定数组：Alex、Betty、Caroline、Dave、Emily、Fred、Greg
和 Holly。要求用户输入名称。使用 for each 循环查看用户输入的名称是否在数组中。

示例输出：

Enter a name: Betty
Betty was found.
Enter a name: Megatron
Megatron was not found.
*/                                                                             \
#include<iostream>
#include <string_view>
int main() {
    constexpr std::string_view names[]{"Alex",  "Betty", "Caroline", "Dave",
                                       "Emily", "Fred",  "Greg",     "holly"};
    std::cout << "Enter a name:";
    std::string tempname{};
    std::cin >> tempname;
    for (int j{0}; auto i : names) {

        if (i == tempname) {
            std::cout << tempname << " wsa found\n";
            break;
        }
        j++;
        if (j == names->size()) {
            std::cout << tempname << " was not found\n";
        }
    }
    return 0;
}
