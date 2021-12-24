// 173.(*) Cho mảng một chiều các số nguyên. Hãy viết hàm tìm chữ số xuất 
// hiện ít nhất trong mảng (timchuso).

#include <stdio.h>
#include <math.h>
#include <string.h>

int c[10];

void enterArr(int a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void abc(int n) {
    int tmp = n;

    if(n == 0) c[0]++;

    while(tmp) {
        c[tmp%10]++;
        tmp /= 10;
    }
}

int solve(int a[], int n) {
    int i;
    int max;
    int ch;

    for(i = 0; i < n; i++)
        abc(a[i]);

    max = c[0];
    ch = 0;

    for(i = 1; i <= 9; i++)
        if(c[i] > max) {
            max = c[i];
            ch = i;
        }
    
    return ch;
}

int main() {
    int n;
    int a[1000];
    int ret;
    memset(c, 0, sizeof c);
    
    do {
        printf("Enter number element of arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);

    ret = solve(a, n);

    printf("Most digit of number in arr: %d", ret);

    return 0;
}