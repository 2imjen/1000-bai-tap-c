// 69

#include <stdio.h>
#include <math.h>

int main() {
    int n, x;
    int i;
    int res;

    scanf("%d%d", &n, &x);

    res = 0;
    for(i = 0; i <= n; i++)
        res += pow(x, 2 * i + 1) * pow(-1, i);

    printf("%d", res);
    /* test case

    */
    return 0;
}