//98: Giải hệ 2 phương trình 2 ẩn
//  ax + by = c
//  dx + ey = f
// Áp dụng công thức Crammer

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, e, f;
    float det1, det2, det3;
    float x, y;

    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);

    det1 = a*e - b*d;
    det2 = c*e - b*f;
    det3 = a*f - c*d;

    if(det1 != 0) {
        x = det2 / det1;
        y = det3 / det1;

        printf("Hệ phương trình có nghiệm: \n");
        printf("x = %f\n", x);
        printf("y = %f", y);
    } else if(c == 0 && f == 0)
        printf("Hệ phương trình vô số nghiệm");
    else
        printf("Hệ phương trình vô nghiệm");

    /*

    */
    return 0;
}