#include <stdio.h>

int main() {
    int n;
    int i;
    int res;

    scanf("%d", &n);

    res = 0;
    for(i = 1; i <= n / 2; i++)
        if(n % i == 0)
            res += i;

    printf("%d", res);

    return 0;
}