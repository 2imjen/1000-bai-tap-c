#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int i, gt;
    float res;

    do {
        scanf("%d", &n);
    } while(n < 0);

    gt = 1;
    res = 0;
    for(i = 1; i <= n; i++) {
        gt *= i;
        res = sqrt(gt + res);
    }

    printf("%f", res);

    return 0;
}