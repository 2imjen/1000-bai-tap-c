// 115.Viết chương trình nhập họ tên, điểm toán, điểm văn của một học sinh. 
// Tính điểm trung bình và xuất kết quả.

#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char ht[100];
    float t, v;
    float dtb;

    printf("Nhập họ và tên: \n");
    fgets(ht, sizeof(ht), stdin);

    do {
        printf("Nhập điểm toán: ");
        scanf("%f", &t);
        printf("Nhập điểm văn: ");
        scanf("%f", &v);
        if(t < 0 || t > 10 || v < 0 || v > 10)
            printf("Giá trị nhập vào không hợp lệ. Mời nhập lại\n");
    } while(t < 0 || t > 10 || v < 0 || v > 10);

    dtb = (t + v) / 2;

    printf("%sToán: %.2f\nVăn: %.2f\nĐiểm trung bình: %.2f", ht, t, v, dtb);
    /*

    */
    return 0;
}