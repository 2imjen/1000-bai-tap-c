#include <stdio.h>

int main() {
    int n, x;
    int i, lt, gt;
    float res;

    scanf("%d%d", &x, &n);

    res = 0;
    lt = 1;
    gt = 1;
    for (i = 1; i <= n; i++) {
        gt *= i;
        lt *= x;
        res += (float)lt / gt;
    }

    printf("%f", res);

    return 0;
}