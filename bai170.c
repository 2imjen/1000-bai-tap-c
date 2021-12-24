// 170.Cho mảng một chiều các số nguyên. Hãy viết hàm tìm số nguyên tố
// nhỏ nhất và lớn hơn mọi giá trị có trong mảng.

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
    int i;
    int check = 1;
    int p = a[0];
    int max;

    for(i = 1; i < n; i++) {
        if(isPrime(a[i]) && (a[i] > p || !isPrime(p)))
            p = a[i];

        if(a[i] > p) {
            check = 0;
            max = a[i];
        }

        if(p > max)
            check = 1;
    }

    if(isPrime(p) && check)
        return p;

    return 0;
}

int main() {
    int n;
    int a[1000];
    int ret;

    do {
        printf("Enter number element of arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);

    ret = solve(a, n);

    if(ret)
        printf("Result: %d", ret);
    else
        printf("Not exist satisfying value");

    return 0;
}