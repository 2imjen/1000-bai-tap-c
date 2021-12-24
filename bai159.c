// 159.Cho mảng một chiều các số thực hãy tìm giá trị đầu tiên lớn hơn giá trị
// 2003 (dautien). Nếu mảng không có giá trị thỏa điều kiện trên thì hàm trả về giá trị là 0

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

    for(i = 0; i < n; i++)
        if(a[i] > 2003)
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
        printf("First value in arr is bigger than 2003: %.2f", ret);
    else
        printf("Not exist value bigger than 2003 in arr");

    return 0;
}