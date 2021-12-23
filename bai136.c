// 136.Tìm “số chẵn cuối cùng” trong mảng một chiều các số nguyên 
// (chancuoi). Nếu mảng không có giá trị chẵn thì trả về giá trị -1

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

    for(i = n-1; i  >= 0; i--)
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

    do {
        printf("Enter number element of Arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);

    if(solve(a, n, &res) == 1)
        printf("Last even number of Arr is: %d", res);
    else
        printf("Dont exist even number in this arr");

    return 0;
}