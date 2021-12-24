// 162.Cho mảng một chiều các số thực. Hãy viết hàm tìm một vị trí trong 
// mảng thỏa hai điền kiện: có hai giá trị lân cận và giá trị tại vị trí đó 
// bằng tích hai giá trị lân cận. Nếu mảng không tồn tại giá trị như vậy thì hàm trả về giá trị - 1

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

    for(i = 1; i < n-1; i++)
        if(a[i-1] * a[i+1] == a[i])
            return i;

    return -1;
}


int main() {
    int n;
    float a[1000];
    int ret;

    do {
        printf("Enter number element of arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);

    ret = solve(a, n);

    if(ret != -1)
        printf("Result: %d", ret);
    else
        printf("Not exist satisfying index");

    return 0;
}