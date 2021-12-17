// 47. Hãy tính tổng các chữ số chẵn của số nguyên dương n.

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int tmp, cs;
    int tong;

    scanf("%d", &n);

    tmp = n;
    tong = 0;

    while(tmp) {
        cs = tmp % 10;
        if(cs % 2 == 0)
            tong += cs;

        tmp /= 10;
    }

    printf("tổng các chữ số chẵn của số nguyên dương %d: %d", n, tong);

    return 0;
}