#include <stdio.h>

int main(void) {
    int N, count = 0;
    printf("N = ");
    scanf("%d", &N);
    printf("\n");
    FILE * fp = fopen("output1.txt", "w");

    for (int i = -N; i <= N; i++) { 
        if (i%2!=0) {
            fprintf(fp, "%d\t", i);
            count++;
            if (count % 10 == 0 ) { 
                fprintf(fp, "\n");
            }
        }
    }
    fclose(fp);

    for (int i = -N; i <= N; i++) 
    {
        if (i%5!=0) {
            continue;
        }
        printf("%d\n", i); 
    }
    return 0;
}