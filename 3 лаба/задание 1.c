#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

int int_random(int s, int e);
double frandom(double s, double e);
void print_arrs(int arr[N], double farr[N]);

int main(void) {
    srand(time(NULL));
    int array_int[N];
    double array_double[N];

    int a, b;
    double c, d;
    scanf("%d %d %lf %lf", &a, &b, &c, &d);

    FILE * fp = fopen("output1.txt", "w");
    for (int i = 0; i < N; i++) {
        array_int[i] = int_random(a, b);
        array_double[i] = frandom(c, d);
        printf("array_int[%d] = %d\t", i, array_int[i]);
        fprintf(fp, "array_int[%d] = %d;\tarray_double[%d] = %lf\n", i, array_int[i], i, array_double[i]);
    }
    for (int i = 0; i < N; i++) {
        printf("array_double[%d] = %lf\t", i, array_double[i]);
    }
    
    fclose(fp);
    print_arrs(array_int, array_double);

    return 0;
}

void print_arrs(int arr[N], double farr[N]) {
    for (int i = 0; i < N; i++) {
    }
    printf("\n");
    for (int i = 0; i < N; i++) {
    }
}

int int_random(int s, int e) {
    return rand() % (e - s + 1) + s;
}

double frandom(double s, double e) {
    return (double) rand() / RAND_MAX * (e - s) + s;
}