#include <array>
#include <cstddef>
#include <iostream>
int main() {
    std::array arr{1, 2, 3, 4, 5};
    std::size_t length{std::size(arr)};
    for (int i{0}; i < length; i++) {
        std::cout << arr[i] << " ";
    }
    printf("\n");
    int index{0};
    while (index < length) {
        std::cout << arr[index] << " ";
        ++index;
    }
    printf("\n");
    for (auto *ptr{arr.data()}; ptr != arr.data() + length; ptr++) {
        std::cout << *ptr << " ";
    }
    printf("\n");
    for (auto i : arr) {
        std::cout << i << " ";
    }
    return 0;
}
