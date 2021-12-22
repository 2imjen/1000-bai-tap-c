// 111.Viết chương trình in ra tam giác cân có độ cao h.

#include <stdio.h>
#include <math.h>

void a(int h) {
    int i, j;

    for(i = 1; i <= h; i++) {
        for(j = 1; j <= h-1+i; j++)
            if(j >= h-i+1)
                printf(" * ");
            else
                printf("   ");
        printf("\n");
    }
}

void b(int h) {
    int i, j;

    for(i = 1; i <= h; i++) {
        for(j = 1; j <= h-1+i; j++)
            if(j == h-i+1 || j == h-1+i || i == h)
                printf(" * ");
            else
                printf("   ");
        printf("\n");
    }
}

void c(int h) {
    int i, j;

    for(i =1 ; i <= h; i++) {
        for(j = 1; j <= i; j++)
            printf(" * ");
        
        printf("\n");
    }
}

void d(int h) {
    int i, j;

    for(i =1 ; i <= h; i++) {
        for(j = 1; j <= i; j++)
            if(j == 1 || j == i || i == h)
                printf(" * ");
            else
                printf("   ");

        printf("\n");
    }
}

int main() {
    int h;
    scanf("%d", &h);

    d(h);

    /*

    */
    return 0;
}