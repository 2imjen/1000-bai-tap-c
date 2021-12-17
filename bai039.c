#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int i , gt;
    float res;

    do {
        scanf("%d", &n);
    } while(n < 0);

    res = 0;
    gt = 1;

    for(i = 1; i <= n; i++) {
        gt *= i;
        res = pow(gt + res, 1.0 / (i+1));
    }

    printf("%f", res);

    return 0;
}