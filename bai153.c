// 153.Hãy tìm “giá trị chẵn nhỏ nhất” trong mảng một chiều các số nguyên 
// (channhonhat). Nếu mảng không có giá trị chẵn thì trả về giá trị không chẵn là -1.

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
    int tmp = a[0];

    for(i = 1; i < n; i++)
        if(a[i] % 2 == 0)
            if(a[i] < tmp || tmp % 2 != 0)
                tmp = a[i];
    
    if(tmp % 2 == 0)
        return tmp;

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
        printf("Lowest even number of arr: %d", ret);
    else
        printf("Not exist even number in arr");

    return 0;
}