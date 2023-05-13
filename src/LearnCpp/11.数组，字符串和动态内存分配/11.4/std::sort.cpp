#include <algorithm>
#include <iostream>
#include <iterator>

int main() {
    int array[]{8, 5, 2, 6, 3, 7, 5, 1, 0};
    std::sort(std::begin(array), std::end(array));
    for (int i = 0; i < std::size(array); ++i) {
        std::cout << array[i] << '\n';
    }
    std::cout << "\n";
    return 0;
}
