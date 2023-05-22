#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr{1, 2, 3, 4, 5};
    std::cout << arr.size() << "\n";
    arr.resize(3);
    std::cout << arr.size();
    return 0;
}
