// 127.Viết hàm sắp xếp mảng một chiều các số thực tăng dần

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void swap(float *a, float *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void increaseSort(float a[], int n) {
    int i, j;

    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            if(a[i] > a[j])
                swap(&a[i], &a[j]);
}

void printArr(float a[], int n) {
    int i;

    for(i = 0; i < n; i++)
        printf("%.2f ", a[i]);
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

    increaseSort(a, n);

    printArr(a, n);

    return 0;
}