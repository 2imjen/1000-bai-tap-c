// 129.Viết hàm nhập mảng một chiều các số nguyên..

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void printArr(int a[], int n) {
    int i;

    for(i = 0; i < n; i++)
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

    return 0;
}