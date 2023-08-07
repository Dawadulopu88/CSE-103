#include<stdio.h>
int main ()
{
    int x;
    scanf("%d",&x);

    while (x<0)
    {


        printf("Please enter a positive number");
        scanf("%d",&x);
    }

    return 0;
}
