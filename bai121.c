//121: Số Amstrong

#include <stdio.h>
#include <math.h>

int countDigit(int n) {
    int c = 0;

    do {
        c++;
        n /= 10;
    } while(n);
    
    return c;
}

int isAmstrong(int n) {
    int cntDigit, tmp, a;

    cntDigit = countDigit(n);
    tmp = n;
    a = 0;
    while(tmp) {
        a += pow(tmp % 10, cntDigit);
        tmp /= 10;
    }

    if(a == n)
        return 1;
    
    return 0;
}

void solve() {
    int i;

    for(i = 1; i <= 1000000; i++)
        if(isAmstrong(i))
            printf("%d\n", i);
}

int main() {
    solve();
    /*

    */
    return 0;
}