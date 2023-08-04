#include<stdio.h>
int main()
{
    int x,y,max;
    scanf("%d%d",&x,&y);
    switch(x>y)
    {
    case 1:
        max=x;
        break;
    case 0:
        max=y;
        break;
    }
printf("%d",max);
    return 0;
}
