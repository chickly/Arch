#include <algorithm>
#include <array>
#include <iostream>
int main(int argc, char *argv[]) {
    std::array arr{12, 14, 55, 66, 78, 16};
    auto replace{0};
    auto temp{0};
    std::cout << "Please enter a value to temp for and replace with: ";
    std::cin >> temp >> replace;

    auto found{std::find(arr.begin(), arr.end(), temp)};
    if (found == arr.end()) {
        std::cout << "Could not find " << temp << "\n";
    } else {
        *found = replace;
    }
    for (const auto i : arr) {
        std::cout << i << " ";
    }
    return 0;
}
