// 82. Viết chương trình tìm số lớn nhất trong ba số thực a, b, c

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float max;

    scanf("%f%f%f", &a, &b, &c);

    max = a;

    if(max < b) max = b;
    if(max < c) max = c;

    printf("Số lớn nhất trong 3 số là: %.2f", max);

    /*

    */

    return 0;
}