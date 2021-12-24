// 188.Hãy liệt kê các vị trí chẵn lớn nhất trong mảng một chiều các số
// nguyên.

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int findEvenMax(int a[], int n) {
    int i;
    int max = a[0];

    for(i = 1; i < n; i++)
        if(a[i]%2==0 && (a[i] > max || max%2!=0))
            max = a[i];

    return max;
}

void solve(int a[], int n) {
    int i;
    int max = findEvenMax(a, n);

    if(max%2!=0) {
        printf("Not exist even number in arr");
        return;
    }

    for(i = 0; i < n; i++)
        if(a[i] == max)
            printf("%d ", i);
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

    solve(a, n);

    return 0;
}