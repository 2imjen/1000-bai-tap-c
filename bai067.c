// 67

#include <stdio.h>
#include <math.h>

int main() {
    int n, x;
    int res;
    int tich, i;

    scanf("%d%d", &n, &x);

    res = 0;
    tich = 1;
    for(i = 1; i <= n; i++) {
        tich *= x;
        
        res += tich * pow(-1, i + 1);    
    }

    printf("%d", res);

    /* test case

    */
    return 0;
}