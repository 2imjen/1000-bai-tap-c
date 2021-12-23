// 142.Tìm “giá trị nhỏ nhất” trong mảng một chiều số thực (nhonhat).

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

float solve(float a[], int n) {
    int i;
    float min = a[0];

    for(i = 1; i < n; i++)
        if(a[i] < min)
            min = a[i];

    return min;
}

int main() {
    int n;
    float a[1000];

    do {
        printf("Enter number element of Arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);
    
    enterArr(a, n);

    printf("Lowest value in Arr is %.2f", solve(a, n));

    return 0;
}