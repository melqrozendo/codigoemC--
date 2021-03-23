#include<stdio.h>
#include<stdlib.h>
main(){
	int num1,num2;
	int x,y,r,v;
	printf("digite um numero:");
	scanf("%d",& num1);
	printf("digite outro numero:");
	scanf("%d", & num2);
	x=num1;
	y=num2;
	do{
	r=x % y;
	x=y;
	y=r;
	}
	while (r != 0);
	v=(num1*num2)/x;
	printf("%d", v);
	return 0;

}
