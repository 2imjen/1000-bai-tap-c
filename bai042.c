#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int i;
    float res;
    float tmp;

    do {
        scanf("%d", &n);
    } while(n < 0);

    res = sqrt(2 * n);
    tmp = round(res);

    printf("%.0f", tmp - 1);

    return 0;
}