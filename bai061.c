// Hãy kiểm tra các chữ số của số nguyên dương n có giảm dần từ trái 
// sang phải hay không?

#include <stdio.h>

int main() {
    int n;
    int cs, prev, tmp;
    int check;

    scanf("%d", &n);

    tmp = n;
    check = 1;
    while(tmp > 9) {
        cs = tmp % 10;
        tmp /= 10;
        prev = tmp % 10;

        if(prev <= cs) {
            check = 0;
            break;
        }
    }

    if(check == 1)
        printf("các chữ số của số nguyên dương %d giảm dần từ trái sang phải", n);
    else
        printf("các chữ số của số nguyên dương %d không giảm dần từ trái sang phải", n);

    /*
        test case: 
            54321

            741231
    */
    return 0;
}