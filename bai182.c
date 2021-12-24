// 182.Cho mảng một chiều các số thực. Hãy viết hàm liệt kê tất cả các giá trị
// trong mảng có ít nhất một lân cận trái dấu với nó.

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

    if(a[0] * a[1] < 0)
        printf("%.2f ", a[0]);

    for(i = 1; i < n-1; i++)
        if(a[i] * a[i+1] < 0 || a[i] * a[i-1] < 0)
            printf("%.2f ", a[i]);

    if(a[n-1] * a[n-2] < 0)
        printf("%.2f ", a[n-1]);
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