// 75. Kiểm tra số nguyên 4 byte có dạng 2^k hay không?

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int tmp;
    float k;

    scanf("%d", &n);

    k = log(n) / log(2);

    tmp = (int)k;

    if(k == tmp)
        printf("%d có dạng 2^%d", n, tmp);
    else
        printf("%d không có dạng 2^k", n);

    /* test case

    */
    return 0;
}