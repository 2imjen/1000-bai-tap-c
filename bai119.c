// 119.Liệt kê tất cả các số nguyên tố nhỏ hơn n.

#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    int i, can;
    if(n < 2) return 0;

    can = sqrt(n);
    for(i = 2; i <= can; i++)
        if(n % i == 0)
            return 0;

    return 1;
}

void solve(int n) {
    int i;

    for(i = 0; i < n; i++)
        if(isPrime(i))
            printf("%d ", i);
}

int main() {
    int n;

    scanf("%d", &n);

    solve(n);


    /*

    */
    return 0;
}