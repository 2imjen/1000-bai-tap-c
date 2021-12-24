// 169.(*) Cho mảng một chiều các số nguyên. Hãy viết hàm tìm số chẵn lớn 
// nhất nhỏ hơn mọi giá trị lẻ có trong mảng.

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int oddMin(int a[], int n) {
    int min = a[0];
    int i;
    
    for(i = 1; i < n; i++)
        if((a[i] % 2 != 0) && (a[i] < min || min % 2 == 0))
            min = a[i];

    if(min % 2 != 0)
        return min;

    return 0;
}

int solve(int a[], int n) {
    int o, i;
    int res = a[0];

    o = oddMin(a, n);
    if(o == 0) return 1;

    for(i = 1; i < n; i++)
        if(a[i] % 2 == 0 && a[i] < o && (a[i] > res || res % 2 != 0))
            res = a[i];

    if(res % 2 == 0 && res < o)
        return res;

    return 1;
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

    if(ret % 2 == 0)
        printf("Result: %d", ret);
    else
        printf("Not exist satisfying value");

    return 0;
}