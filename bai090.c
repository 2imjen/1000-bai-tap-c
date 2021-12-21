// 90. Viết chương trình tìm số nguyên dương m lớn nhất sao cho 
// 1 + 2 + 3 + … + m < N.

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int i;
    float res;
    float tmp;

    do {
        scanf("%d", &n);
    } while(n < 0);

    res = sqrt(2 * n);
    tmp = round(res);

    printf("%.0f", tmp - 1);

    return 0;
}