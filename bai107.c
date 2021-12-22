// 107: Tính x^(1/n);

#include <stdio.h>
#include <math.h>

float can_bac_n(int n, float x) {
    return pow(x, 1.0 / n);
}

int main() {
    int n;
    float res;
    float x;

    scanf("%d%f", &n, &x);

    res = can_bac_n(n, x);

    printf("%f", res);
    
}