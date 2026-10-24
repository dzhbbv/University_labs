#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    printf("n = ");
    scanf("%d", &n);

    int sum1 = 0; int sum2 = 0;
    int current, mid;


    int half = (int)(log10(n) + 1)/2;

    for (int i = 1; n-i > 0; i *= 10) {
        current = (n%(i*10))/i;

        if (log10(i) <= half)
            sum2 += current;
        else
            sum1 += current;

        if (log10(i) == half)
            mid = current;
    }

    double ans2 = (double) sum1 / mid;

    printf("Сумма всех цифр = %d\n", sum1 + sum2);
    printf("Результат деления суммы первой половины цифр на среднюю цифру = %lf\n", ans2);
    printf("Результат умножения средней цифры на сумму второй половины цифр = %d\n", mid * sum2 );

    return 0;
} 