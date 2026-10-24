#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 5

double frandom(double s, double e) {
    return (double) rand() / RAND_MAX * (e - s) + s;
} 

int main(void) {
    srand(time(NULL));
    double array[N];

    for (int i = 0; i < N; i++) {
        array[i] = pow(frandom(1, 100),3) / (frandom(1, 100)+24);
        printf("%lf\t", array[i]);
    }

    return 0;
}