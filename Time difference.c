#include<stdio.h>
int main(){
	int h1,m1,h2,m2,h,m,d;
	printf("First city Hour: ");
	scanf("%d",&h1);
	printf("First city minute: ");
	scanf("%d",&m1);
	printf("Second city Hour: ");
	scanf("%d",&h2);
	printf("Second city minute: ");
	scanf("%d",&m2);
	d=(h1*60+m1)-(h2*60+m2);
	h=d/60;
	m=d%60;
	printf("Time difference between two city is %d hours and %d minutes",h,m);
}
