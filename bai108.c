//108. Viết hàm tính S = x^y

#include <stdio.h>
#include <math.h>

float x_mu_y(float x, float y) {
    return pow(x, y);
}

int main() {
    float x, y;
    float res;

    scanf("%f%f", &x, &y);

    res = x_mu_y(x, y);

    printf("%.2f", res);

    /*

    */
    return 0;
}