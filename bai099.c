// 99. Viết chương trình nhập vào 3 số thực. Hãy in 3 số thực ấy ra màn hình 
// theo thứ tự tăng dần mà chỉ dùng tối đa hai biến phụ.
// Có 2 cách để xử lí: 
// - Hoán đổi giá trị giữa các biến
// - Dùng 2 biến min, max tìm min và max, biến còn lại = tổng 3 biến trừ min và max

#include <stdio.h>
#include <math.h>

void solve1(float a, float b, float c) {
    float tmp;

    if(a > b) {
        tmp = a;
        a = b;
        b = tmp;
    }

    if(a > c) {
        tmp = a;
        a = c;
        c = tmp;
    }

    if(b > c) {
        tmp = c;
        c = b;
        b = tmp;
    }

    printf("%.2f %.2f %.2f", a, b, c);
}

void solve2(float a, float b, float c) {
    float max = a, min = a;

    if(max < b) max = b;
    if(max < c) max = c;

    if(min > b) min = b;
    if(min > c) min = c;

    printf("%.2f %.2f %.2f", min, a+b+c-min-max, max);
}

int main() {

    float a, b, c;
    
    scanf("%f%f%f", &a, &b, &c);

    solve2(a, b, c);

    /*

    */
    return 0;
}