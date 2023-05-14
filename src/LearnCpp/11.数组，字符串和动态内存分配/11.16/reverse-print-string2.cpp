#include <cstddef>
#include <iostream>
#include <stdexcept>
#include <string>
template <typename T> void ReversePrint(const T &str, int len) {
    if (len < 0) {
        return;
    }
    std::cout << str[len];
    ReversePrint(str, len - 1);
}
int main(int argc, char *argv[]) {
    std::string str{"string"};
    ReversePrint(str, str.length() - 1);
    return 0;
}
