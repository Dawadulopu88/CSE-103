#include<stdio.h>
int GCD(int a, int b)
{
    while (b != 0)
    {
        int temp;
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int num1,num2,num3;
    scanf("%d%d%d",&num1,&num2,&num3);
    int A;
    A = GCD(num1, num2);
    int FGCD;
    FGCD=GCD(A,num3);

    printf("GCD of %d , %d & %d is %d\n",num1,num2,num3,FGCD);
    return 0;
}

