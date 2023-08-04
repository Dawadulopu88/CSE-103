#include<stdio.h>
int main(){
int y;
scanf("%d",&y);
if(y%400==0)printf("Yes");
else if (y%100==0)printf("No");
else if (y%4==0)printf("Yes");
else("No");
return 0;
}
