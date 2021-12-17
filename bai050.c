// 50. Hãy tìm chữ số đảo ngược của số nguyên dương n.

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int tmp;
    int res;

    scanf("%d", &n);

    tmp = n;
    res = 0;
    while(tmp) {
        res = res * 10 + tmp % 10;
        tmp /= 10;
    }

    printf("số đảo ngược của số nguyên dương %d: %d", n, res);

    return 0;
}