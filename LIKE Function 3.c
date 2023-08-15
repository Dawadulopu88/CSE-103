#include<stdio.h>
LIKE()
{
    printf("Like ");
}
int main ()
{
    int i,x;
    scanf("%d",&x);
    printf("I ");


    for(i=1; i<=x; i++)
    {
        LIKE();
    }
    printf("You");

}

