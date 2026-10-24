#include <stdio.h>
#include <math.h>

double function(double x) {
    return 2*pow(x, 2) + pow(x, 3) - 7*x + 2;
}

double mult(double x, double y, double z) {
    int ans = 1;
    int count = 0;
        
    for (double i = x; i <= y; i+=z, count++) {
        if (count < 4) {
            ans *= function(i);
        }
    }
    return ans;
}

int main(void) {
    int count = 0;
    double ans2 = 0;

    for (double i = -10; i <= 19; i+=1.6) {
        printf("%.1lf\t", i);
    }
    printf("\n");

    for (double i = -10; i <= 19; i+=1.6, count++) {
        if (count > 9) 
            ans2 += function(i);
            
        printf("%.1lf\t", function(i));
    }

    printf("\nans1 = %.2lf\nans2 = %.2lf\n", mult(-10, 19, 1.6), ans2);
    return 0;
}