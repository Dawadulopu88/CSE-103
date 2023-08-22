#include <stdio.h>

int getFactor(int n)
{
    int i,c=0;
    for (i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            c++;
        }
    }
    return c;
}

int main()
{
    int x;
    scanf("%d",&x);
   int r=getFactor(x);
    printf("Number of Factors %d",r);
    return 0;
}

