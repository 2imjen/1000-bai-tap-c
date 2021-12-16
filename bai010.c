#include <stdio.h>

int main() {
    int n, x;
    int i;
    long long res;

    scanf("%d%d", &x, &n);

    res = 1;
    for (i = 1; i <= n; i++)
        res *= x;

    printf("%lld", res);

    return 0;
}