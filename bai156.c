// 156.Hãy tìm một vị trí trong mảng một chiều các số thực mà giá trị tại vị trí 
// đó là giá trị “gần giá trị x nhất”.

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

float solve(float a[], int n, float x) {
    int i;
    float min = a[0];
    float range = fabs(x - a[0]);

    for(i = 1; i < n; i++)
        if(fabs(x - a[i]) < range) {
            min = a[i];
            range = fabs(x - a[i]);
        }

    return min;
}

int main() {
    int n;
    float a[1000];
    float x;
    float res;

    do {
        printf("Enter number element of arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);

    printf("Enter x: ");
    scanf("%f", &x);

    res = solve(a, n, x);

    printf("Value which nearest %.2f: %.2f", x, res);

    return 0;
}