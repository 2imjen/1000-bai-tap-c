// 112.Lập chương trình in ra hình chữ nhật có kích thước m x n

#include <stdio.h>
#include <math.h>

void a(int m, int n) {
    int i, j;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= m; j++)
            printf(" * ");

        printf("\n");
    }
}

void b(int m, int n) {
    int i, j;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= m; j++)
            if(i == 1 || j == 1 || i == n || j == m)
                printf(" * ");
            else
                printf("   ");

        printf("\n");
    }
}

int main() {
    int m, n;

    scanf("%d%d", &m, &n);

    b(m, n);

    /*

    */
    return 0;
}