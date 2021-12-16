#include <stdio.h>

int main() {
    int n;
    int i;
    float res;

    scanf("%d", &n);

    res = 0;
    for (i = 1; i <= n; i++)
        res += (float)i / (i + 1);

    printf("%f", res);

    return 0;
}