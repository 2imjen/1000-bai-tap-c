// 186.Hãy liệt kê các vị trí trong mảng một chiều các số thực mà giá trị tại vị
// trí đó bằng giá trị âm đầu tiên trong mảng.

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
    float res;

    for(i = 0; i < n; i++)
        if(a[i] < 0) {
            res = a[i];
            break;
        }

    for(i = i+1;i < n; i++)
        if(a[i] == res)
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