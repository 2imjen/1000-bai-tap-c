#include <stdio.h>

int main() {
    int n;
    int i;
    long long res;

    scanf("%d", &n);

    res = 1;
    for(i = 1; i <= n; i++)
        if(n % i == 0)
            res *= i;

    printf("%lld", res);

    return 0;
}