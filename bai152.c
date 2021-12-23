// 152.Hãy tìm “hoàn thiện nhỏ nhất” trong mảng một chiều các số nguyên 
// (hoanthiennhonhat). Nếu mảng không có số hoàn thiện thì trả về giá trị 0.

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
    int tmp = a[0];

    for(i = 1; i < n; i++)
        if(isPerfectNum(a[i]))
            if(a[i] < tmp || !isPerfectNum(tmp))
                tmp = a[i];

    if(isPerfectNum(tmp))
        return tmp;

    return 0;
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

    if(ret)
        printf("Lowest perfect number of Arr: %d", ret);
    else
        printf("Not exist perfect number in arr");

    return 0;
}