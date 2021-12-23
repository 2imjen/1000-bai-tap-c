// 133.Viết hàm liệt kê các vị trí mà giá trị tại đó là giá trị âm trong mảng một 
// chiều các số thực

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void printLocaOfNegativeVal(float a[], int n) {
    int i;

    for(i = 0; i < n; i++)
        if(a[i] < 0)
            printf("%d ", i);
}

int main() {
    int n;
    float a[1000];

    do {
        printf("Enter number element of Arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);
    
    enterArr(a, n);

    printLocaOfNegativeVal(a, n);

    return 0;
}