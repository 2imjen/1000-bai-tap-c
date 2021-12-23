// 135.Tìm “giá trị dương đầu tiên” trong mảng một chiều các số thực 
// (duongdau). Nếu mảng không có giá trị dương thì trả về giá trị -1

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

int solve(float a[], int n, float *res) {
    int i;

    for(i = 0; i < n; i++)
        if(a[i] > 0) {
            *res = a[i];
            return 1;
        }

    return -1;
}

int main() {
    int n;
    float a[1000];
    float res;

    do {
        printf("Enter number element of Arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);
    
    enterArr(a, n);

    if(solve(a, n, &res) == 1)
        printf("First even value of Arr is: %.2f", res);
    else
        printf("This arr dont have any even value");

    return 0;
}