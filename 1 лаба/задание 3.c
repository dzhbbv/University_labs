#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double frandom(double s, double e) {
    return (double) rand() / RAND_MAX * (e - s) + s;
} 

int int_random(int s, int e) {
    return rand() % (e - s + 1) + s;
} 

int main(void) {
    srand(time(NULL));
    int a = int_random(-81, 5), b = int_random(-81, 5);
    double c = frandom(-81, 5), d = frandom(-81, 5);

    FILE * fp = fopen("output.txt", "w");
    
    fprintf(fp, "a = %d\t\tb = %d\t\tc = %f\t\td = %f\n", a, b, c, d);
    fclose(fp);

    return 0;
}