#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

double frandom(double s, double e) {
    return (double) rand() / RAND_MAX * (e - s) + s; 
} 

int main(void) {
    srand(time(NULL));
    int pravda;
    double a, b;
    scanf("%lf %lf", &a, &b);

    double arr[N];

    for (int i = 0; i < N; i++) {
        arr[i] = frandom(a, b);
        printf("%lf\t", arr[i]);
    }

    for (int i = 0; i < N; i++) {
        if (arr[i] < 0 && (int)arr[i]%7 == 0) {
            printf("\n%lf\n", arr[i]);
            pravda = 1;
            break;
        }
    }
    if (!pravda) {
        printf("\nОтрицательных чисел не обнаружено\n");
    }

    return 0;
}