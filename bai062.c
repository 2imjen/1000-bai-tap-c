//62. Cho hai số nguyên dương a và b. Hãy vẽ lưu đồ tìm ước chung lớn nhất của hai giá trị này.

#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    int tmpa, tmpb, tmp;
    int res;

    scanf("%d%d", &a, &b);

    tmpa = a, tmpb = b;
    while(tmpb != 0) {
        tmp = tmpb;
        tmpb = tmpa % tmpb;
        tmpa = tmp;
    }

    res = abs(tmpa);

    printf("UCLN của %d và %d la: %d", a, b, res);

    /*
        test case:
            5 10
            -5 10
            5 0
            0 5
    */
    return 0;
}