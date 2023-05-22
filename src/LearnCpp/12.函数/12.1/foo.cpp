#include <iostream>

int foo() { return 5; }

int main(int argc, char *argv[]) {
    std::cout << foo() << "\n";
    std::cout << reinterpret_cast<void *>(foo);
    return 0;
}
