#include<stdio.h>
int main()
{
    int n;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    int a[n],i,max,idx;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    idx=0;
    max=a[0];
    for(i=1; i<n; i++)
    {
        if(max<a[i])
            max=a[i];
        idx=i;
    }
    printf("Max %d & Index %d",max,idx );
}
