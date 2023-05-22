#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <string_view>
std::string Str{};
bool String(std::string_view str) {
    return (str.find(Str) != std::string_view::npos);
}

int main() {
    std::cout << "Please enter a string:";
    std::getline(std::cin, Str);
    std::array<std::string_view, 4> str{"apple", "banana", "walnut", "lemon"};
    auto found(std::count_if(str.begin(), str.end(), String));
    std::cout << "Counted " << found << " found(s)";
    return 0;
}
