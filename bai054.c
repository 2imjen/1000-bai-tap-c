// 54. Hãy đếm số lượng chữ số nhỏ nhất của số nguyên dương n

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int tmp, cs, csmin;
    int dem;

    scanf("%d", &n);

    tmp = n;
    csmin = tmp % 10;
    tmp /= 10;

    dem = 1;
    while(tmp) {
        cs = tmp % 10;
        if(cs < csmin) {
            csmin = cs;
            dem = 1;
        } else if(cs == csmin)
            dem++;

        tmp /= 10;
    }

    printf("số lượng chữ số nhỏ nhất của số nguyên dương %d: %d", n, dem);

    return 0;
}