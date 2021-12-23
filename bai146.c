// 146.Tìm giá trị âm đầu tiên trong mảng một chiều các sô thực (amdau). Nếu 
// mảng không có giá trị âm thì trả về giá trị không âm là giá trị 1

#include <stdio.h>
#include <math.h>

void enterArr(float a[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

int solve(float a[], int n) {
    int i;

    for(i = 0; i < n; i++)
        if(a[i] < 0)
            return a[i];

    return 1;
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

    if(ret != 1)
        printf("First negative number in arr: %.2f", ret);
    else
        printf("Not Exist negative number in arr");

    return 0;
}