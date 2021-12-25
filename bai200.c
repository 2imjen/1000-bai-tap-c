// 200.Tính tổng các phần tử trong mảng (tonggiatri).

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

float sum(float a[], int n) {
    int i;
    float s = 0;

    for(i = 0; i < n; i++)
        s += a[i];

    return s;
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

    printf("Sum of elements of arr: %.2f", sum(a, n));

    return 0;
}