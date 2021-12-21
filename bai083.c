//83. Viết chương trình nhập vào hai số thực. Kiểm tra xem chúng có cùng 
// dấu hay không.

#include <stdio.h>

int main() {
    float a, b;

    scanf("%f%f", &a, &b);

    if(a * b > 0)
        printf("2 số cùng dấu");
    else
        printf("Hai số không cùng dấu");

    /*

    */

    return 0;
}