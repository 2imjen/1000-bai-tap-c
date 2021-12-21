// 87. Tìm số nguyên dương n nhỏ nhất sao cho 1 + 2 + … + n > 10000

#include <stdio.h>
#include <math.h>

int main() {
    int i;
    int tong;

    i = 1;
    tong = 0;
    while(tong <= 10000) {
        i++;
        tong += i;
    }

    printf("%d", i);
    /*

    */

    return 0;
}