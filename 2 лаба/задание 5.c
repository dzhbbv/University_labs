#include <stdio.h>
#include <math.h>

double f(double x) {
    return 2*pow(x, 2) + pow(x, 3) - 7*x + 2;
}

int main(void) {
    double ans1 = 1; 
    double ans2 = 0;
    int count1 = 0, count2 = 0;

    for (double i = -10; i <= 19; i+=1.6) {
        printf("%.1lf\t", i);
        count2++;
    }
    printf("\n");
    
    for (double i = -10; i <= 19; i+=1.6, count1++) {
        if (count1 < 4) 
            ans1 *= f(i);
        if (count2-count1 <= 9) 
            ans2 += f(i);
        
        printf("%.1lf\t", f(i));
    }

    printf("\nПроизведение первых четырех значений функции = %.2lf", ans1);
    printf("\nСумма последних девяти значений функции = %.2lf\n", ans2);
    
    return 0;
}