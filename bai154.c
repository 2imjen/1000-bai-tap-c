// 154.Hãy tìm “vị trí giá trị âm lớn nhất” trong mảng các số thực 
// (vtamlonnhat). Nếu mảng không có giá trị âm thì trả về -1

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
    int i, index;
    float negaMax = a[0];
    index = 0;

    for(i = 1; i < n; i++)
        if(a[i] < 0 && (a[i] > negaMax || negaMax >= 0)) {
            negaMax = a[i];
            index = i;
        }

    if(negaMax < 0)
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

    if(ret >= 0)
        printf("Index of greatest negative number of arr: %d", ret);
    else
        printf("Not exist negative number in arr");

    return 0;
}