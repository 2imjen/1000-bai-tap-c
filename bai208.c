// 208.Tính tổng các giá trị chính phương trong mảng một chiều các số
// nguyên (tongchinhphuong).

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
    if(can * can == n) return 1;

    return 0;
}

int squareNumSum(int a[], int n) {
    int i;
    int sum = 0;

    for(i = 0; i < n; i++)
        if(squareNum(a[i]))
            sum += a[i];

    return sum;
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

    printf("Sum of square number of arr: %d", squareNumSum(a, n));

    return 0;
}