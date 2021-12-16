#include <stdio.h>

int main() {
    int n;
    int i;
    long long res;

    scanf("%d", &n);

    res = 0;
    for (i = 1; i <= n; i++)
        res += i;

    printf("%lld", res);
    
    return 0;
}