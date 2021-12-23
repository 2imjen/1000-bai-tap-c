// 128.Viết hàm nhật mảng một chiều các số thực

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void printArr(float a[], int n) {
    int i;

    for(i = 0; i < n; i++)
        printf("%f ", a[i]);
}

int main() {
    int n;
    float a[1000];

    do {
        printf("Enter number element of arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);
    
    enterArr(a, n);

    return 0;
}