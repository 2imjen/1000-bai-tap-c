// 175.(*) Cho mảng số thực có nhiều hơn hai giá trị và các giá trị trong mảng 
// khác nhau từng đôi một. Hãy viết hàm tìm hai giá trị gần nhau nhất 
// trong mảng (gannhaunhat). Lưu ý: Mảng có các giá trị khác nhau từng 
// đôi một còn có tên là mảng phân biệt.

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
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(float a[], int n) {
    int i, j;

    for(i = 0; i < n-1; i++)
        for(j = i + 1; j < n; j++)
            if(a[i] > a[j])
                swap(&a[i], &a[j]);
}

void solve(float a[], int len) {
    int i;
    float m, n;

    sort(a, n);

    m = a[0], n = a[1];

    for(i = 1; i < len-1; i++)
        if(fabs(a[i+1]-a[i]) < fabs(n-m)) {
            m = a[i];
            n = a[i+1];
        }

    printf("Result: %.2f %.2f", m, n);

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