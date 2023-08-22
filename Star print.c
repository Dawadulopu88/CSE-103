#include<stdio.h>
#include<windows.h>
int main(){
int i,j,n;
scanf("%d",&n);
for(j=1;j<=n;j++){
    for(i=1;i<=n-j;i++)

        printf(" ");
     for(i=1;i<=j;i++){
          printf("%c",'*');

       Sleep(100);

    }
    printf("\n");
}



return 0;
}
