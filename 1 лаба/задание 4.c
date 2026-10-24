#include <stdio.h>

int main(void) {
    double a, b, c, d, e;
    char c1, c2, c3;

    FILE * fp = fopen("data4.txt", "r");

    if (!fp) {
        printf("Error");
        return 1;
    }

    fscanf(fp, "%lf %lf %lf %lf %lf %c %c %c", &a,&b,&c,&d,&e,&c1,&c2,&c3 );
    
    printf("a = %lf  b = %lf  c = %lf  d = %lf  e = %lf  c1 = %c  c2 = %c  c3 = %c\n", a,b,c,d,e,c1,c2,c3);

    fclose(fp);
    
    double avg = (a + b + c + d + e) / 5;
    printf("Среднее арифметическое = %lf\n", avg);

    return 0;
}