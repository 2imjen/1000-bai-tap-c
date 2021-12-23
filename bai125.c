// 125.Viết hàm đếm số lượng số nguyên tố nhỏ hơn 100 trong mảng.

#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    int i;
    int can;

    if(n < 2) return 0;

    can = sqrt(n);
    for(i = 2; i <= can; i++)
        if(n % i == 0)
            return 0;

    return 1;
}

int solve() {
    int i;
    int count = 0;

    for(i = 2; i <= 100; i++)
        if(isPrime(i))
            count++;

    return count;
}

int main() {
    int count = solve();

    printf("Number of prime less than 100 is %d", count);

    return 0;
}