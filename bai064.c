//64. Giải phương trình 𝑎𝑥 + 𝑏 = 0

#include <stdio.h>

int main() {
    int a, b;
    float res;

    scanf("%d%d", &a, &b);

    if(a != 0) {
        res = (float)-b / a;
        printf("Phuong trinh co nghiem duy nhat %f", res);
    } else if(b == 0)
        printf("Phuong trinh vo so nghiem");
    else
        printf("Phuong trinh vo nghiem");

    /*
        test case
        1 2
        0 0
        3 0
        0 3
    */
    return 0;
}