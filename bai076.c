// 76. Kiểm tra số nguyên 4 byte có dạng 3^k hay không?

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int tmp;
    float k;

    scanf("%d", &n);

    k = log(n) / log(3);

    tmp = (int)k;

    if(k == tmp)
        printf("%d có dạng 3^%d", n, tmp);
    else
        printf("%d không có dạng 3^k", n);

    /* test case
        Nếu số âm do log không nhận số âm nên cần chuyển sang số dương rồi mới tính 
    */
    return 0;
}