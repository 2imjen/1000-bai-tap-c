// 46. Hãy đếm số lượng chữ số lẻ của số nguyên dương n.

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int tmp, cs;
    int dem;

    scanf("%d", &n);

    tmp = n;
    dem = 0;

    while(tmp) {
        cs = tmp % 10;
        if(cs % 2 != 0)
            dem++;

        tmp /= 10;
    }

    printf("số lượng chữ số lẻ của số nguyên dương %d: %d", n, dem);

    return 0;
}