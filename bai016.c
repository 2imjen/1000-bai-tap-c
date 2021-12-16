#include <stdio.h>

int main() {
    int n, x;
    int i, tong, tich;
    float res;

    scanf("%d%d", &x, &n);

    res = 0;
    tong = 0;
    tich = 1;
    for (i = 1; i <= n; i++) {
        tong += i;
        tich *= x;
        res += (float)tich / tong;
    }

    printf("%f", res);

    return 0;
}