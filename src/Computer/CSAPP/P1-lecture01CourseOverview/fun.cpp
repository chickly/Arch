#include <cstdio>
using struct_t = struct {
    int a[2];
    double d;
};

double fun(int n) {
    volatile struct_t s;
    s.d = 3.14;
    s.a[n] = 1073747824;
    return s.d;
}
int main() {
    printf("%f\n", fun(1));
    printf("%f\n", fun(2));
    printf("%lf\n", fun(3));
    // printf("%f\n", fun(4));
    //   printf("%f\n", fun(5));

    return 0;
}
