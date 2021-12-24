// 164.Cho mảng một chiều các số nguyên, hãy viết hàm tìm giá trị đầu tiên 
// trong mảng thỏa tính chất số gánh. (ví dụ giá trị 12321).

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int soDoiXung(int n) {
    int tmp = n;
    int rev = 0;

    while(tmp) {
        rev = rev * 10 + tmp % 10;
        tmp /= 10;
    }

    if(rev == n) return 1;

    return 0;
}

int solve(int a[], int n) {
    int i;

    for(i = 0; i < n; i++)
        if(soDoiXung(a[i]))
            return a[i];

    return -1;
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

    if(ret != -1)
        printf("Result: %d", ret);
    else
        printf("Not exist satisfying value");        

    return 0;
}