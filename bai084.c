// 84. Giải phương trình và biện luận phương trình ax + b = 0.

#include <stdio.h>
#include <math.h>

void solve(float a, float b) {
    float res;

    if(a != 0) {
        res = -b / a;
        printf("Phương trình có nghiệm duy nhất %f", res);
    } else if(b == 0)
        printf("Phương trình có vô số nghiệm");
    else
        printf("Phương trình vô nghiệm");
}

int main() {
    float a, b;

    scanf("%f%f", &a, &b);

    solve(a, b);

    /*

    */

    return 0;
}