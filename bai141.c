// 141.Hãy tìm “vị trí giá trị dương nhỏ nhất” trong mảng một chiều các số
// thực (vtduongnhonhat). Nếu mảng không có giá trị dương thì trả về
// một giá trị ngoài đoạn [0,n-1] là -1 nhằm mô tả không có vị trí nào thỏa 
// điều kiện.

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
    float tmp = a[0];
    int index = 0;

    for(i = 1; i < n; i++)
        if(a[i] > 0)
            if(a[i] < tmp || tmp <= 0) {
                tmp = a[i];
                index = i;
            }
    
    if(tmp > 0)
        return index;

    return -1;
}

int main() {
    int n;
    float a[1000];
    int ret;

    do {
        printf("Enter number element of Arr: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("Invalid value. Please try again.\n");
    } while(n <= 0);

    enterArr(a, n);
    
    ret = solve(a, n);

    if(ret != -1)
        printf("Location of lowest positive number in Arr: %d", ret);
    else
        printf("Not exist positive number in arr");

    return 0;
}