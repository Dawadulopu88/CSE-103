#include<stdio.h>
int main()
{
    int n;
    printf("How many subjects: ");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
    int a[n],i,m;
    char g[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        m=a[i];
        if(m>=90)
            g[i]= 'A';
        else if(m>=80)
            g[i]='B';
        else if(m>=70)
            g[i]='C';
        else if(m>=60)
            g[i]='D';
        else
            g[i]= 'F';
    }
    for(i=0; i<n; i++)
        printf("The number grade of %d is %c\n",a[i],g[i]);
}
