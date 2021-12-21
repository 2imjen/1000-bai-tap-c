// 77. Viết chương trình tính tổng của dãy số sau : S(n) = 1 + 2 + 3 + … + n
// có thể dùng công thức tính tổng dãy số
// hoặc dùng vòng for


#include <stdio.h>

int main() {
    int s;
    int n;
    int i;

    scanf("%d", &n);

    s = 0;
    for (i = 1; i <= n; i++)
        s += i;

    printf("S(%d) = %d", n, s);

    /* test case
        
    */
    return 0;
}