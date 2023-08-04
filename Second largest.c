#include<stdio.h>
int main (){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if ((a<=b && a>=c)||(a<=c && a>=b))
    printf("Second largest: %d",a);
else if ((b<=a && b>=c)||(b<=c && b>=a))
    printf("Second largest: %d",b);
else
    printf("Second largest: %d",c);
return 0;
}
