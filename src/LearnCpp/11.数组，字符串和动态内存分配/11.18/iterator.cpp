#include <array>
#include <iostream>
#include <iterator>

int main() {
    std::array arr{1, 2, 3, 4, 5};
    auto begin{arr.begin()};
    auto end{arr.end()};
    for (auto *ptr{begin}; ptr != end; ptr++) {
        std::cout << *ptr << " ";
    }
    return 0;
}
