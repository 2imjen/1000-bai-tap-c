// 74

#include <stdio.h>
#include <math.h>

int main() {
    int n, x;
    int tich, gt, i;
    float res;

    scanf("%d%d", &n, &x);

    tich = x;
    gt = 1;
    res = 1 - x;
    for(i = 1; i <= n; i++) {
        tich *= x*x;
        gt *= (2 * i + 1) * 2 * i;
        res += (float)tich / gt * pow(-1, i+1);
    }

    printf("%f", res);

    /* test case

    */
    return 0;
}