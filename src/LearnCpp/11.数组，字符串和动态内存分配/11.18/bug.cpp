#include <iostream>
#include <vector>

int main() {
    std::vector v{1, 2, 3, 4, 5, 6, 7};

    auto it{v.begin()};

    ++it;                     // 移动到第二个元素
    std::cout << *it << '\n'; // ok: 打印2

    v.erase(it); // erase 当前遍历到的元素

    erase(); // 使得被指向被删除元素的迭代器失效
             // 所以迭代器"it" 现在是无效的

    ++it;                     // 未定义行为
    std::cout << *it << '\n'; // 未定义行为

    return 0;
}
