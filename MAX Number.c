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
    int p;
p=MAX(20,50);
printf("%d",p);


}
