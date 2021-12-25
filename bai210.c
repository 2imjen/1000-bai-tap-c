// 210.Tính tổng các giá trị có chữ số đầu tiên là chữ số chẵn có trong mảng 
// các số nguyên (tongdauchan)

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int firstEvenDigit(int n) {
    int tmp = n;

    while(tmp > 9)
        tmp /= 10;

    if(tmp % 2 == 0) return 1;

    return 0;
}

int firstEvenDigitSum(int a[], int n) {
    int i;
    int sum = 0;

    for(i = 0; i < n; i++)
        if(firstEvenDigit(a[i]))    
            sum += a[i];

    return sum;
}

int main() {
    int n;
    int a[1000];

    do {
        printf("Enter number element of arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);

    printf("Sum of numbers in arr have first even digit: %d", firstEvenDigitSum(a, n));

    return 0;
}