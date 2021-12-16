#include <stdio.h>

int main() {
    int n;
    int i;
    float res;

    scanf("%d", &n);

    res = 0;
    for (i = 0; i <= n; i++)
        res += (2 * i + 1) / (2 * i + 2);

    printf("%f", res);

    return 0;
}