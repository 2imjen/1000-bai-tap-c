// 167.Hãy tìm giá trị thỏa điều kiện toàn chữ số lẻ và là giá trị lớn nhất thỏa 
// điều kiện ấy trong mảng một chiều các số nguyên (nếu mảng không có 
// giá trị thỏa điều kiện trên thì hàm trả về giá trị 0).


#include <stdio.h>
#include <math.h>

void enterArr(int a[], int n) {
    int i;
    
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int allEvenCharacter(int n) {
    int tmp = n;

    if(tmp == 0) return 0;

    while(tmp) {
        if(tmp % 10 % 2 == 0)
            return 0;
        tmp /= 10;
    }

    return 1;
}

int solve(int a[], int n) {
    int i;
    int max = a[0];

    for(i = 1; i < n; i++)
        if(allEvenCharacter(a[i]) && (a[i] > max || !allEvenCharacter(max)))
            max = a[i];

    if(allEvenCharacter(max))
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
        printf("Result: %d", ret);
    else
        printf("Not exist satisfying value");

    return 0;
}