// 48. Hãy tính tích các chữ số lẻ của số nguyên dương n.

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int tmp, cs;
    int tich;

    scanf("%d", &n);

    tmp = n;
    tich = 1;
    while(tmp) {
        cs = tmp % 10;
        if(cs % 2 != 0)
            tich *= cs;

        tmp /= 10;
    }

    printf("tính tích các chữ số lẻ của số nguyên dương %d: %d", n, tich);

    return 0;
}