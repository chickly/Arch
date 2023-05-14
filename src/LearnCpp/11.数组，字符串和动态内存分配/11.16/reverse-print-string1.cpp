#include <algorithm>
#include <cstddef>
#include <iostream>
template <typename T> void ReversePrint(const T &str) {
    for (auto i = str.length() - 1; i >= 1; i--) {
        std::cout << str[i];
    }
}
int main(int argc, char *argv[]) {
    std::string str{"string"};
    ReversePrint(str);
    return 0;
}
