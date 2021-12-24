// 191.Hãy liệt kê các giá trị cực đại trong mảng một chiều các số thực. một 
// phần tử được gọi là cực đại khi lớn hơn các phần tử lân cận.

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void solve(float a[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        if(i == 0 && a[i] > a[i+1]) {
            printf("%.2f ", a[i]);
            continue;
        }
        if(i == n-1 && a[i] > a[i-1]) {
            printf("%.2f ", a[i]);
            continue;
        }

        if(a[i] > a[i+1] && a[i] > a[i-1])
            printf("%.2f ", a[i]);
    }
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

    solve(a, n);

    return 0;
}