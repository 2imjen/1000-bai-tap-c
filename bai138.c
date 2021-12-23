// 138.Tìm “vị trí của giá trị chẵn đầu tiên” trong mảng một chiều các số
// nguyên (vitrichandau). Nếu mảng không có giá trị chẵn thì hàm sẽ trả
// về giá trị là – 1.

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int solve(int a[], int n) {
    int i;

    for(i = 0; i < n; i++)
        if(a[i] % 2 == 0)
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
        printf("Location of first even number is %d", res);
    else
        printf("This array dont have any even number");

    return 0;
}