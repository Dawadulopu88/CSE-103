#include<stdio.h>
int getDays(int y){
    int d;
if(y%400==0)
    d=366;
else if (y%100==0)
    d=365;
else if (y%4==0)
    d=366;
else
    d=365;
return d;
}
int main (){
int x,r;
scanf("%d",&x);
r=getDays(x);
printf("Days %d\n",r);
if(r==366)
    printf("Leap Year");
else
    printf("Its not a Leap Year");
return 0;
}
