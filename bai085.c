// 85. Nhập vào tháng của một năm. Cho biết tháng thuộc químấy trong năm.

#include <stdio.h>
#include <math.h>

int main() {
    int m;
    
    do {
        scanf("%d", &m);
    } while(m < 1 || m > 12);

    if(m <= 3)
        printf("Quý 1");
    else if(m <= 6)
        printf("Qúy 2");
    else if(m <= 9)
        printf("Quý 3");
    else
        printf("Quý 4");
    /*

    */

    return 0;
}