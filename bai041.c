#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int i;
    float res;

    do {
        scanf("%d", &n);
    } while(n < 0);

    res = 1;

    for(i = 1; i <= n; i++)
        res = 1.0 / (1 + res);

    printf("%f", res);

    return 0;
}