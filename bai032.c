#include <stdio.h>
#include <math.h>

int main() {
    int n, i, can;

    scanf("%d", &n);

    if(n <= 0) {
        printf("%d khong la so chinh phuong", n);
        return 0;
    }

    can = sqrt(n);

    if(can * can == n)
        printf("%d la so chinh phuong", n);
    else
        printf("%d khong la so chinh phuong", n);

    return 0;
}