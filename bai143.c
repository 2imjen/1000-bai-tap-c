// 143.Viết hàm tìm “số chẵn đầu tiên” trong mảng các số nguyên (chandau). 
// Nếu mảng không có giá trị chẵn thì hàm sẽ trả về giá trị không chẵn là -1.

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int solve(int a[], int n, int *res) {
    int i;

    for(i = 0; i < n; i++)
        if(a[i] % 2 == 0) {
            *res = a[i];
            return 1;
        }

    return -1;
}

int main() {
    int n;
    int a[1000];
    int res;
    int ret;

    do {
        printf("Enter number element of Arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);
    
    ret = solve(a, n, &res);

    if(ret == 1)
        printf("First even number in arr: %d", res);
    else
        printf("Not exist even number in this arr");

    return 0;
}