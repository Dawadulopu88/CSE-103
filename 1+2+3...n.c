#include<stdio.h>
int main(){
int s,n,i,t;
s=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
    t=i;
    s=s+t;
}
printf("%d",s);
return 0;
}

