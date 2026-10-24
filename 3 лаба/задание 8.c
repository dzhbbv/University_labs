#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

void Клёвые_фишки();

int int_random(int s, int e);
double frandom(double s, double e);
void fill_arr(double arr[N][N], double a, double b);
void print_arr(double arr[N][N]);
double find_max(double arr[N][N]);
double find_sum(double arr[N][N]);
int find_count(double arr[N][N]);

int main(void) {
    srand(time(NULL));
    double a, b;
    scanf("%lf %lf", &a, &b);
    double arr[N][N];
    fill_arr(arr, a, b);
    print_arr(arr);

    printf("наибольший положительный элемент первых 4 строк %lf\n", find_max(arr));
    printf("сумму отрицательных элементов на главной диагонали %lf\n", find_sum(arr));
    printf("количество элементов, которые меньше случайного элемента массива %d\n", find_count(arr));

    Клёвые_фишки();

    return 0;
}

int find_count(double arr[N][N]) {
    int index1 = int_random(0, N-1);
    int index2 = int_random(0, N-1);
    double x = arr[index1][index2];
    printf("Случайный элемент %lf\n", x);
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (arr[i][j] < x) {
                count++;
            }
        }
    }
    return count;
}

double find_sum(double arr[N][N]) {
    double summa = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j && arr[i][j] < 0) {
                summa += arr[i][j];
            }
        }
    }
    return summa;
}

double find_max(double arr[N][N]) {
    double maxim = 0;
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (count > 4) {
            break;
        }
        for (int j = 0; j < N; j++) {
            if (arr[i][j] > 0 && maxim < arr[i][j]) {
                maxim = arr[i][j];
            }
        }
        count++;
    }
    return maxim;
}

void fill_arr(double arr[N][N], double a, double b) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = frandom(a, b);
        }
    }
}

void print_arr(double arr[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%lf\t", arr[i][j]);
        }
        printf("\n");
    }
}

double frandom(double s, double e) {
    return (double) rand() / RAND_MAX * (e - s) + s;
} 

int int_random(int s, int e) {
    return rand() % (e - s + 1) + s;
}

void Клёвые_фишки() {
    printf("!!! КЛЁВЫЕ ФИШКИ ДЛЯ КОНТРОЛЬНОЙ :) !!!\n \
    i+=1\n \
    scanf(...) == ...\n \
    n*(-1)\n \
    int minim = INT_MAX;\n \
    minim = 1000000000;\n \
    Как вас зовут?\n \
    Оно же работает\n \
    FILE * fp = fopen(\"input.txt\", \"w\");\n \
    if (!fp) {...}\n \
    void русская_функция_которая_ищет_максимум();\n \
    Массивы без #define\n \
    Поставьте автомат\n");
}