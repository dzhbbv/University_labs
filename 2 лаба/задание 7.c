#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double calculation(double x, double y) {
    return fabs( (7 - 9*x + x/y) / (y + 7*y + 9*y*y ) );
}

int main(void) {
    double x, y; 
    FILE * fp = fopen("input7.txt", "r"); 
    if (!fp) {
        printf("Error");
        return -1;
    }
    fscanf(fp, "%lf", &x); 
    fscanf(fp, "%lf", &y);

    if (y == 0 || (y + 7*y + 9*y*y ) == 0 ) {
        printf("Некорректные значения\n");
        exit(-1);
    }

    printf("Ответ %lf\n", calculation(x, y) );

    return 0;
}