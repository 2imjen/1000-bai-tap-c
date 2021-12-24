// 195.Cho mảng số thực có nhiều hơn ba giá trị và các giá trị trong mảng 
// khác nhau từng đôi một. Hãy liệt kê tất cả các bộ ba giá trị (a,b,c) thỏa 
// điều kiện a = b + c với a, b, c là ba giá trị khác nhau trong mảng. Ví dụ: (6, 2, 4).

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void swap(float *a, float *b) {
    float tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(float a[], int n) {
    int i, j;

    for(i = 0; i < n-1; i++)
        for(j = i+1; j < n; j++)
            if(a[i] > a[j])
                swap(&a[i], &a[j]);
}

void solve(float a[], int n) {
    int i, j, k;

    sort(a, n);

    for(i = n-1; i > 1; i--)
        for(j = 0; j < i; j++)
            for(k = j+1; k < i; k++)
                if(a[i] == a[j] + a[k])
                    printf("(%.2f, %.2f, %.2f)\n", a[i], a[j], a[k]);
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