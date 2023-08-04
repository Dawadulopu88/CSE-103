#include<stdio.h>
int main(){
int x;
scanf("%d",&x);
switch(x%2){
case 0:
    printf("Its even");
    break;
case 1:
    printf("Its odd");
    break;
}

return 0;
}
