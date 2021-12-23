// 150.Hãy tìm “giá trị âm lớn nhất” trong mảng các số thực (amlonnhat). Nếu 
// mảng không có giá trị âm thì trả về giá trị 0

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

float solve(float a[], int n) {
    int i;
    float tmp = a[0];

    for(i = 1; i < n; i++)
        if(a[i] < 0)
            if(a[i] > tmp || tmp >= 0)
                tmp = a[i];

    if(tmp < 0)
        return tmp;

    return 0;
}

int main() {
    int n;
    float a[1000];
    float ret;

    do {
        printf("Enter number element of Arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);
    
    enterArr(a, n);

    ret = solve(a, n);

    if(ret < 0)
        printf("Greatest negative number of arr: %.2f", ret);
    else
        printf("Not exist negative number in arr");

    return 0;
}