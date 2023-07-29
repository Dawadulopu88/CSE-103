#include<stdio.h>
#include<math.h>
int main(){
int n;
float b,r,b1,b2,bn;
printf("Enter the current balance: ");
scanf("%f",&b);
printf("Enter the interest rate: ");
scanf("%f",&r);
printf("How many Years: ");
scanf("%d",&n);
r=r/100;
b1=b+b*r;
b2=b1+(b1*r);
bn=b*pow(1+r,n);
printf("Balane after 1 year: %.3f\n",b1);
printf("Balane after 2 years: %.3f\n",b2);
printf("Balane after %d years: %.3f",n,bn);
}
