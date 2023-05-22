#include <algorithm>
#include <array>
#include <iostream>
void doublenumber(int &arr) { arr *= 2; }

int main(int argc, char *argv[]) {
    std::array arr{1, 2, 3, 4};
    // std::for_each(arr.begin(), arr.end(), doublenumber);
    std::ranges::for_each(arr, doublenumber);
    // std::for_each(arr.begin(), arr.end(), doubleNumber); // 在 C++20
    // 之前的形式
    for (auto &i : arr) {

        doublenumber(i);
        std::cout << i << " ";
    }
    return 0;
}
