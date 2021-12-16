#include <stdio.h>

int main() {
    int n;
    int i;
    float res;

    scanf("%d", &n);

    res = 0;
    for (i = 1; i <= n; i++)
        res += 1.0 / ((i + 1) * i);

    printf("%f", res);

    return 0;
}