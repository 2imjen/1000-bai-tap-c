//65. Giải phương trình ax^2 + bx + c = 0.

#include <stdio.h>
#include <math.h>

void giaiPTBac1(float a, float b) {
    float res;
    
    if(a != 0) {
        res = -b / a;
        printf("Phuong trinh co nghiem duy nhat: %d", res);
    } else if(b == 0)
        printf("Phuong trinh vo so nghiem");
    else
        printf("Phuong trinh vo nghiem");
}

void giaiPTBac2(float a, float b, float c) {
    float delta;
    float x1, x2, res;

    if(a != 0) {
        delta = b * b - 4 * a * c;
        if(delta < 0)
            printf("Phuong trinh vo nghiem");
        else if(delta == 0) {
            res = -b / a;
            printf("Phuong trinh co nghiem duy nhat %f", res);
        } else {
            x1 = (-b + sqrt(delta) / (2 * a));
            x2 = (-b - sqrt(delta) / (2 * a));

            printf("Phuong trinh co 2 nghiem phan biet: \n");
            printf("x1 = %f\n", x1);
            printf("x2 = %f", x2);
        }
    } else
        giaiPTBac1(b, c);
}

int main() {
    float a, b, c;

    scanf("%f%f%f", &a, &b, &c);

    giaiPTBac2(a, b, c);

    /*
        test case
        1 2 3
        0 0 0
        0 0 3
        0 3 0
        2 -1 3
        2 3 -1
        2 1 -3
        1 2 1
    */
    return 0;
}