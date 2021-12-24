// 168.Cho mảng một chiều các số nguyên. Hãy viết hàm tìm giá trị lớn nhất 
// trong mảng có dạng 5k . Nếu mảng không tồn tại giá trị dạng 5k thì hàm 
// sẽ trả về giá trị 0.

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int dang5k(int n) {
    float k;
    int tmp;

    k = log(n) / log(5);

    tmp = (int)k;

    if(k == tmp)
        return 1;

    return 0;
}

int solve(int a[], int n) {
    int i;
    int max = a[0];

    for(i = 1; i < n; i++)
        if(dang5k(a[i]) && (a[i] > max || !dang5k(max)))
            max = a[i];

    if(dang5k(max))
        return max;

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
        printf("Greatest number has format 5^k is %d", ret);
    else
        printf("Not exist satisfying number");

    return 0;
}