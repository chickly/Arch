#include <iostream>
template <typename T, typename U> struct pair {
    T first{};
    U second{};
};
template <typename T, typename U> pair(T, U) -> pair<T, U>;
int main() {
    pair<int, int> p1{2, 1}; // C++ 14
    pair p1{
        2.3,
    };                                      // C++ 17
    printf("%d %d\t", p1.first, p1.second); // C-98
    std::cout << p1.first;
    return 0;
}
