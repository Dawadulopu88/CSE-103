#include <stdio.h>

int getPrime(int n) {
    int i,c=0;
    for (i=1;i<=n;i++)
        if (n%i==0)
            c++;
    if(c==2)
        return 1;
    else
        return 0;

}
int main() {
    int x,i,r;
    printf("n = ");
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        r=getPrime(i);
        if(r==1){
            printf("%d ",i);
        }
    }
}
