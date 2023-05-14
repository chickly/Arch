#include <array>
#include <cstddef>
#include <iostream>

int main() {
    std::array myArray{7, 3, 1, 9, 5};

    // Iterate through the array and print the value of the elements
    for (std::size_t i{0}; i < myArray.size(); ++i) {
        std::cout << myArray[i] << ' ';
    }

    std::cout << '\n';

    return 0;
