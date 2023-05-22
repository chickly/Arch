#include <algorithm>
#include <array>
#include <functional>
#include <iostream>
int main(int argc, char *argv[]) {
    std::array arr{2, 5, 6, 8, 1, 6, 857, 923, 2135, 23};
    std::sort(arr.begin(), arr.end(), std::greater());
    for (const auto array : arr) {
        std::cout << array << " ";
    }
    return 0;
}
