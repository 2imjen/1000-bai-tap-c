//68

#include <stdio.h>
#include <math.h>

int main() {
    int n, x;
    int tich, i;
    int res;

    scanf("%d%d", &n, &x);

    tich = 1;
    res = 0;
    for(i = 1; i <= n; i++) {
        tich *= x * x;
        res += tich * pow(-1, i);
    }

    printf("%d", res);

    /* test case

    */
    return 0;
}