

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int tong, i;
    float res;

    scanf("%d", &n);

    tong = 0;
    res = 0;
    for(i = 1; i <= n; i++) {
        tong += i;
        res += 1.0 / tong * pow(-1, i + 1);
    }

    printf("%f", res);
    /* test case

    */
    return 0;
}