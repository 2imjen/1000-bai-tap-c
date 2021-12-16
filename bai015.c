#include <stdio.h>

int main() {
    int n;
    int i, tong;
    float res;

    scanf("%d", &n);

    res = 0;
    tong = 0;
    for (i = 1; i <= n; i++) {
        tong += i;
        res += 1.0 / tong;
    }

    printf("%f", res);

    return 0;
}