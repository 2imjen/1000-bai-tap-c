// 86. Tính S(n) = 1^3 + 2^3 + ... + n^3
// áp dụng CT S(n) = [n(n+1)/2]^2

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int res;

    scanf("%d", &n);

    res = pow(n*(n+1)/2, 2);

    printf("%d", res);
    /*

    */

    return 0;
}