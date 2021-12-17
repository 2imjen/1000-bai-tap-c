#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int i;
    float res;

    do {
        scanf("%d", &n);
    } while(n < 0);

    res = 0;

    for(i = 2; i <= n; i++)
        res = pow(i + res, 1.0 / i);

    printf("%f", res);

    return 0;
}