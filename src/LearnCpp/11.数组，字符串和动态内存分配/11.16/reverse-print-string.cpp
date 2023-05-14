#include <algorithm>
#include <iostream>
#include <string>
int main() {
    std::string str{"string"};
    std::reverse(str.begin(), str.end());
    std::cout << str;
    return 0;
}
