#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int int_random(int s, int e);
int find_sum(int arr[N]);
int find_larger_than_avg(int arr[N]);
int find_min_mod2(int arr[N]);

int main(void) {
    srand(time(NULL));
    int arr[N];
    for (int i = 0; i < N; i++) {
        arr[i] = int_random(-50, 50);
        printf("%d\t", arr[i]);
    }

    printf("\nсумма всех элементов находящихся в четных столбцах %d\n", find_sum(arr));
    printf("количество элементов, которые больше среднего арифметического значения всех отрицательных элементов %d\n", find_larger_than_avg(arr));
    printf("минимальный элемент кратный 2 %d\n", find_min_mod2(arr));

    return 0;
}

int int_random(int s, int e) {
    return rand() % (e - s + 1) + s;
}

int find_min_mod2(int arr[N]) {
    int minim = arr[0];
    for (int i = 0; i < N; i++) {
        if (arr[i]%2==0) {
            minim = arr[i];
            break;
        }
    }
    for (int i = 0; i < N; i++) {
        if (arr[i]%2==0 && arr[i] < minim) {
            minim = arr[i];
        }
    }
    return minim;
}

int find_larger_than_avg(int arr[N]) {
    int ans = 0, summa = 0, count = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] < 0) {
            summa+=arr[i];
            count++;
        }
    }
    double avg = (double) summa/count;
    for (int i = 0; i < N; i++) {
        if (arr[i] > avg) {
            ans++;
        }
    }
    return ans;
}

int find_sum(int arr[N]) {
    int ans = 0;    
    for (int i = 1; i < N; i+=2) {
        ans+=arr[i];
    }
    return ans;
}
