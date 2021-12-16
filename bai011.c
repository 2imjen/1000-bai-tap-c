#include <stdio.h>

int main() {
    int n;
    int i, tich;
    long long res;

    scanf("%d", &n);

    res = 0;
    tich = 1;
    for (i = 1; i <= n; i++) {
        tich *= i;
        res += tich;
    }

    printf("%lld", res);

    return 0;
}