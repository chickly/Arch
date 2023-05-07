#include <iostream>

int main() {
    int x{5};
    int *ptr{&x};
    std::cout << *ptr << std::endl;
    {
        int y{6};
        ptr = &y;
        std::cout << *ptr << std::endl;
    }

    std::cout << *ptr << std::endl;

    return 0;
}
