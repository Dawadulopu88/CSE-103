#include<stdio.h>
void ODDorEVEN(int x)
{
    if(x%2==0)
        printf("EVEN\n");
    else
        printf("ODD\n");
}
int main ()
{
    int x;
    scanf("%d",&x);
    ODDorEVEN(x);
}
