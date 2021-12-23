// 140.Hãy tìm “giá trị dương nhỏ nhất” trong mảng các số thực 
// (duongnhonhat). Nếu mảng không có giá trị dương thì trả về giá trị
// không dương là – 1.

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
    float tmp = a[0];

    for(i = 1; i < n; i++)
        if(a[i] > 0)
            if(a[i] < tmp || tmp <= 0)
                tmp = a[i];

    if(tmp > 0) {
        *res = tmp;
        return 1;
    }

    return -1;
}

int main() {
    int n;
    float a[1000];
    float res;
    int ret;

    do {
        printf("Enter number element of Arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);
    
    ret = solve(a, n, &res);

    if(ret == 1)
        printf("Lowest positive number in Arr: %.2f", res);
    else
        printf("Not exist positive number in arr");

    return 0;
}