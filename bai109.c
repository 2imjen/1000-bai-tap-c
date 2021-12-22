// 109.Viết chương trình in bảng cửu chương ra màn hình

#include <stdio.h>
#include <math.h>

void inBangCuuChuong() {
    int i, j;

    for(i = 1; i <= 9; i++) {
        for(j = 1; j <= 9; j++)
            printf("%d x %d = %d\n", i, j, i*j);
        printf("\n");
    }
}

int main() {

    inBangCuuChuong();

    /*

    */
    return 0;
}