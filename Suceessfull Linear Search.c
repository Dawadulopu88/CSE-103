#include<stdio.h>
int main()
{
    int n;
    printf("How many numbers ");
    scanf("%d",&n);
    int a[n],i,t,idx=-1;
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("What to search ");
    scanf("%d",&t);
    for(i=0; i<n; i++)
    {
        if(t==a[i])
        {
            idx=i;
            break;
        }
    }
    if(idx==-1)
        printf("Not found");
    else
        printf("Found at index no. %d ",idx);
}
