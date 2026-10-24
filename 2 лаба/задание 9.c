#include <stdio.h>
#include <string.h>

#define M 5
#define N 10

int main(void) {
    char names[M][N]; 
    for (int i = 0; i < M; i++) {
        scanf("%s", names[i]);
    }
    printf("\n");

    for (int i = 0; i < M; i++) {
        if (names[i][0] == names[i][strlen(names[i])-1]) {
            printf("%s\n", names[i]);
        }
    }

    return 0;
}