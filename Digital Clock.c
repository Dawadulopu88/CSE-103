#include<stdio.h>
#include<windows.h>
#include<time.h>
int main(){
int s,m,h;
for(h=0;h<=24;h++){
for(m=0;m<=59;m++){
for(s=0;s<=59;s++){
    printf("%02d:%02d:%02d",h,m,s);
    Sleep(1000);
    printf("\b\b\b\b\b\b\b\b");
}
}
}
return 0;
}
