#include <stdio.h>

int main() {
    int n, x;
    int i, lt, gt;
    float res;

    scanf("%d%d", &x, &n);

    res = 1 + x;
    lt = x;
    gt = 1;
    for (i = 1; i <= n; i++) {
        gt *= 2 * i * (2 * i + 1);
        lt *= x * x;
        res += (float)lt / gt;
    }

    printf("%f", res);

    return 0;
}