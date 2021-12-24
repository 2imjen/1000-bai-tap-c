// 155.Hãy tìm giá trị trong mảng các sô thực “xa giá trị x nhất” (xanhat).

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
    float max = a[0];
    float range = fabs(x - a[0]);

    for(i = 1; i < n; i++)
        if(fabs(x - a[i]) > range) {
            max = a[i];
            range = fabs(x - a[i]);
        }

    return max;
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

    printf("Furthest value in arr to %.2f: %.2f", x, res);

    return 0;
}