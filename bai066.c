//66. Giải phương trình ax^4 + bx^2 + c = 0;

#include <stdio.h>
#include <math.h>

//return -1 vo nghiem
// 0 vo so nghiem
// 1 co 1 nghiem
// 2 co 2 nghiem

int giaiPTBac1(float a, float b, float* x) {
    if(a != 0) {
        *x = -b / a;
        return 1;
    } else if(b == 0)
        return 0;
        
    return -1;
}

int giaiPTBac2(float a, float b, float c, float* x1, float* x2) {
    float del;
    if(a != 0) {
        del = b * b - 4 * a * c;
        if(del > 0) {
            *x1 = (-b + sqrt(del) / (2 * a));
            *x2 = (-b - sqrt(del) / (2 * a));

            return 2;
        } else if(del == 0) {
            *x1 = -b / (2 * a);

            return 1;
        }

        return -1;
    } else {
        return giaiPTBac1(b, c, x1);
    }

    return -1;
}

void inNghiem(float n) {
    float can;
    if(n > 0) {
        can = sqrt(n);

        printf("x = %f\n", can);
        printf("x = %f\n", -can);
    } else if(n == 0)
        printf("x = 0\n");
}

void giaiPTBac4(float a, float b, float c) {
    int ret;
    float x1, x2;

    ret = giaiPTBac2(a, b, c, &x1, &x2);
    if(ret == 0)
        printf("Phuong trinh vo so nghiem");
    else if(ret == 2 && (x1 >= 0 || x2 >= 0)) {
        printf("Phuong trinh co nghiem: \n");
        inNghiem(x1);
        inNghiem(x2);
    } else if(ret == 1 && x1 >= 0) {
        printf("Phuong trinh co nghiem: \n");
        inNghiem(x1);
    } else 
        printf("Phuong trinh vo nghiem");
}

int main() {
    float a, b, c;

    scanf("%f%f%f", &a, &b, &c);

    giaiPTBac4(a, b, c);

    /*
        test case
        1 2 3 : vo nghiem
        2 1 -3
        1 -3 2
        0 0 0
        0 3 0
        0 3 -1 
        0 3 1
    */
    return 0;
}