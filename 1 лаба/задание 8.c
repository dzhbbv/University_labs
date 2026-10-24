#include <stdio.h>

int main(void) {
    char c;
    printf("c = ");
    scanf("%c", &c);

    switch (c) {
        case 'M':
            printf("Moscow\n");
            break;
        case 'S':
            printf("Samara\n");
            break;
        case 'D':
            printf("Dmitrov\n");
            break;
        case 'B':
            printf("Belgorod");
            break;
        case 'P':
            printf("Pskov\n");
            break;
        case 'V':
            printf("Vladimir\n");
            break;
        default:
            printf("Некорректный ввод\n");
            break;
    }

    return 0;
}