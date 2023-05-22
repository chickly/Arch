#include <iostream>

int main() {
    int stack[10000000];
    std::cout << "hi" << stack[0]; // we'll use stack[0] here so the compiler
                                   // won't optimize the array away

    return 0;
}
