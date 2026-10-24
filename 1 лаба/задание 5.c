#include <stdio.h>

double fmin(double x1, double x2) {
    return x1 < x2 ? x1 : x2;
}

int main(void) {
    FILE * fp = fopen("data5.txt", "r");
    double f1, f2; int z1, z2, z3;

    if (!fp) {
        printf("Error");
        return 0;
    }
    fscanf(fp, "%lf %lf %d %d %d", &f1, &f2, &z1, &z2, &z3);
    fclose(fp);
    printf("MIN: %lf  MAX: %d\n", fmin(f1, f2), (z1 > z2 && z1 > z3 )? z1 : (z2 > z3)  ? z2 : z3);

    return 0;
}