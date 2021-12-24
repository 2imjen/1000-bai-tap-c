// 158.Cho mảng một chiều các số thực, hãy tìm giá trị x sao cho đoạn [-x,x] 
// chứa tất cả các giá trị trong mảng (timx).

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
    float min = a[0], max = a[0];

    for(i = 1; i < n; i++) {
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }

    printf("%f, %f", min, max);

    if(fabs(min) > fabs(max))
        printf("[%.2f,%.2f] contains all element of arr", -fabs(min), fabs(min));
    else
        printf("[%.2f,%.2f] contains all element of arr", -max, max);

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