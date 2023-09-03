#include <stdio.h>
int PerfectNum(int num)
{
    int sum = 1; /// every number is divisible by 1
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
            if (i * i != num)
            {
                sum += num / i;
            }
        }
    }

    return sum == num;
}
int main()
{
    int n;
    printf("Enter a number (n): ");
    scanf("%d", &n);
    printf("Perfect numbers between 2 and %d:\n", n);
    for (int i = 2; i <= n; i++)
    {
        if (PerfectNum(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
