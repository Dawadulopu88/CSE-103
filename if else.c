#include<stdio.h>
int main()
{
    int m;
    char g;
    scanf("%d",&m);
    if(m>=90)
        g='A';
    else if (m>=80)
        g='B';
    else if (m>=70)
        g='C';
    else
        g='F';
    printf("%d %c",m,g);
    return 0;
}
