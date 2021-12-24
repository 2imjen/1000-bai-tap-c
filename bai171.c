// 171.Cho mảng một chiều các số nguyên dương. Hãy viết hàm tìm ước 
// chung lớn nhất của tất cả các phần tử trong mảng.

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
    if(b == 0) return a;

    return ucln(b, a%b); 
}

int solve(int a[], int n) {
    int i;
    int u = ucln(a[0], a[1]);

    for(i = 2; i < n; i++)
        u = ucln(u, a[i]);

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

    printf("Greatest common division of all elements of arr is %d", ret);

    return 0;
}