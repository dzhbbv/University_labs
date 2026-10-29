#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int min_mod_6(int arr[N]);
int max_arr(int arr[N]);
int int_random(int s, int e);

int main(void) {
    FILE * fp = fopen("output5.txt", "w");
    srand(time(NULL));
    
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[N];
    
    for (int i = 0; i < N; i++) {
        arr[i] = int_random(a,b);
        fprintf(fp, "%d\t", arr[i]);
    }
    fprintf(fp, "\n%d", min_mod_6(arr)+max_arr(arr));
    
    fclose(fp);
    return 0;
}

int min_mod_6(int arr[N]) {
    int ans = arr[0];
    for (int i = 0; i < N; i++) {
        if (arr[i] % 6 == 0 && ans > arr[i]) {
            ans = arr[i];
        }
    }
    if (ans % 6 != 0) {
        printf("Не найдено число кратное 6\n");
        exit(-1);
    }
    return ans;
}

int max_arr(int arr[N]) {
    int ans = arr[0];
    for (int i = 0; i < N; i++) {
        if (arr[i] > ans) {
            ans = arr[i];
        }
    }
    return ans;
}

int int_random(int s, int e) {
    return rand() % (e - s + 1) + s;
} 