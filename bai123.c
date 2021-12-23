// 123.Viết hàm tìm một vị trí mà giá trị tại vị trí đó là một giá trị nhỏ nhất 
// trong mảng một chiều các số nguyên

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

int findMinLocation(int a[], int n) {
    int i;
    int min = a[0];
    int loca = 0;

    for(i = 1; i < n; i++)
        if(a[i] < min) {
            min = a[i];
            loca = i;
        }

    return loca;
}

int main() {
    int n;
    int a[1000];
    int minLocation;

    do {
        printf("Enter number element of arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);
    
    enterArr(a, n);

    minLocation = findMinLocation(a, n);

    printf("Min value of arr is located at %d", minLocation);

    return 0;
}