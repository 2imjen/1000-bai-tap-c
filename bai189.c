// 189.Hãy liệt kê các giá trị trong mảng một chiều các số nguyên tố có chữ số
// đầu tiên là chữ số lẻ (lietketdaule).

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int firstOddDigit(int n) {
    int tmp = n;

    while(tmp > 9)
        tmp /= 10;

    if(tmp % 2 != 0) return 1;

    return 0;
}

void solve(int a[], int n) {
    int i;

    for(i = 0; i < n; i++)
        if(firstOddDigit(a[i]))
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