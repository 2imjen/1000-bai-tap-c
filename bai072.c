//72

#include <stdio.h>
#include <math.h>

int main() {
    int n, x;
    int tich, gt, i;
    float res;

    scanf("%d%d", &n, &x);

    tich = 1;
    gt = 1;
    res = 0;
    for(i = 1; i <= n; i++) {
        gt *= i;
        tich *=  x;
        res += (float)tich / gt * pow(-1, i);
    }

    printf("%f", res);

    /* test case

    */
    return 0;
}