// 151.Hãy tìm “số nguyên tố lớn nhất” trong mảng một chiều các số nguyên 
// (nguyentolonnhat). Nếu mảng không có số nguyên tố thì trả về giá trị 0

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int isPrime(int n) {
    int i;
    if(n < 2) return 0;

    for(i = 2; i*i <= n; i++)
        if(n % i == 0)
            return 0;

    return 1;
}

int solve(int a[], int n) {
    int i, tmp;
    tmp = a[0];

    for(i = 1; i < n; i++)
        if(isPrime(a[i])) {
            if(a[i] > tmp || !isPrime(tmp))
                tmp  = a[i];
        }

    if(isPrime(tmp))
        return tmp;

    return 0;
}

int main() {
    int n;
    int a[1000];
    int ret;

    do {
        printf("Enter number element of Arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);
    
    enterArr(a, n);

    ret = solve(a, n);

    if(ret)
        printf("Greatest prime of Arr: %d", ret);
    else
        printf("Not exist prime in arr");

    return 0;
}