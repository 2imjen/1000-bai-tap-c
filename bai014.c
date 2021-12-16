#include <stdio.h>

int main() {
    int n, x;
    int i, tich;
    long long res;

    scanf("%d%d", &x, &n);

    res = x;
    tich = x;
    for (i = 1; i <= n; i++) {
        tich *= x*x;
        res += tich;
    }

    printf("%lld", res);

    return 0;
}