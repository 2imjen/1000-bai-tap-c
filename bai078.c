// 78. Liệt kê tất cả các ước số của số nguyên dương n

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int i;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        if(n % i == 0)
            printf("%d ", i);

    /*
        
    */

    return 0;
}