// 193.Cho mảng một chiều các số nguyên. Hãy viết hàm liệt kê các giá trị
// trong mảng có dạng 3k thì hàm sẽ trả về giá trị 0

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int dang3k(int n) {
    float k;
    int tmp;
    
    if(n < 0) return 0;

    k = log(n) / log(3);
    tmp = (int)k;

    if(tmp == k)
        return 1;

    return 0;
}

void solve(int a[], int n) {
    int i;

    for(i = 0; i < n; i++)
        if(dang3k(a[i]))
            printf("%d ", a[i]);
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