// 59. Hãy kiểm tra số nguyên dương n có phải số đối xứng hay không?

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int tmp;
    int rev;

    scanf("%d", &n);

    tmp = n;
    rev = 0;
    while(tmp) {
        rev = rev * 10 + tmp % 10;
        tmp /= 10;
    }

    if(rev == n)
        printf("%d la so doi xung", n);
    else
        printf("%d khong phai la so doi xung", n);

    return 0;
}