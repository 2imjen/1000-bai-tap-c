// 49. Cho số nguyên dương n. Hãy tìm chữ số đầu tiên của n.

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int tmp;

    scanf("%d", &n);

    tmp = n;
    while(tmp > 9)
        tmp /= 10;

    printf("chữ số đầu tiên của %d: %d", n, tmp);

    return 0;
}