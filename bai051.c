// 51. Tìm chữ số lớn nhất của số nguyên dương n.

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int tmp, cs;
    int csmax;

    scanf("%d", &n);

    tmp = n;
    csmax = tmp % 10;
    tmp /= 10;

    while(tmp) {
        cs = tmp % 10;
        if(cs > csmax) csmax = cs;

        tmp /= 10;
    }

    printf("chữ số lớn nhất của số nguyên dương %d: %d", n, csmax);

    return 0;
}