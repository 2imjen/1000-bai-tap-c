// 71

#include <stdio.h>
#include <math.h>

int main() {
    int n, x;
    int tong, i, tich;
    float res;

    scanf("%d%d", &n, &x);

    tong = 0, tich = 1;
    res = 0;
    for(i = 1; i <= n; i++) {
        tich *= x;
        tong += i;
        res += (float)tich / tong * pow(-1, i);
    }

    printf("%f", res);
    /* test case

    */
    return 0;
}