#include <stdio.h>
#include <math.h>

double bigsum(int n, double a, double x) {
    double ans = 0;
    for (int k = 0; k <= n; k++) {
        ans += pow(x, k)*pow(a, n-k);
    }
    return ans;
}

int main(void) {
    int n; double a, x;

    printf("n = ");
    scanf("%d", &n);

    if (n < 0 || a < 0 || a == 1 || x < 0 || x == 1) {
        printf("Недопустимые значения");
        return 1;
    }

    // if (n < 0) {
    //     printf("n не может быть меньше 0"); return 1;
    // } if (a < 0) {
    //     printf("a не может быть меньше 0"); return 1;
    // } if (a == 1) {
    //     printf("a не может быть равен 1"); return 1;
    // } if (x < 0) {
    //     printf("x не может быть меньше 0"); return 1;
    // } if (x == 1) {
    //     printf("x не может быть равен 1"); return 1;
    // }

    printf("a = ");
    scanf("%lf", &a);

    printf("x = ");
    scanf("%lf", &x);

    printf("%lf\n", bigsum(n, a, x));

    return 0;
}