#include <stdio.h>
int rev(int N)
{
    int reversed = 0;
    while (N > 0)
    {
        reversed = reversed * 10 + N % 10;
        N /= 10;
    }
    return reversed;
}
int isPalindrome(int n)
{
    return n == rev(n);
}
int main()
{
    int X;
    printf("Enter a 4-digit integer: ");
    scanf("%d", &X);
    if (X < 1000 || X > 9999)
    {
        printf("Invalid input. Please enter a 4-digit integer.\n");
        return 1;
    }
    int rx = rev(X);
    printf("Reverse = %d\n", rx);
    if (isPalindrome(X))
    {
        printf("palindrome\n", X);
    }
    else
    {
        printf("Not palindrome\n", X);
    }
    return 0;
}
