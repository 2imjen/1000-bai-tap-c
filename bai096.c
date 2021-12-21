//96

#include <stdio.h>
#include <math.h>

int main() {
    float x;
    float fx;
    
    scanf("%f", &x);

    if(x >= 5)
        fx = 2 * pow(x, 2) + 5 * x + 9;
    else
        fx = -2 * pow(x, 2) + 4 * x - 9;

    printf("%.2f", fx);

    /*

    */
    return 0;
}