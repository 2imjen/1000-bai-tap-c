// 120.Liệt kê tất cả các số chính phương nhỏ hơn n

#include <stdio.h>
#include <math.h>

int squareNum(int n) {
    int can;
    if(n <= 0) return 0;

    can = sqrt(n);

    if(can * can == n) return 1;

    return 0;
}

void solve(int n) {
    int i;

    for(i = 1; i < n; i++)
        if(squareNum(i))
            printf("%d ", i);
}

int main() {
    int n;

    scanf("%d", &n);

    solve(n);
    /*

    */
    return 0;
}