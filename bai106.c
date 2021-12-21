// 106.Viết chương trình nhập vào một số nguyên có ba chữ số. Hãy in ra cách 
// đọc của nó.

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
        case 0:
            printf(" linh");
            break;
        case 1:
            printf(" mười");
            break;
        case 2:
            printf(" hai mươi");
            break;
        case 3:
            printf(" ba mươi");
            break;
        case 4:
            printf(" bốn mươi");
            break;
        case 5:
            printf(" năm mươi");
            break;
        case 6:
            printf(" sáu mươi");
            break;
        case 7:
            printf(" bảy mươi");
            break;
        case 8:
            printf(" tám mươi");
            break;
        case 9:
            printf(" chín mươi");
            break;
    }
}

void docTram(int tram) {
    switch(tram) {
        case 1:
            printf("Một trăm");
            break;
        case 2:
            printf("Hai trăm");
            break;
        case 3:
            printf("Ba trăm");
            break;
        case 4:
            printf("Bốn trăm");
            break;
        case 5:
            printf("Năm trăm");
            break;
        case 6:
            printf("Sáu trăm");
            break;
        case 7:
            printf("Bảy trăm");
            break;
        case 8:
            printf("Tám trăm");
            break;
        case 9:
            printf("Chín trăm");
    }
}

void solve(int a) {
    int dv, chuc, tram;

    dv = a % 10;
    chuc = a / 10 % 10;
    tram = a / 100;

    docTram(tram);
    docChuc(chuc);
    docDv(dv);
}

int main() {
    int a;

    do {
        scanf("%d", &a);
    } while(a < 100 || a > 999);

    solve(a);

    /*

    */
    return 0;
}