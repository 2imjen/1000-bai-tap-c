// 116.Viết chương trình nhập n và tính tổng S(n) = 1 + 2 + ... + n

#include <stdio.h>
#include <math.h>

int sum(int n) {
    return n * (n+1) / 2;
}

int main() {
    int n;
    
    scanf("%d", &n);

    printf("S(%d) = %d", n, sum(n));

    /*

    */
    return 0;
}