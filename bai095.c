// 95. Viết chương trình nhập 3 số thực. Hãy thay tất cả các số âm bằng trị
// tuyệt đối của nó.


#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    scanf("%f%f%f", &a, &b, &c);
    
    if(a < 0) a = -a;
    if(b < 0) b = -b;
    if(c < 0) c = -c;

    printf("%.2f %.2f %.2f", a, b, c);
    
    /*

    */
    return 0;
}