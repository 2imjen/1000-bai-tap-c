// 166.Cho mảng một chiều các số nguyên. Hãy viết hàm tìm giá trị đầu tiên 
// trong mảng có dạng 2^k .Nếu mảng không tồn tại giá trị dạng 2^k thì hàm 
// sẽ trả về giá trị 0

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int dang2k(int n) {
    float k;
    int tmp;

    k = log(n) / log(2);

    tmp = (int)k;

    if(tmp == k)
        return 1;

    return 0;
}

int solve(int a[], int n) {
    int i;

    for(i = 0; i < n; i++)
        if(dang2k(a[i]))
            return a[i];

    return 0;
}

int main() {
    int n;
    int a[1000];
    int ret;

    do {
        printf("Enter number element of arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);

    ret = solve(a, n);

    if(ret)
        printf("First number in arr has format 2^k: %d", ret);
    else
        printf("Not exist satisfying value");

    return 0;
}