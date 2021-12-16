#include <stdio.h>

int main() {
    int n;
    int i;
    int res;
    
    scanf("%d", &n);

    res = 0;
    for(i = 1; i <= n; i++)
        if(n % i == 0)
            res++;

    printf("%d", res);

    return 0;
}