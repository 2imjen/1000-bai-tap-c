// 57. Hãy kiểm tra số nguyên dương n có toàn chữ số chẵn hay không?

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int tmp, cs;
    int check;

    scanf("%d", &n);

    tmp = n;
    check = 1;
    while(tmp) {
        cs = tmp % 10;
        if(cs % 2 != 0) {
            check = 0;
            break;
        }

        tmp /= 10;
    }

    if(check)
        printf("%d toan chu so chan", n);
    else
        printf("%d khong chua toan chu so chan", n);

    return 0;
}