// 137.Tìm “một vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất” trong mảng 
// một chiều các số thực (vitrinhonhat)

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

int solve(float a[], int n) {
    int i;
    float min = a[0];
    int res = 0;

    for(i = 1; i < n; i++)
        if(a[i] < min) {
            min = a[i];
            res = i;
        }

    return res;
}

int main() {
    int n;
    float a[1000];

    do {
        printf("Enter number element of Arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);
    
    enterArr(a, n);

    printf("Location of min value in arr is %d", solve(a, n));

    return 0;
}