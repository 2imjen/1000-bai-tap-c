// 149.Tìm “số hoàn thiện cuối cùng” trong mảng một chiều các số nguyên 
// (hoanthiencuoi). Nếu mảng không có số hoàn thiện thì hàm sẽ trả về giá trị -1

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
    int i, sum;
    if(n <= 1) return 0;

    sum = 1;
    for(i = 2; i*i <= n; i++)
        if(n % i == 0) {
            if(i*i == n)
                sum += i;
            else
                sum += i + n/i;
        }

    if(sum == n) return 1;

    return 0;
}

int solve(int a[], int n) {
    int i;

    for(i = n-1; i >= 0; i--)
        if(isPerfectNum(a[i]))
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
        printf("Last perfect number of Arr: %d", ret);
    else
        printf("Not exist perfect number in arr");

    return 0;
}