#include <stdio.h>
#include <math.h>

int main() {
    int n, x;
    int i , tich;
    float res;

    do {
        scanf("%d%d", &n, &x);
    } while(n < 0);

    res = 0;
    tich = 1;

    for(i = 1; i <= n; i++) {
        tich *= x;
        res = sqrt(tich + res);
    }

    printf("%f", res);

    return 0;
}