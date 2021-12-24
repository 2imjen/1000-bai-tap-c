// 172.Cho mảng một chiều các số nguyên dương. Hãy viết hàm tìm bội 
// chung nhỏ nhất của tất cả các phần tử trong mảng

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int ucln(int a, int b) {
    if(b == 0) return abs(a);

    return ucln(b, a%b); 
}

int bcnn(int a, int b) {
    return a * b / ucln(a, b);
}

int solve(int a[], int n) {
    int i;
    int u = bcnn(a[0], a[1]);

    for(i = 2; i < n; i++)
        u = bcnn(u, a[i]);

    return u;
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

    printf("Lowest common division of all elements of arr is %d", ret);

    return 0;
}