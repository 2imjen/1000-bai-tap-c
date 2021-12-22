// 110.Cần có tổng 200.000đ từ 3 loại giấy bạc 1000đ, 2000đ, và 5000đ. Lập 
// chương tình để tìm tất cả các phương án có thể.

#include <stdio.h>
#include <math.h>

int main() {
    int res = 200;
    int a1 = 1, a2 = 2, a5 = 5;
    int i, j, k;
    int tong, dem, check;

    dem = 0;
    for(i = 0; i <= res/a1; i++) {
        for(j = 0; j <= res/a2; j++) {
            check = 0;
            for(k = 0; k <= res/a5; k++) {
                tong = a1*i + a2*j + a5*k;
                if(tong == res) {
                    check = 1;
                    dem++;
                    printf("%d %d %d %d\n", i, j, k, dem);
                    if(check == 1)
                        break;
                }
            }
        }
    }

    


    /*

    */
    return 0;
}