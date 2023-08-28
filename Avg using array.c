#include<stdio.h>
int main (){
int n;
float avg;
printf("Enter the array size: ");
scanf("%d",&n);
printf("Enter the values:\n");
int i;
int a[n],s=0;
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++)
    s=s+a[i];
avg=(1.0*s)/n;
printf("%.2f",avg);




return 0;
}
