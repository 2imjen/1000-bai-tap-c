// 181.Cho mảng một chiều các số nguyên. Hãy viết hàm liệt kê các giá trị
// chẵn có ít nhất một lân cận cũng là giá trị chẵn

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void solve(int a[], int n) {
    int i;

    if(a[0] % 2 == 0 && a[1] % 2 == 0)
        printf("%d ", a[0]);

    for(i = 1; i < n-1; i++)
        if(a[i]%2==0 && (a[i+1]%2==0 || a[i-1]%2==0))
            printf("%d ", a[i]);

    if(a[n-1] % 2 == 0 && a[n-2] % 2 == 0)
        printf("%d ", a[n-1]);
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