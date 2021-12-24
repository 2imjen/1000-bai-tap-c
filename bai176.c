// 176.Hãy liệt kê các số âm trong mảng một chiều các số thực (lietkeam).

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void listNegativeNum(float a[], int n) {
    int i;
    int check = 0;

    for(i = 0; i < n; i++)
        if(a[i] < 0) {
            printf("%.2f ", a[i]);
            check = 1;
        }

    if(check == 0)
        printf("Not exist negative number in arr");
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

    listNegativeNum(a, n);

    return 0;
}