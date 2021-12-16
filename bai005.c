#include <stdio.h>

int main() {
    int n;
    int i;
    float res;

    scanf("%d", &n);

    res = 0;
    for (i = 0; i <= n; i++)
        res += 1.0 / (2 * i + 1);

    printf("%f", res);

    return 0;
}