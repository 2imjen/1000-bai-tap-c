#include <stdio.h>

int main() {
    int n;
    int i;
    int res;

    scanf("%d", &n);

    res = 0;
    for(i = n / 2; i > 0; i--)
        if(n % i == 0 && i % 2 != 0) {
            res = i;
            break;
        }

    printf("%d", res);

    return 0;
}