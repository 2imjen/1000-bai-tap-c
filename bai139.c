// 139.Tìm “vị trí số hoàn thiện cuối cùng” trong mảng một chiều các số
// nguyên (vitrihoanthiencuoi). Nếu mảng không có số hoàn thiện thì trả
// về giá trị - 1

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int isPerfectNum(int n) {
    if(n < 0)
        return 0;

    int sum = 1;
    int i;

    for(i = 2; i*i <= n; i++)
        if(n % i == 0) {
            if(i*i != n)
                sum += i + n/i;
            else
                sum += i;
        }

    if(sum == n && n != 1) return 1;

    return 0;
}

int solve(int a[], int n) {
    int i;

    for(i = n-1; i >= 0; i--)
        if(isPerfectNum(a[i]))
            return i;

    return -1;
}

int main() {
    int n;
    int a[1000];
    int res;

    do {
        printf("Enter number element of Arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);   

    res = solve(a, n);

    if(res != -1)
        printf("Index of last perfect number in Arr is %d", res);
    else
        printf("This arr dont exist perfect number");

    return 0;
}