#include<stdio.h>
int getSmallestFactor(int n){
int r,c;
for (c=2;c<=n;c++){
    if(n%c==0){
        r=n/c;      //Smallest factor * Largest factor = Number
         break;
    }


}


return r;
}
int main(){
    int a;
scanf("%d",&a);
printf("%d",getSmallestFactor(a));

return 0;
}
