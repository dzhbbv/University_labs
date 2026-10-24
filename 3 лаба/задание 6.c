#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3
#define M 3

int int_random(int s, int e);
void fill_array(int arr[N][M], int a, int b);
void print_arr(int arr[N][M]);
void fill_array_from_file(int arr[N][M]);
int find_max(int arr[N][M]);
double find_avg(int arr[N][M]);
int find_count(int arr[N][M]);

int main(void) {
    srand(time(NULL));
    int a, b;
    scanf("%d %d", &a, &b);
    int init_array[N][M];

    fill_array(init_array, a, b);
    print_arr(init_array);
    
    int new_array[N][M];
    fill_array_from_file(new_array);
    
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

void print_arr(int arr[N][M]) {
    FILE * fp = fopen("output6.txt", "w");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            fprintf(fp, "%d\t", arr[i][j]);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
}

void fill_array_from_file(int arr[N][M]) {
    FILE * fp = fopen("output6.txt", "r");
    if (!fp) {
        printf("Ошибка чтения файла\n");
        exit(-1);
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            fscanf(fp, "%d", &arr[i][j]);
        }
    }
    fclose(fp);
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
    int maxim = 0;
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