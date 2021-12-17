/*60. Hãy kiểm tra các chữ số của số nguyên dương n có tăng dần từ trái 
sang phải hay không?*/

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int tmp, prev, cs;    
    int check;

    scanf("%d", &n);

    tmp = n;
    check = 1;
    while(tmp > 9) {
        cs = tmp % 10;
        prev = tmp / 10 % 10;
        if(prev >= cs) {
            check = 0;
            break;
        }

        tmp /= 10;
    }

    if(check)
        printf("các chữ số của số nguyên dương %d có tăng dần từ trái sang phải", n);
    else
        printf("các chữ số của số nguyên dương %d không tăng dần từ trái sang phải", n);

    return 0;
}