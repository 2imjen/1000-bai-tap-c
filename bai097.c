// 97. Viết chương trình nhập 3 cạnh của một tam giác. Hãy cho biết đó là 
// tam giác gì?

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    int can, vuong;

    scanf("%f%f%f", &a, &b, &c);

    if(a + b <= c || a + c <= b || b + c <= a) {
        printf("3 cạnh không tạo thành tam giác");
        return 0;
    }

    can = a == b || b == c || a == c;
    vuong = a*a+b*b == c*c || b*b+c*c == a*a || a*a+c*c == b*b;

    if(a == b && b == c)
        printf("Tam giác đều");
    else if(vuong && can)
        printf("Tam giác vuông cân");
    else if(vuong)
        printf("Tam giác vuông");
    else if(can)
        printf("Tam giác cân");
    else
        printf("Tam giác thường");

    /*

    */
    return 0;
}