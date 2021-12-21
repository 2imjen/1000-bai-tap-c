// 79. Hãy đếm số lượng chữ số của số nguyên dương n

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int dem;
    int tmp;

    scanf("%d", &n);

    dem = 0;
    tmp = n;

    if(tmp == 0)
        dem = 1;

    while(tmp) {
        dem++;
        tmp /= 10;
    }

    printf("Số lượng chữ số của số nguyên dương n: %d", dem);

    /*

    */

    return 0;
}