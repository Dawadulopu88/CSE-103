#include<stdio.h>
void ODDorEVEN(int x){
if(x%2==0)
    printf("EVEN\n");
else
    printf("ODD\n");
}
int main (){
ODDorEVEN(20);
ODDorEVEN(23);
}
