// 126.Viết hàm tính tổng các giá trị âm trong mảng một chiều các số thực.

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

float sumNegativeNum(float a[], int n) {
    int i;
    float sum = 0;

    for(i = 0; i < n; i++)
        if(a[i] < 0)
            sum += a[i];

    return sum;
}

int main() {
    int n;
    float a[1000];
    float sum;

    do {
        printf("Enter number element of arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);

    sum = sumNegativeNum(a, n);

    printf("Sum of negative numbers in arr is: %.2f", sum);

    return 0;
}