#include <stdio.h>
#include <string.h>

int main(void) {
    char strings[3][10];
    char str[30];

    scanf("%s", strings[0]); 
    scanf("%s", strings[1]); 
    scanf("%s", strings[2]);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if ( k != j && k != i && j != i) {
                    str[0]= '\0';
                    strcat(str, strings[i]);
                    strcat(str, strings[j]);
                    strcat(str, strings[k]);
                    printf("%s\n", str);
                }
            }
        }
    }

    return 0;
}