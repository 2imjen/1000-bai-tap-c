// 207.Tính tổng các phần tử “cực trị” trong mảng (tongcuctri). Một phần tử
// được gọi là cực trị khi nó lớn hơn hoặc nhỏ hơn các phần tử xung quanh nó.

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
    float sum = 0;
    if(a[0] > a[1] || a[0] < a[1])
        sum += a[0];
    if(a[n-1] > a[n-2] || a[n-1] < a[n-2])
        sum += a[n-1];

    for(i = 1; i < n-1; i++)
        if((a[i] > a[i-1] && a[i] > a[i+1]) || (a[i] < a[i-1] && a[i] < a[i+1]))
            sum += a[i];

    return sum;
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