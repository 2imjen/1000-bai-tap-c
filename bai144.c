// 144.Tìm “số nguyên tố đầu tiên” trong mảng một chiều các số nguyên 
// (nguyentodau). Nếu mảng không có số nguyên tố thì trả về giá trị -1.

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
    int i, can;

    if(n < 2) return 0;

    can = sqrt(n);
    for(i = 2; i <= can; i++)
        if((n % i == 0))
            return 0;

    return 1;
}

int solve(int a[], int n) {
    int i;

    for(i = 0; i < n; i++)
        if(isPrime(a[i]))
            return a[i];

    return -1;
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

    if(ret != -1)
        printf("First prime in arr: %d", ret);
    else
        printf("Not exist prime in arr");
        
    return 0;
}