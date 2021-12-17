// 52. Tìm chữ số nhỏ nhất của số nguyên dương n

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int tmp, cs;
    int csmin;

    scanf("%d", &n);

    tmp = n;
    csmin = tmp % 10;
    tmp /= 10;

    while(tmp) {
        cs = tmp % 10;
        if(cs < csmin) csmin = cs;

        tmp /= 10;
    }

    printf("chữ số nhỏ nhất của số nguyên dương %d: %d", n, csmin);

    return 0;
}