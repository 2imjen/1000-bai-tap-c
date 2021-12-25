// 206.Tính tổng các giá trị lớn hơn các giá trị xung quanh trong mảng một 
// chiều các số thực (tongcucdai).
// Lưu ý: Một giá trị trong mảng có tối đa hai giá trị xung quanh

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

    for(i = 0; i < n; i++) {
        if(i == 0 && a[i] > a[i+1]) {
            s += a[i];
            continue;
        }
        if(i == n-1 && a[i] > a[i-1]) {
            s += a[i];
            continue;
        }
        
        if(a[i] > a[i+1] && a[i] > a[i-1])  
            s += a[i];
    }

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