#include <iostream>
#include <vector>
void PrintVector(const std::vector<int> &array) {
    std::cout << "\n"
              << "This is length " << array.size();
}
int main() {
    std::vector arr{1, 2, 3, 4};
    for (const auto &array : arr) {
        std::cout << array << " ";
    }
    PrintVector(arr);
    std::vector<int> empty{};

    PrintVector(empty);

    return 0;
}
