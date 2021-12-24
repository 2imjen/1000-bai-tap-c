// 160.Cho mảng một chiều các số thực, hãy viết hàm tìm giá trị âm cuối cùng 
// lớn hơn giá trị -1 (cuoicung). Nếu mảng không có giá trị thỏa điều kiện 
// trên thì hàm trả về giá trị không chẵn là 0

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

    for(i = n-1; i >= 0; i--)
        if(a[i] < 0 && a[i] > -1)
            return a[i];

    return 0;
}

int main() {
    int n;
    float a[1000];
    float ret;

    do {
        printf("Enter number element of arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);

    ret = solve(a, n);

    if(ret)
        printf("Last negative value in arr bigger than -1 is %.2f", ret);
    else
        printf("Not exist satisfying value");

    return 0;
}