#include <iostream>
// 你好
long fib(unsigned int n) {
    int n0 = 0, n1 = 1;
    long int n2{};
    if (n == 1)
        return n0;
    else if (n == 2)
        return n1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main() {
    using namespace std;

    int n{};
    cout << "enter the number:";
    cin >> n;
    for (int i = 1; i < n; i++) {
        cout << fib(i) << " ";
    }
    return 0;
}
