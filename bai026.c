#include <stdio.h>

int main() {
    int n;
    int i;
    int res;

    scanf("%d", &n);

    res = 1;
    for(i = 1; i <= n; i++)
        if(n % i == 0 && i % 2 != 0)
            res *= i;

    printf("%d", res);

    return 0;
}