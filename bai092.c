// 92. Tìm ước số chung lớn nhất của hai số nguyên dương

#include <stdio.h>
#include <math.h>

int ucln(int a, int b) {
    int tmp;

    while(b != 0) {
        tmp = b;
        b = a%b;
        a = tmp;
    }

    return abs(a);
}

// int ucln(int a, int b) {
//     if(b == 0) return abs(a);
//     return ucln(b, a%b);
// }

int main() {
    int a, b;
    int res;

    scanf("%d%d", &a, &b);

    res = ucln(a, b);
    
    printf("UCLN của %d và %d là: %d", a, b, res);

    /*

    */
    return 0;
}