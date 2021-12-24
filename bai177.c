// 177.Hãy liệt kê các số giá trị trong mảng một chiều các sô thực thuộc đoạn 
// [x,y] cho trước

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void solve(float a[], int n, float x, float y) {
    int i;

    for(i = 0; i < n; i++)
        if(a[i] >= x && a[i] <= y)
            printf("%.2f ", a[i]);
}

int main() {
    int n;
    float a[1000];  
    float x, y;

    do {
        printf("Enter number element of arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);

    printf("Enter x: ");
    scanf("%f", &x);
    printf("Enter y: ");
    scanf("%f", &y);

    solve(a, n, x, y);

    return 0;
}