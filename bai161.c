// 161.Cho mảng một chiều các số nguyên, hãy tìm giá trị đầu tiên trong mảng 
// nằm trong khoảng (x,y) cho trước (dautientrongdoan). Nếu mảng 
// không có giá trị thỏa điều kiện trên thì hàm trả về giá trị là x.

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

float solve(float a[], int n, float x, float y) {
    int i;

    for(i = 0; i < n; i++)
        if(a[i] > x && a[i] < y)
            return a[i];

    return x;
}

int main() {
    int n;
    float a[1000];
    float x, y;
    float ret;

    do {
        printf("Enter number element of arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);

    printf("Enter x: ");
    scanf("%f", &x);
    printf("Enter y: ");
    scanf("%f", &y);

    ret = solve(a, n, x, y);

    if(ret != x)
        printf("First value in (%.2f,%.2f): %.2f", x, y, ret);
    else
        printf("Not exist satisfying value");

    return 0;
}