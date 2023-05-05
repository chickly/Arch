#include <cmath>
#include <cstdio>
#include <cstdlib>
int main() {
    int a;
    char m;
    scanf("%d %c", &a, &m);

    int i, j, k;
    int b = sqrt((a + 1) / 2);

    int c = 2 *b - int d = a - b * (1 + c) + 1;

    for (i = 1; i <= b; i++) {
        for (k = 1; k < i; k++) {
            printf(" ");
        }
        for (j = c - 2 * (i - 1); j > 0; j--) {
            printf("%c", m);
        }
        printf("\n");
    }
    for (i = 1; i < b; i++) {
        for (k = b - i - 1; k > 0; k--) {
            printf(" ");
        }

        for (j = 2 * i + 1; j > 0; j--) {
            printf("%c", m);
        }
        printf("\n");
    }
    printf("%d", d);
    return 0;
}
