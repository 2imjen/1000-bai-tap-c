// 184.Hãy liệt kê các vị trí mà giá trị tại đó là số nguyên tố trong mảng một 
// chiều các số nguyên (lkvitringuyento).


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

void solve(int a[], int n) {
    int i;

    for(i = 0; i < n; i++)
        if(isPrime(a[i]))
            printf("%d ", i);
}

int main() {
    int n;
    int a[1000];

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