#include <stdio.h>
#include <stdlib.h>

void print_to_console(int n) {
    n = abs(n);
    for (int i = -n; i <= n; i++ ) {
        if (i%2!=0) {
            continue;
        }
        printf("%d\n", i);
    }
}

void print_to_file(int n) {
    FILE * fp = fopen("output6.txt", "w");
    n = abs(n); 
    for (int i = -n; i < n; i++ ) {
        if (i%3==0) {
            fprintf(fp, "%d\n", i);
        }
    }
    fclose(fp);
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("\n");
    print_to_console(n);
    printf("\n");
    print_to_file(n);
    return 0;
}