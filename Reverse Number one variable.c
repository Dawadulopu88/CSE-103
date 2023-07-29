#include<stdio.h>
int main(){
int x,y;
int a,b,c,d;
printf("Enter the Four digit number: ");
scanf("%d",&x);
d=x%10;
x=x/10;
c=x%10;
x=x/10;
b=x%10;
a=x/10;
y=(d*1000)+(c*100)+(b*10)+a;
printf("The reverse of the number is: %d",y);

}
