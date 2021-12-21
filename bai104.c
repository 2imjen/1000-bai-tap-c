// 104.Viết chương trình nhập vào ngày, tháng, năm. Tính xem ngày đó là 
// ngày thứ bao nhiêu trong năm.
// Áp dụng công thức Zeller

#include <stdio.h>
#include <math.h>

// hàm tính thế kỷ
int century(int y) {
    return y / 100;
}

// hàm tính tháng cho công thức zeller
int month(int m) {
    if(m < 3) return m + 10;
    return m - 2;
}

// hàm tính năm trong thể kỷ
int year(int y) {
    return y % 100;
}

// công thức zeller
int _zeller(int day, int month, int year, int century) {
    return ((13 * month - 1) / 5 + year / 4 + century/4 + day + year - 2 * century) % 7;
}

//viết lại cho dễ dùng
int zeller(int d, int m, int y) {
    return _zeller(d, month(m), year(y), century(y));
}

void solve(int d, int m, int y) {
    int weekday = zeller(d, m, y);

    printf("Ngày %d/%d/%d là ", d, m, y);
    switch(weekday) {
        case 0:
            printf("Chủ nhật");
            break;
        case 1:
            printf("Thứ hai");
            break;
        case 2:
            printf("Thứ ba");
            break;
        case 3:
            printf("Thứ tư");
            break;
        case 4:
            printf("Thứ năm");
            break;
        case 5:
            printf("Thứ sáu");
            break;
        case 6:
            printf("Thứ bảy");
            break;
    }
}

int main() {
    int d, m, y;

    scanf("%d%d%d", &d, &m, &y);
    
    solve(d, m, y);

    /*

    */
    return 0;
}