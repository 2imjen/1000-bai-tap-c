// 45. Hãy tính tích các chữ số của số nguyên dương n

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int tmp;
    int res;

    scanf("%d", &n);

    tmp = n;
    res = 1;
    while(tmp) {
        res *= tmp % 10;
        tmp /= 10;
    }

    printf("Tich cac chu so cua so nguyen duong %d: %d", n, res);

    return 0;
}