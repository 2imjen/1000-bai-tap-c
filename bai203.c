// 203.Tính tổng các giá trị có chữ số hàng chục là chữ số 5 có trong mảng các 
// số nguyên (tongchuc).

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
    int sum = 0;

    for(i = 0; i < n; i++)
        if(a[i] / 10 % 10 == 5)
            sum += a[i];

    return sum;
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

    printf("Result: %d", solve(a, n));

    return 0;
}