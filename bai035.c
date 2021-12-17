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

    for(i = n; i > 0; i--)
        res = sqrt(i + res);

    printf("%f", res);

    return 0;
}