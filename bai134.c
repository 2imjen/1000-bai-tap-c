// 134.Viết hàm tìm “giá trị lớn nhất” trong mảng một chiều số thực (lonnhat).

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

float findMax(float a[], int n) {
    int i;
    float max = a[0];

    for(i = 0; i < n; i++)
        if(a[i] > max)
            max = a[i];

    return max;
}

int main() {
    int n;
    float a[1000];
    float max;

    do {
        printf("Enter number element of Arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);
 
    max = findMax(a, n);

    printf("Max value of Arr is: %f", max);

    return 0;
}