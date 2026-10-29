#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

double frandom(double s, double e) {
    return (double) rand() / RAND_MAX * (e - s) + s;
} 

int main(void) {
    srand(time(NULL));
    double array[N];

    for (int i = 0; i < N; i++) {
        double x = frandom(1, 100);
        array[i] = x*x*x / (x+24);
        printf("%lf\t", array[i]);
    }

    return 0;
}