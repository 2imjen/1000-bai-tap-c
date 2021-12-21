// 93. Viết chương trình kiểm tra một số có phải số nguyên tố hay không

#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    int i;
    int can = sqrt(n);

    if(n < 2) return 0;

    for(i = 2; i <= can; i++)
        if(n % i == 0)
            return 0;
        
    return 1;
}

int main() {
    int n;
    int res;

    scanf("%d", &n);

    res = isPrime(n);

    if(res)
        printf("%d là số nguyên tố", n);
    else
        printf("%d không phải là số nguyên tố", n);

    return 0;
}