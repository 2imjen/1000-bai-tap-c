// 190.Hãy liệt kê các giá trị có toàn chữ số lẻ trong mảng một chiều các số nguyên.

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int oddDigit(int n) {
    int tmp = n;

    while(tmp) {
        if(tmp % 10 % 2 == 0)
            return 0;
        tmp /= 10;
    }

    return 1;
}

void solve(int a[], int n) {
    int i;

    for(i = 0; i < n; i++)
        if(oddDigit(a[i]))
            printf("%d ", a[i]);
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