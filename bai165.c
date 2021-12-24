// 165.Hãy tìm giá trị đầu tiên trong mảng một chiều các số nguyên có chữ số
// đầu tiên là chữ số lẻ (dauledautien). Nếu trong mảng không tồn tại giá 
// trị như vậy thì hàm sẽ trả về giá trị 0

#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int solve(int a[], int n) {
    int i;

    for(i = 0; i < n; i++)
        if(a[i] % 10 % 2 != 0)
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
        printf("First value has first odd character is %d", ret);
    else
        printf("Not exist satisfying value");

    return 0;
}