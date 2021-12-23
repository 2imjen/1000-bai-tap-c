// 122.Tìm giá trị lớn nhất trong mảng một chiều các số thực.

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

float maxArr(float a[], int n) {
    float max = a[0];
    int i;

    for(i = 1; i < n; i++)
        if(a[i] > max)
            max = a[i];

    return max;
}

int main() {
    int n;
    float a[1000];
    float max;

    do {
        printf("Enter number element of arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);

    max = maxArr(a, n);

    printf("Max value of arr is: %.2f", max);

    return 0;
}