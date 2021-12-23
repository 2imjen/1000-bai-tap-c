// 124.Viết hàm kiểm tra trong mảng các số nguyên có tồn tại giá trị chẵn nhỏ
// hơn 2004 hay không?

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
        if((a[i] % 2 == 0) && a[i] < 2004)
            return 1;

    return 0;
}

int main() {
    int n;
    int a[1000];
    int check;

    do {
        printf("Enter number element of arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);

    check = solve(a, n);

    if(check == 1)
        printf("Exist even value less than 2004 in arr");
    else
        printf("Dont exist even value less than 2004 in arr");

    return 0;
}