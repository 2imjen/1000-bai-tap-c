#include <stdio.h>
#include <math.h>

int main() {
    int n, i, can, ok;

    scanf("%d", &n);

    if(n < 0) {
        printf("%d khong la so nguyen to", n);
        return 0;
    }

    can = sqrt(n);
    ok = 1;

    for(i = 2; i <= can; i++)
        if(n % i == 0) {
            ok = 0;
            break;
        }

    if(ok)
        printf("%d la so nguyen to", n);
    else
        printf("%d khong la so nguyen to", n);

    return 0;
}