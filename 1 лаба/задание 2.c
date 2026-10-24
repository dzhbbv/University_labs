#include <stdio.h>

int main(void) {
    int cat = 5;
    printf("cat = %d\n", cat );
    cat /= 2; printf("cat / 2 = %d\n", cat );
    cat *= -3; printf("cat * (-3) = %d\n", cat );
    cat -= 7; printf("cat - 7 = %d\n", cat );
    cat += 4; printf("cat + 4 = %d\n", cat );
    cat++; printf("cat + 1 = %d\n", cat );
    printf("cat = %d\n", cat );
    
    return 0;
}   