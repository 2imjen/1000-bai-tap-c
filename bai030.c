#include <stdio.h>

int main() {
    int n;
    int i;
    int res;

    scanf("%d", &n);

    res = 0;
    for(i = 1; i <= n / 2; i++)
        if(n % i == 0)
            res += i;

    if(res == n)
        printf("%d la so hoan thien", n);
    else
        printf("%d khong phai la so hoan thien", n);

    return 0;
}