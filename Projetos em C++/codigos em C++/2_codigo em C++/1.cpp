#include<stdio.h>
#include<math.h>
main(){
	float x,z,y;
	printf("digite o valor de x:");
	scanf("%f",&x);
	printf("digite o valor de z:");
	scanf("%f",&z);
    y=pow(z,3)+(7/x)+(z*x);
	printf("valor de y= %.2f", y);	
}
