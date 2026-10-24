#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int int_random(int s, int e) {
    return rand() % (e - s + 1) + s;
} 

int main(void) {
    FILE * fp = fopen("output2.txt", "w");
    srand(time(NULL));
    int x;

    for (int count = 0 ; count != 12; ) {
        x = int_random(-83, 1700);
        if (abs(x)%10 == 2) {
            fprintf(fp, "%d\n\n", x);
            count++;
        }
    }
    fclose(fp);
    return 0;
}