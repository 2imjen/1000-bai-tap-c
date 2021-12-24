// 185.Hãy liệt kê các vị trí mà giá trị tại vị trí đó là số chính phương trong 
// mảng một chiều các số nguyên


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

void solve(int a[], int n) {
    int i;

    for(i = 0; i < n; i++)
        if(squareNum(a[i]))
            printf("%d ", i);
}

int main() {
    int n;
    int a[1000];

    do {
        printf("Enter number element of arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);

    solve(a, n);

    return 0;
}