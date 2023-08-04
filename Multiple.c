#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    switch(x%3)
    {
    case 0:
        printf("It is multiple of 3");
        break;
    default:
        printf("It is not multiple of 3");
        break;
    }
    return 0;
}
