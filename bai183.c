// 183.Hãy liệt kê các vị trí mà giá trị tại đó là giá trị lớn nhất trong mảng một 
// chiều các số thực (lietkevitrilonnhat).

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void solve(float a[], int n) {
    int i;
    float max = a[0];

    for(i = 1; i < n; i++)
        if(a[i] > max) 
            max = a[i];

    for(i = 0; i < n; i++)
        if(a[i] == max)
            printf("%d", i);
}

int main() {
    int n;
    float a[1000];

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