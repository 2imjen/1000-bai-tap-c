//63. Cho hai số nguyên dương a và b. Hãy vẽ lưu đồ tìm bội chung nhỏ nhất của hai giá trị này
// BCNN = a * b / UCLN

#include <stdio.h>

int main() {
    int a, b;
    int tmpa, tmpb, tmp, ucln;
    int bcnn;

    scanf("%d%d", &a, &b);

    if(a == 0 || b == 0)
        printf("BCNN của %d và %d là: 0", a, b);

    tmpa = a, tmpb = b;
    while(tmpb != 0) {
        tmp = tmpb;
        tmpb = tmpa % tmpb;
        tmpa = tmp;
    }

    ucln = abs(tmpa);

    bcnn = abs(a * b / ucln);

    printf("BCNN của %d và %d là: %d", a, b, bcnn);
    /*
        test case
        0 21
        21 0
        7 21
        -7 21
    */
    return 0;
}