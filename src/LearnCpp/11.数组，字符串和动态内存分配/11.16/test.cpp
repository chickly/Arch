#include <array>
#include <iostream>
template <typename T, size_t N>
void ReversePrint(std::array<T, N> const &arr, size_t index) {
    if (index == 0) {
        std::cout << arr[index] << " ";

    } else {
        std::cout << arr[index] << " ";
        ReversePrint(arr, index - 1);
    }
}
int main(int argc, char *argv[]) {
    std::array arr{1, 2, 3, 4, 5};
    ReversePrint(arr, arr.size() - 1);
    return 0;
}
