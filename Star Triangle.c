#include<stdio.h>
#include<windows.h>
int main(){
int i,j,n;
scanf("%d",&n);
for(j=1;j<=n;j++){
    for(i=1;i<=j;i++){
        printf("*");
       Sleep(100);
    }
    printf("\n");
}



return 0;
}
