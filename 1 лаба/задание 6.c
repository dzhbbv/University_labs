#include <stdio.h>

int main(void) {
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    if (a <= b) {
        int x = a;
        a = b;
        b = x;
    }
    printf("Наибольшее значение имеет переменная a = %d\n", a);

    return 0;
}