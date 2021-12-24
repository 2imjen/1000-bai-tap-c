// 180.Hãy liệt kê các giá trị trong mảng mà thỏa điều kiện nhỏ hơn trị tuyệt 
// đối của giá trị đứng liền sau nó và lớn hơn giá trị đứng liền trước nó.

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

    for(i = 1; i < n-1; i++)
        if(a[i] < fabs(a[i+1]) && a[i] > a[i-1])
            printf("%d ", a[i]);
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