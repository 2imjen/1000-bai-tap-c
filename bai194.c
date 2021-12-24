// 194.Cho mảng số nguyên có nhiều hơn hai giá trị. Hãy liệt kê tất cả các cặp 
// giá trị gần nhau nhất trong mảng (gannhaunhat).

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(int a[], int n) {
    int i, j;

    for(i = 0; i < n-1; i++)
        for(j = i+1; j < n; j++)
            if(a[i] > a[j])
                swap(&a[i], &a[j]);
}

void solve(int a[], int n) {
    int i;
    int min = abs(a[0] - a[1]);

    for(i = 1; i < n-1; i++) 
        if(abs(a[i] - a[i+1]) < min)
            min = abs(a[i] - a[i+1]);

    for(i = 0; i < n-1; i++)
        if(abs(a[i] - a[i+1]) == min)
            printf("%d %d\n", a[i], a[i+1]);
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