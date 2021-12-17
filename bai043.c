// 43. Hãy đếm số lượng chữ số của số nguyên dương n

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int tmp;
    int dem;

    scanf("%d", &n);

    dem = 0;
    tmp = n;
    while(tmp) {
        dem++;
        tmp /= 10;
    }

    printf("số lượng chữ số của số nguyên dương %d: %d", n, dem);

    return 0;
}