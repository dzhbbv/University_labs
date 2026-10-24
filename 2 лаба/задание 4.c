#include <stdio.h>
#include <stdlib.h>

int get_sum(int x) {
    x = abs(x);

    int y = x;
    while (x > 10) {
        x /= 10;
    }
    
    return (y%10) + x;
}

int main(void) {
    int n;
    for (int i = 0; i < 10; i++) {
        printf("n = ");
        scanf("%d", &n); 
        printf("сумма цифр = %d\n", get_sum(n));
    }
    return 0;
}