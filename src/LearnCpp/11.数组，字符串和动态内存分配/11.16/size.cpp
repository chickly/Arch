#include <array>
#include <iostream>
template <typename T> void print(T arr) { printf("length = %d\n", size(arr)); }

int main() {
    std::array arr{2, 4, 5, 6, 7, 8, 1};
    printf("length = %d\n", size(arr));
    print(arr);
    return 0;
}
