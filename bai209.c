// 209.Tính tổng các giá trị đối xứng trong mảng các số nguyên (tongdoixung).

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int soDoiXung(int n) {
    int tmp = n;
    int rev = 0;

    while(tmp) {
        rev = rev * 10 + tmp % 10;
        tmp /= 10;
    }

    if(rev == n) return 1;

    return 0;
}

int tongSoDoiXung(int a[], int n) {
    int i;
    int sum = 0;

    for(i = 0; i < n; i++)
        if(soDoiXung(a[i]))
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

    printf("Tong cac so doi xung co trong mang: %d", tongSoDoiXung(a, n));

    return 0;
}