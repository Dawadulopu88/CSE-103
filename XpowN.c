#include<stdio.h>

int main() {
    int n, x;
    long long result = 1;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        result *= x;
    }

    printf("%d^%d = %lld\n", x, n, result);

    return 0;
}
