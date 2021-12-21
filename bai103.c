// 103.Viết chương trình nhập vào một ngày (ngày, tháng, năm). Tìm ngày 
// trước ngày vừa nhập (ngày, tháng, năm).

#include <stdio.h>
#include <math.h>

int maxDay(int m, int y) {
    int maxday;

    switch (m) {
        case 1: case 3: case 5: case 7: case 9: case 10: case 0:
            maxday = 31;
            break;
        case 4: case 6: case 8: case 11:
            maxday = 30;
            break;
        case 2:
            if(y%400 == 0 || (y%4==0 && y%100!=0))
                maxday = 29;
            else
                maxday = 28;
            break;
    }

    return maxday;
}

void solve(int d, int m, int y) {
    int mDay;

    printf("Ngày hôm nay là: %d/%d/%d\n", d, m, y);

    mDay = maxDay(m-1, y);

    if(d == 1 && m == 1) {
        d = mDay;
        m = 12;
        y--;
    } else if(d == 1) {
        d = mDay;
        m--;
    } else
        d--;

    printf("Ngày hôm qua là: %d/%d/%d", d, m, y);
}


int main() {
    int d, m ,y;

    scanf("%d%d%d", &d, &m, &y);
    
    solve(d, m, y);

    /*

    */
    return 0;
}