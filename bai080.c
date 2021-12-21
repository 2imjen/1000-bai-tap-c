

#include <stdio.h>
#include <math.h>

int main() {
    
    int n, x;
    int i, tong, tich;
    float s;

    scanf("%d%d", &n, &x);

    tong = 0;
    tich = 1;
    s = 0;
    for(i = 1; i <= n; i++) {
        tong += i;
        tich *= x;
        s += (float)tich / tong;
    }

    printf("S(%d) = %f", n, s);

    /*

    */

    return 0;
}