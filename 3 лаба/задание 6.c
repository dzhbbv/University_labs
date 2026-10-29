#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3
#define M 3

int int_random(int s, int e);
void fill_array(int arr[N][M], int a, int b);
int find_max(int arr[N][M]);
double find_avg(int arr[N][M]);
int find_count(int arr[N][M]);

int main(void) {
    FILE * fp = fopen("output6.txt", "w");
    srand(time(NULL));
    int a, b;
    scanf("%d %d", &a, &b);
    int init_array[N][M];

    fill_array(init_array, a, b);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            fprintf(fp, "%4d", init_array[i][j]);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    
    int new_array[N][M];
    fp = fopen("output6.txt", "r");
    if (!fp) {
        printf("Ошибка чтения файла\n");
        exit(-1);
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            fscanf(fp, "%d", &new_array[i][j]);
        }
    }
    fclose(fp);
    
    printf("максимальный положительный элемент = %d\n", find_max(new_array));
    printf("среднее арифметическое значение элементов в нечетных строках = %lf\n", find_avg(new_array));
    printf("количество отрицательных элементов выше главной диагонали = %d\n", find_count(new_array));

    return 0;
}

void fill_array(int arr[N][M], int a, int b) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            arr[i][j] = int_random(a, b);
        }
    }
}

int int_random(int s, int e) {
    return rand() % (e - s + 1) + s;
}

void print_arr_console(int arr[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int find_max(int arr[N][M]) {
    int maxim = arr[0][0];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (maxim < arr[i][j]) {
                maxim = arr[i][j];
            }
        }
    }
    return maxim;
}

double find_avg(int arr[N][M]) {
    int summa = 0, count = 0;
    for (int i = 0; i < N; i++) {
        if ( i%2!=0 && i != 0 ) {
            for (int j = 0; j < M; j++) {
                summa += arr[i][j];
                count++;
            }
        }
    }
    return (double) summa/count;
}

int find_count(int arr[N][M]) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < M; j++) {
            if (arr[i][j] < 0) {
                count++;
            }
        }
    }
    return count;
}