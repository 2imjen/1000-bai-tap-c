// 178.Hãy liệt kê các số có giá trị chẵn trong mảng một chiều các số nguyên 
// thuộc đoạn [x,y] cho trước (x, y là các số nguyên).

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void solve(int a[], int n, int x, int y) {
    int i;

    for(i = 0; i < n; i++)
        if(a[i] >= x && a[i] <= y)
            printf("%d ", a[i]);
}

int main() {
    int n;
    int a[1000];
    int x, y;

    do {
        printf("Enter number element of arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    solve(a, n, x, y);

    return 0;
}