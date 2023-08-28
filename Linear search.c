#include<stdio.h>
int main()
{
   while(1){
    int n;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter the values:\n");
    int a[n],i,t,idx=-1;
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("What to search: ");
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
        printf("Value not found\n");
    else
        printf("Found at index %d\n",idx);
   }
}
