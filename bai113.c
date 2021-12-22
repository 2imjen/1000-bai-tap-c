// 113. Lập chương trình sin(x) với độ chính xác 0.00001

#include <stdio.h>
#include <math.h>

const float e = 1e-4; // sai số

int main() {
    double x;
    long long gt, dau, i;
    double tich, t;
    double res;

    scanf("%lf", &x);



    gt = 1;
    tich = x;
    t = res = x;
    for(i = 1; t > e; i++) {
        gt *= (2*i+1)*2*i;
        tich *= x*x;
        t = tich / gt;
        res += pow(-1, i)*t;
    }

    printf("%lf %lf", res, sin(x));

    /*

    */
    return 0;
}