// 101.Viết chương trình nhập tháng, năm. 
// Hãy cho biết tháng đó có bao nhiêu ngày.


#include <stdio.h>
#include <math.h>

void solve(int m, int y) {
    int maxday;

    switch (m) {
        case 1: case 3: case 5: case 7: case 9: case 10: case 12:
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

    printf("Tháng %d Năm %d có số ngày là: %d", m, y, maxday);
}

int main() {

    int m, y;

    scanf("%d%d", &m, &y);

    solve(m, y);

    /*

    */
    return 0;
}