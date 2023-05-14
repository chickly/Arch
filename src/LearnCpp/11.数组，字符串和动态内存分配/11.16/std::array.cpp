#include <array>
#include <cstddef>
#include <iostream>
int main() {
    std::array arr{2, 3, 4, 5, 6, 9};

    for (auto i : arr) {
        std::cout << i << "\t";
    }
    return 0;
}
