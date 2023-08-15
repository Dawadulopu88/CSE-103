#include<stdio.h>
int MAX(int a,int b){
int m;
if(a>b)
    m=a;
    else
    m=b;
return m;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int p;
p=MAX(a,b);
printf("%d",p);


}
