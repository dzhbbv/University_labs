#include <stdio.h>
#define N 5

int main(void) {
    FILE * fp = fopen("input4.txt", "r");
    int arr[N];
    if (!fp) {
        printf("Ошибка чтения файла\n");
        return 1;
    }
    for (int i = 0; i < N; i++) {
        fscanf(fp, "%d", &arr[i]);
        printf("%d\t", arr[i]);
    } printf("\n");
    
    for (int i = 0; i < N; i++) {
        if (arr[i]%3==0 && arr[i] < 0) {
            arr[i] = 0;
        }
        printf("%d\t", arr[i]);
    }
    
    return 0;
}