// 187.Hãy liệt kê các vị trí mà giá trị tại các vị trí đó bằng giá trị dương nhỏ
// nhất trong mảng một chiều các số thực

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

float posiMin(float a[], int n) {
    int i;
    float min = a[0];

    for(i = 1; i < n; i++)
        if(a[i] > 0 && (a[i] < min || min < 0))
            min = a[i];

    return min;
}

void solve(float a[], int n) {
    int i;
    float min = posiMin(a, n);

    for(i = 0; i < n; i++)
        if(a[i] == min)
            printf("%d ", i);
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