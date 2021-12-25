// 204.Tính tổng các giá trị lớn hơn giá trị đứng liền trước nó trong mảng một 
// chiều các số thực

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
    float s = 0;

    for(i = 1; i < n; i++)
        if(a[i] > a[i-1])
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

    printf("Result: %f", solve(a, n));

    return 0;
}