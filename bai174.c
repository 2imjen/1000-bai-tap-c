// 174.(*) Cho mảng số thực có nhiều hơn hai giá trị và các giá trị trong mảng 
// khác nhau từng đôi một. Hãy viết hàm liệt kê tất cả các cặp giá trị (a,b) 
// trong mảng thỏa điều kiện a <= b.

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
    int i, j;

    for(i = 0; i < n-1; i++)
        for(j = 0; j < n; j++)
            if(a[i] <= a[j] && j != i)
                printf("%.2f %.2f\n", a[i], a[j]);
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