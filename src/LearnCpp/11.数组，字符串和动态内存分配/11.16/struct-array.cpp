#include <array>
#include <iostream>
struct house {
    int a;
    int b;
    int c;
};
int main(int argc, char *argv[]) {
    std::array<house, 3> House{{
        {15, 3, 20},
        {14, 4, 10},
        {13, 3, 10},
    }};
    for (const auto &i : House) {
        std::cout << " " << i.a << " " << i.b << " " << i.c << "\n";
    }
    return 0;
}
