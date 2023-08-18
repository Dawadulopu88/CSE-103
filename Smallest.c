#include<stdio.h>
int getMin (int a, int b){
int r;
if (a<b)
    r=a;
else
    r=b;
return r;

}
int main (){
int a,b,c;
scanf("%d%d",&a,&b);
c= getMin(a,b);
printf("%d",c);

return 0;
}
