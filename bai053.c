// 53. Hãy đếm số lượng chữ số lớn nhất của số nguyên dương n

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int tmp, cs, csmax;
    int dem;

    scanf("%d", &n);

    tmp = n;
    csmax = tmp % 10;
    tmp /= 10;
    
    dem = 1;

    while(tmp) {
        cs = tmp % 10;
        if(cs > csmax) {
            csmax = cs;
            dem = 1;
        } else if(cs == csmax) dem++;

        tmp /= 10;
    }

    printf("số lượng chữ số lớn nhất của số nguyên dương %d: %d", n, dem);

    return 0;
}