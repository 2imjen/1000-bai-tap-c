// 44. Hãy tính tổng các chữ số của số nguyên dương n

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int tmp;
    int res;

    scanf("%d", &n);

    res = 0;
    tmp = n;
    while(tmp) {
        res += tmp % 10;
        tmp /= 10;
    }

    printf("Tong cac chu so cua so nguyen duong %d: %d", n, res);

    return 0;
}