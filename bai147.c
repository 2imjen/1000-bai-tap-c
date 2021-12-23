// 147.Tìm “số dương cuối cùng” trong mảng số thực (duongcuoi). Nếu mảng 
// không có giá trị dương thì trả về giá trị - 1.

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

    for(i = n-1; i >= 0; i--)
        if(a[i] > 0)
            return a[i];

    return -1;
}

int main() {
    int n;
    float a[1000];
    float ret;

    do {
        printf("Enter number element of Arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);
    
    ret = solve(a, n);

    if(ret != -1)
        printf("Last positive number of Arr: %.2f", ret);
    else
        printf("Not exist positive number in arr");

    return 0;
}