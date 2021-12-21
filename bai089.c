// 89. Viết chương trình tính tổng các giá trị lẻ nguyên dương nhỏ hơn N.

#include <stdio.h>
#include <math.h>

int main() {
    int res;
    int n;
    int i;

    scanf("%d", &n);

    res = 0;
    for(i = 1; i < n; i+=2)
        res += i;

    printf("%d", res);
    /*

    */

    return 0;
}