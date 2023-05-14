#include <array>
#include <iostream>
// 自定义逆序打印函数
template <typename T, std::size_t N>
void reverse_print(const std::array<T, N> &arr) {
    for (std::size_t i = N; i > 0; --i) {
        std::cout << arr[i - 1] << " ";
    }
    std::cout << std::endl;
}
int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    // 调用自定义逆序打印函数
    reverse_print(arr);
    return 0;
}
