#include <stdio.h>

int main() {
    int n, x;
    int i, tich;
    long long res;

    scanf("%d%d", &x, &n);

    res = 0;
    tich = 1;
    for (i = 1; i <= n; i++) {
        tich *= x;
        res += tich;
    }

    printf("%lld", res);

    return 0;
}