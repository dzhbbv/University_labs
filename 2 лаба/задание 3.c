#include <stdio.h>

int main(void) {
    int x; 
    printf("x = ");
    scanf("%d", &x);
    printf("\n");
    if ( x < 100000  || x > 999999) {
        printf("Некорректные данные\n");
        return 1;
    } 

    while (x > 0) {
        printf("%d / 15 = %d\n", x, x / 15);
        x /= 15;
    }

    return 0;
}