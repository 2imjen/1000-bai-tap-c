// 117. Viết chương trình nhập n và tính tổng
// S(n) = x + x^2 + ... + x^n

#include <stdio.h>
#include <math.h>

double sum(double x, int n) {
    double tich = 1;
    double res = 0;
    int i = 1;

    for(i = 1; i <= n; i++) {
        tich *= x;
        res += tich;
    }
    
    return res;
}

int main() {
    int n;
    double x;

    scanf("%d%lf", &n, &x);

    printf("S(%d) = %.4lf", n, sum(x, n));

    /*

    */
    return 0;
}