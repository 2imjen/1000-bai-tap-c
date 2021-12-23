// 132.Viết hàm liệt kê các giá trị chẵn trong mảng một chiều các số nguyên.

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void printEven(int a[], int n) {
    int i;

    for(i = 0; i < n; i++)
        if(a[i] % 2 == 0)
            printf("%d ", a[i]);
}

int main() {
    int n;
    int a[1000];

    do {
        printf("Enter number element of Arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);
    
    enterArr(a, n);

    printEven(a, n);

    return 0;
}