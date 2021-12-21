// 100.Viết chương trình giải phương trình bậc 2

#include <stdio.h>
#include <math.h>

void gptb1(float a, float b) {
    float x;

    if(a != 0) {
        x = -b / a;
        printf("Phương trình có nghiệm duy nhất: %.2f", x);
    } else if(b == 0)
        printf("Phương trình vô số nghiệm");
    else
        printf("Phương trình vô nghiệm");
}

void gptb2(float a, float b, float c) {
    float del, x1, x2;

    if(a != 0) {
        del = b*b - 4*a*c;

        if(del > 0) {
            x1 = (-b + sqrt(del)) / (2*a);
            x2 = (-b - sqrt(del)) / (2*a);

            printf("Phương trình có 2 nghiệm phân biệt: \n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f", x2);
        } else if(del == 0) {
            x1 = -b / (2*a);
            printf("Phương trình có nghiệm duy nhất: %.2f", x1);
        } else
            printf("Phương trình vô nghiệm");

    } else
        gptb1(b, c);
}

int main() {
    float a, b, c;

    scanf("%f%f%f", &a, &b, &c);
    
    gptb2(a, b, c);

    /*

    */
    return 0;
}