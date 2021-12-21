// 105.Viết chương trình nhập một số nguyên có hai chữ số. Hãy in ra cách 
// đọc của số nguyên này.

#include <stdio.h>
#include <math.h>

void docDv(int d) {
    switch(d) {
        case 1:
            printf(" một");
            break;
        case 2:
            printf(" hai");
            break;
        case 3:
            printf(" ba");
            break;
        case 4:
            printf(" bốn");
            break;
        case 5:
            printf(" năm");
            break;
        case 6:
            printf(" sáu");
            break;
        case 7:
            printf(" bảy");
            break;
        case 8:
            printf(" tám");
            break;
        case 9:
            printf(" chín");
    }
}

void docChuc(int chuc) {
    switch(chuc) {
        case 1:
            printf("Mười");
            break;
        case 2:
            printf("Hai mươi");
            break;
        case 3:
            printf("Ba mươi");
            break;
        case 4:
            printf("Bốn mươi");
            break;
        case 5:
            printf("Năm mươi");
            break;
        case 6:
            printf("Sáu mươi");
            break;
        case 7:
            printf("Bảy mươi");
            break;
        case 8:
            printf("Tám mươi");
            break;
        case 9:
            printf("Chín mươi");
            break;
    }
}

void solve(int a) {
    int dv, chuc;

    dv = a % 10;
    chuc = a / 10;

    docChuc(chuc);
    docDv(dv);
}

int main() {
    int a;

    do {
        scanf("%d", &a);
    } while(a < 10 || a > 99);

    solve(a);

    /*

    */
    return 0;
}