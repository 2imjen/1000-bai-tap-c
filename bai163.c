// 163.Tìm số chính phương đầu tiên trong mảng một chiều các số nguyên.

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int squareNum(int n) {
    int can;
    if(n < 0) return 0;

    can = sqrt(n);

    if(can * can == n)
        return 1;

    return 0;
}

int solve(int a[], int n) {
    int i;

    for(i = 0; i < n; i++)
        if(squareNum(a[i]))
            return a[i];

    return -1;
}

int main() {
    int n;
    int a[1000];
    int ret;

    do {
        printf("Enter number element of arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);

    ret = solve(a, n);

    if(ret != -1)
        printf("First square number in arr: %d", ret);
    else
        printf("Not exist square number in arr");

    return 0;
}