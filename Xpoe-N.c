#include<stdio.h>

int main() {
    int n, x;
    double result = 1.0;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        result *= x;
    }
    result = 1.0 / result;

    printf("%d^(-%d) = %lf\n", x, n, result);

    return 0;
}
