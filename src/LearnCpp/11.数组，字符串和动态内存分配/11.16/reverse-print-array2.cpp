#include <array>
#include <iostream>
// 自定义逆序递归打印函数
template <typename T, std::size_t N>
void reverse_recursive_print(const std::array<T, N> &arr, std::size_t index) {
    if (index == 0) {
        std::cout << arr[index] << " ";
    } else {
        std::cout << arr[index] << " ";
        reverse_recursive_print(arr, index - 1);
    }
}
int main() {
    std::array arr = {1, 2, 3, 4, 5};
    // 调用自定义逆序递归打印函数
    reverse_recursive_print(arr, arr.size() - 1);
    std::cout << std::endl;
    return 0;
}
